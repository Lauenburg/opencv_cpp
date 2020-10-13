#include <opencv2/opencv.hpp>
#include <iostream>
#include "toolbox.h"

using namespace std;

int main(int argc, char** argv) {
  string windowName = "";
  try {
  windowName =  load_and_depict_img(
        "/Users/lauenburg/Privat/CodeProjects/opencv_cpp/data/images/"
        "octobiwan.jpg",
        "Hello YOU");
  } catch (exception& ex) {
    cout << "Ouch! That hurts, because: " << ex.what() << "!\n";
  }
  cv::waitKey(0); // Wait for any keystroke in the window

  cv::destroyWindow(windowName); //destroy the created window
  return 0;
}
