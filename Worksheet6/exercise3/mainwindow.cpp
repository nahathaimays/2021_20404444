#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

	// standard call to setup Qt UI (same as previously)
	ui->setupUi(this);

	connect(ui->ResetCamera, &QPushButton::released, this, &MainWindow::handleResetCamera);
	connect(ui->LightIntensity, &QSlider::valueChanged, this, &MainWindow::handleLightIntensity);

	connect(ui->ChangeCube, &QPushButton::released, this, &MainWindow::change_to_cube);
	connect(ui->ChangeCylinder, &QPushButton::released, this, &MainWindow::change_to_cylinder);

	connect(ui->RBackground, &QSlider::valueChanged, this, &MainWindow::changeBGcolour);
	connect(ui->GBackground, &QSlider::valueChanged, this, &MainWindow::changeBGcolour);
	connect(ui->BBackground, &QSlider::valueChanged, this, &MainWindow::changeBGcolour);
	connect(ui->RModel, &QSlider::valueChanged, this, &MainWindow::changeModelcolour);
	connect(ui->GModel, &QSlider::valueChanged, this, &MainWindow::changeModelcolour);
	connect(ui->BModel, &QSlider::valueChanged, this, &MainWindow::changeModelcolour);

	connect(ui->shrinkfilter, &QCheckBox::stateChanged, this, &MainWindow::handleShrinkFilter);
	connect(ui->clipfilter, &QCheckBox::stateChanged, this, &MainWindow::handleClipFilter);

	// Now need to create a VTK render window and link it to the QtVTK widget
	vtkNew<vtkGenericOpenGLRenderWindow> renderWindow;
	ui->qvtkWidget->SetRenderWindow(renderWindow);   // note that vtkWidget is the name I gave to my QtVTKOpenGLWidget in Qt creator

	// Now use the VTK libraries to render something. To start with you can copy-paste the cube example code, there are comments to show where the code must be modified.
	//--------------------------------------------- Code From Example 1 --------------------------------------------------------------------------

		// Open File
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open STL File"), "./", tr("STL Files(*.stl)"));
	std::string str = fileName.toLatin1().constData();
	reader = vtkSmartPointer<vtkSTLReader>::New();
	reader->SetFileName(str.data());
	reader->Update();

	source = reader;

	mapper = vtkSmartPointer<vtkDataSetMapper>::New();
	mapper->SetInputConnection(reader->GetOutputPort());

	// Create an actor that is used to set the cube's properties for rendering and place it in the window
	actor = vtkSmartPointer<vtkActor>::New();
	actor->SetMapper(mapper);
	actor->GetProperty()->EdgeVisibilityOn();

	colors = vtkSmartPointer<vtkNamedColors>::New();
	actor->GetProperty()->SetColor(colors->GetColor3d("Red").GetData());

	// Create a renderer, and render window
	renderer = vtkSmartPointer<vtkRenderer>::New();
	//vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();  // ###### We've already created the renderWindow this time ######
	ui->qvtkWidget->GetRenderWindow()->AddRenderer(renderer);                                   // ###### ask the QtVTKOpenGLWidget for its renderWindow ######

	// Render Light
	light = vtkSmartPointer<vtkLight>::New();

	// Add the actor to the scene
	renderer->AddActor(actor);
	renderer->AddLight(light);
	renderer->SetBackground(colors->GetColor3d("Silver").GetData());

	// Setup the renderers's camera
	renderer->ResetCamera();
	renderer->GetActiveCamera()->Azimuth(30);
	renderer->GetActiveCamera()->Elevation(30);
	renderer->ResetCameraClippingRange();

	// Render and interact
		// renderWindow->Render();            // ###### Not needed with Qt ######
		// renderWindowInteractor->Start();   // ###### Not needed with Qt ######
	//--------------------------------------------- /Code From Example 1 -------------------------------------------------------------------------*/
}

void MainWindow::on_actionFileOpen_triggered() {

	QString fileName = QFileDialog::getOpenFileName(this, tr("Open STL File"), "./", tr("STL Files(*.stl)"));
	std::string str = fileName.toLatin1().constData();
	reader->SetFileName(str.data());
	reader->Update();

	source = reader;

	ui->qvtkWidget->GetRenderWindow()->Render();
}



// Reset -----------------------------------------------------------------------------------------------------------------------------------
void MainWindow::handleResetCamera() {

	renderer->ResetCamera();
	mapper->SetInputConnection(source->GetOutputPort());

	ui->qvtkWidget->GetRenderWindow()->Render();
}


// Light Intensity ---------------------------------------------------------------------------------------------------------------------
void MainWindow::handleLightIntensity(int position) {

	light->SetIntensity((float)(position) / 100);
	ui->qvtkWidget->GetRenderWindow()->Render();
}

void MainWindow::change_to_cube() {

	// Now need to create a VTK render window and link it to the QtVTK widget
	vtkNew<vtkGenericOpenGLRenderWindow> renderWindow;
	ui->qvtkWidget->SetRenderWindow(renderWindow);			// note that vtkWidget is the name I gave to my QtVTKOpenGLWidget in Qt creator

	mapper->SetInputConnection(cubeSource->GetOutputPort());

	actor->SetMapper(mapper);
	actor->GetProperty()->EdgeVisibilityOn();

	source = cubeSource;

	// Create a renderer, and render window	// ###### We've already created the renderWindow this time ######
	ui->qvtkWidget->GetRenderWindow()->AddRenderer(renderer);									// ###### ask the QtVTKOpenGLWidget for its renderWindow ######			

	// Add the actor to the scene
	renderer->AddActor(actor);

	ui->qvtkWidget->GetRenderWindow()->Render();
}

void MainWindow::change_to_cylinder() {

	// Now need to create a VTK render window and link it to the QtVTK widget
	vtkNew<vtkGenericOpenGLRenderWindow> renderWindow;
	ui->qvtkWidget->SetRenderWindow(renderWindow);

	// Create a cylinder
	cylinderSource->SetResolution(100);

	// Create a mapper and actor
	mapper->SetInputConnection(cylinderSource->GetOutputPort());
	actor->SetMapper(mapper);
	actor->GetProperty()->EdgeVisibilityOn();
	
	source = cylinderSource;

	//Create a renderer, render window, and interactor
	ui->qvtkWidget->GetRenderWindow()->AddRenderer(renderer);

	// Add the actor to the scene
	renderer->AddActor(actor);

	ui->qvtkWidget->GetRenderWindow()->Render();
}

// Change background color -------------------------------------------------------------------------------------------------------------
void MainWindow::changeBGcolour() {
	int Red = ui->RBackground->value();
	int Green = ui->GBackground->value();
	int Blue = ui->BBackground->value();
	renderer->SetBackground((float)(Red) / 100, (float)(Green) / 100, (float)(Blue) / 100);
	ui->qvtkWidget->GetRenderWindow()->Render();
}

// Change model color ------------------------------------------------------------------------------------------------------------------
void MainWindow::changeModelcolour() {
	int Red = ui->RModel->value();
	int Green = ui->GModel->value();
	int Blue = ui->BModel->value();
	actor->GetProperty()->SetColor((float)(Red) / 100, (float)(Green) / 100, (float)(Blue) / 100);
	ui->qvtkWidget->GetRenderWindow()->Render();
}

// Shrink filter ---------------------------------------------------------------------------------------------------------------------
void MainWindow::handleShrinkFilter(bool checked) {
	if (ui->shrinkfilter->isChecked()) {
		if (ui->clipfilter->isChecked()) {
			shrinkfilter->SetInputConnection(source->GetOutputPort());
			shrinkfilter->SetShrinkFactor(.8);
			shrinkfilter->Update();

			planeLeft->SetOrigin(0.0, 0.0, 0.0);
			planeLeft->SetNormal(-1.0, 0.0, 0.0);
			clipfilter->SetInputConnection(source->GetOutputPort());
			clipfilter->SetClipFunction(planeLeft.Get());

			mapper->SetInputConnection(clipfilter->GetOutputPort());
		}
		else {
			shrinkfilter->SetInputConnection(source->GetOutputPort());
			shrinkfilter->SetShrinkFactor(.8);
			shrinkfilter->Update();
			mapper->SetInputConnection(shrinkfilter->GetOutputPort());
		}
	}
	else {
		if (ui->clipfilter->isChecked()) {

			planeLeft->SetOrigin(0.0, 0.0, 0.0);
			planeLeft->SetNormal(-1.0, 0.0, 0.0);
			clipfilter->SetInputConnection(source->GetOutputPort());
			clipfilter->SetClipFunction(planeLeft.Get());
			mapper->SetInputConnection(clipfilter->GetOutputPort());
		}
		else {
			shrinkfilter->SetInputConnection(source->GetOutputPort());
			shrinkfilter->SetShrinkFactor(1.0);
			shrinkfilter->Update();
			mapper->SetInputConnection(shrinkfilter->GetOutputPort());
		}
	}
	ui->qvtkWidget->GetRenderWindow()->Render();
}

// Clip Filter --------------------------------------------------------------------------------------------------------------------------
void MainWindow::handleClipFilter(bool checked) {
	if (ui->clipfilter->isChecked()) {
		if (ui->shrinkfilter->isChecked()) {

			planeLeft->SetOrigin(0.0, 0.0, 0.0);
			planeLeft->SetNormal(-1.0, 0.0, 0.0);
			clipfilter->SetInputConnection(source->GetOutputPort());
			clipfilter->SetClipFunction(planeLeft.Get());

			shrinkfilter->SetInputConnection(clipfilter->GetOutputPort());
			shrinkfilter->SetShrinkFactor(.8);
			shrinkfilter->Update();

			mapper->SetInputConnection(shrinkfilter->GetOutputPort());
		}
		else {

			planeLeft->SetOrigin(0.0, 0.0, 0.0);
			planeLeft->SetNormal(-1.0, 0.0, 0.0);
			clipfilter->SetInputConnection(source->GetOutputPort());
			clipfilter->SetClipFunction(planeLeft.Get());
			mapper->SetInputConnection(clipfilter->GetOutputPort());
		}
	}
	else {
		if (ui->shrinkfilter->isChecked()) {
			shrinkfilter->SetInputConnection(source->GetOutputPort());
			shrinkfilter->SetShrinkFactor(.8);
			shrinkfilter->Update();
			mapper->SetInputConnection(shrinkfilter->GetOutputPort());
		}
		else {

			mapper->SetInputConnection(source->GetOutputPort());
		}
	}
	ui->qvtkWidget->GetRenderWindow()->Render();
}


MainWindow::~MainWindow()
{
	delete ui;
}