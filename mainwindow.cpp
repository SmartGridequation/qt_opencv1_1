#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cv::Mat image = cv::imread("D:/anaconda2/work/2.jpg");
    // create image window named "My Image"
    cv::namedWindow("My Image",CV_WINDOW_AUTOSIZE);
    // show the image on window
    cv::imshow("My Image", image);
    cv::waitKey(600000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
