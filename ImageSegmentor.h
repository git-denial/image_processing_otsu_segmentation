#pragma once
#include <qwidget.h>
#include <opencv2/opencv.hpp>
#include <QFileDialog> 
#include <QLabel>
#include <opencv2/core/types.hpp>

using namespace std;
using namespace cv;

extern Mat theImage; 
extern Mat theResult;
extern int openflag;
extern QString showName;

class ImageSegmentor :
	public QWidget
{
public:
	ImageSegmentor();
	~ImageSegmentor();
	void exeSegment();
};
