#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include <iostream>
#include <signal.h>

using namespace cv;
using namespace std;

static Mat image = Mat::zeros(480, 640, CV_8UC1);

void take_shut(int a)
{
    cout << a;
}

int main(int ,char**)
{
    cout << "Built with OpenCV " << endl;
    
    VideoCapture cap(0);
    signal(SIGINT,take_shut);
   
    if(cap.isOpened())
    {
        cout << "Capture is opened" << endl;
        cap >> image;
        for(;;)
        {
        }
    }
    else
    {
        cout << "No capture" << endl;
    }
    return 0;
}