#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    VideoCapture Vid("C:\\qwe.mp4");

    Mat img;

    vector<Mat> v;

    if (!Vid.isOpened()) {
        cout << "break";
        return -1;
    }

    int count = 0;
    while (1) {
        Vid >> img;

        resize(img, img, Size(200, 200));

        if (count % 60 == 0) {
            imshow("asdf", img);
            v.push_back(img);
        }
        count++;

        if (count >= 60 * 10) {
            break;
        }

        if (waitKey(1) == 27) {
            break;
        }
    }


    /*for (int i = 0; i < v.size(); i++) {
        imshow("asdf", v[i]);
        waitKey();
    }*/

    Mat pano;
    Ptr<Stitcher> stitcher = Stitcher::create(Stitcher::PANORAMA);
    Stitcher::Status status = stitcher->stitch(v, pano);

    if (status != Stitcher::OK) {
        cout << "can't stitch" << int(status) << endl;
        return EXIT_FAILURE;
    }

    imshow("asdf", pano);
    waitKey(0);

    return 0;
}