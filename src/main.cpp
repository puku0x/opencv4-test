#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("baboon.jpg");
    cv::namedWindow("gori");
    cv::imshow("gori", image);
    cv::waitKey(0);
    return 0;
}