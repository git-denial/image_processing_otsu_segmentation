#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageSegmentationUI.h"
#include "ImageSegmentor.h"

class ImageSegmentationUI : public QMainWindow
{
	Q_OBJECT

public:
	ImageSegmentationUI(QWidget *parent = Q_NULLPTR);
	ImageSegmentor * ist;

	int windowWidth = 1500; 
	int windowHeight = 900;
	int imageWidth = windowWidth / 4 * 3 / 3; 
	int imageHeight = windowHeight / 4 * 3 / 2;

	int imagePosition[6][2] = {{200,windowHeight / 10},{620,windowHeight / 10},{1040,windowHeight / 10},
	{200,windowHeight / 2 +50},{620,windowHeight / 2 + 50},{1040,windowHeight / 2 + 50} };
    string resultPaths[2] = { "","./Otsu.jpg" };
    string resultNames[2] = {"Source", "Otsu"};
    QLabel *labelImage[2];
    QLabel *labelTxtForImage[2];
	QLabel *labelTxtForInstruction;
	//QLabel *labelResult1;
	//QLabel *labelTxt1;
	//QLabel *labelResult2;
	//QLabel *labelTxt2;
	//QLabel *labelResult3;
	//QLabel *labelTxt3;
	//QLabel *labelResult4;
	//QLabel *labelTxt4;
	//QLabel *labelResult5;
	//QLabel *labelTxt5;

	void openAndShowImage();
	void imageSegmenting();
	void showSegImage();
    void showAlgInfo();
	void changeFilename1();
	void changeFilename2();
	void changeFilename3();
	void changeFilename4();
	void changeFilename5();
	void changeFilename6(); 
	void paintEvent(QPaintEvent *event);

private:
	Ui::ImageSegmentationUIClass ui;
};
