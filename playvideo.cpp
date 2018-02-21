//
//  playvideo.cpp
//  PlayVideo
//
//  Created by Augusta Bogie on 18/02/18.
//  Copyright 2018 Augusta Bogie. All rights reserved.
//
//  Compile this with g++ -O3 -s -o playvideo -lopencv_core -lopencv_video -lopencv_highgui playvideo.cpp
//

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include "opencv2/opencv.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2) {
		cout << "Please provide video path. Example: /home/pi/Desktop/sample.mp4" << endl;
		exit(1);
	} else {
		// If you want to original size window by video size change CV_WINDOW_NORMAL to CV_WINDOW_AUTOSIZE
		cvNamedWindow("Prototype", CV_WINDOW_NORMAL);

		// Comment line below if you are using CV_WINDOW_AUTOSIZE
		cvSetWindowProperty("Prototype", CV_WND_PROP_FULLSCREEN, CV_WINDOW_FULLSCREEN);

		//  Change sample.mp4 with your sample video
		CvCapture* capture = cvCreateFileCapture(argv[1]);
		IplImage* frame = NULL;

		while (1) {
			frame = cvQueryFrame(capture);
			if (!frame) break;
			cvShowImage("Prototype", frame);
			char c = cvWaitKey(33);
			if (c == 27) break;
		}

		cvReleaseCapture(&capture);
		cvDestroyWindow("Prototype");
		cout << "End of Demo Prototype!" << endl;
		return 0;
	}
}
