#ifndef DOVE_EYE_CV_LOGGING_H_
#define DOVE_EYE_CV_LOGGING_H_

#include <map>
#include <string>

#include <opencv2/opencv.hpp>

namespace dove_eye {

void log_mat(int id, const cv::Mat &mat);

void log_color_hist(int id, const cv::Mat &hist, const int hsize);

} // end namespace dove_eye
#endif // DOVE_EYE_CV_LOGGING_H_

