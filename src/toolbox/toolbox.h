#ifndef TOOLBOX_H_
#define TOOLBOX_H_

std::string load_and_depict_img(std::string path, std::string title);
cv::Mat load_img(std::string path);
std::string depict_img(cv::Mat image, std::string title);
int destdoy_window(std::string window);

#endif
