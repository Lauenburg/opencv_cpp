#include <iostream>
#include <opencv2/opencv.hpp>
#include "toolbox.h" 

using namespace cv;
using namespace std;

string load_and_depict_img(string path, string title)
{
    Mat image = load_img(path);
    string windowName = depict_img(image, title);
    return windowName;    
}


Mat load_img(string path) {
  // Read the image file
  Mat image = imread(path);

  // Check for failure
  if (image.empty()) {
    runtime_error("Could not find or open file");
  }

  return image;
}

string depict_img(Mat image, string windowName) {
  namedWindow(windowName);  // Create a window

  imshow(windowName, image);  // Show our image inside the created window.

  return windowName;
}

