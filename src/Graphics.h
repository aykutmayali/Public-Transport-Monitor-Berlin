#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <opencv2/core.hpp>
#include <string>
#include <vector>
#include <memory>

#include "PublicTransport.cpp"

class Graphics {
 public:
  // constructor / desctructor

  // getters / setters
  void SetBgFilename(std::string filename);
  void SetVehicles(std::vector<std::unique_ptr<Vehicle>> *vehicles);

  // typical behaviour methods
  void Simulate(PublicTransport &transport);

 private:
  // typical behaviour methods
  void LoadBackgroundImg();
  void DrawVehicles();

  // member variables
  std::vector<std::unique_ptr<Vehicle>> *_vehicles;
  std::string _bgFilename;
  std::string _windowName;
  std::vector<cv::UMat> _images;
};

#endif