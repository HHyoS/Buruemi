
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    // Open the default camera
    VideoCapture cap(0);

    // Check if camera opened successfully
    if(!cap.isOpened()){
        cout << "Error opening video stream or file" << endl;
        return -1;
    }

    while(1){

        Mat frame;

        // Grab a new frame from the camera
        cap.grab();

        // Decode and return the grabbed frame
        cap.retrieve(frame);

        // If the frame is empty, break immediately
        if (frame.empty())
          break;

        // Display the resulting frame
        imshow( "Frame", frame );

        // Press  ESC on keyboard to exit
        if(waitKey(1)==27)
          break;
    }

    // When everything done, release the video capture object
    cap.release();

    // Closes all the frames
    destroyAllWindows();

    return 0;
}
