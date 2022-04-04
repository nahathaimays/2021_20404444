#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vtkSmartPointer.h>
#include <vtkCubeSource.h>
#include <vtkCylinderSource.h>
#include <vtkConeSource.h>
#include <vtkActor.h>
#include <vtkProperty.h>
#include <vtkCamera.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkDataSetMapper.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <vtkShrinkFilter.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkOpenGLPolyDataMapper.h>
#include <QFileDialog>
#include <vtkSTLReader.h>
#include <vtkLight.h>
#include <vtkPlane.h>
#include <vtkAlgorithm.h>
#include <vtkClipDataSet.h>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();



protected:
    int model;

public slots:
    void on_actionFileOpen_triggered();
    void handleResetCamera();
    void handleLightIntensity(int position);
    void change_to_cube();
    void change_to_cylinder();
    void changeBGcolour();
    void changeModelcolour();
    void handleShrinkFilter(bool checked);
    void handleClipFilter(bool checked);


private:
    Ui::MainWindow* ui;
    vtkSmartPointer<vtkPlane> planeLeft = vtkSmartPointer<vtkPlane>::New();
    vtkSmartPointer<vtkClipDataSet> clipfilter = vtkSmartPointer<vtkClipDataSet>::New();
    vtkSmartPointer<vtkShrinkFilter> shrinkfilter = vtkSmartPointer<vtkShrinkFilter>::New();
    vtkSmartPointer<vtkDataSetMapper> mapper = vtkSmartPointer<vtkDataSetMapper>::New();
    vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
    vtkSmartPointer<vtkNamedColors> colors = vtkSmartPointer<vtkNamedColors>::New();
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    vtkSmartPointer<vtkLight> light = vtkSmartPointer<vtkLight>::New();
    vtkSmartPointer<vtkSTLReader>reader = vtkSmartPointer<vtkSTLReader>::New();
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> renderWindow = vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();
    vtkSmartPointer<vtkAlgorithm> source;
    vtkSmartPointer<vtkCubeSource> cubeSource = vtkSmartPointer<vtkCubeSource>::New();
    vtkSmartPointer<vtkCylinderSource> cylinderSource = vtkSmartPointer<vtkCylinderSource>::New();


};

#endif // MAINWINDOW_H