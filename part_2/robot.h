#ifndef ROBOT_H_
#define ROBOT_H_
#include "entity.h"

// Represents a robot in a physical system.
// Robots move in a circle with a specified radius.
class Robot : public MovableEntity {
 public:
  // Robots are declared with a name and a radius
  Robot(const std::string& name, float radius);
  // Gets the robot name
  const std::string& GetName() override { return name; }
  // Gets the robot position
  std::vector<double> GetPosition() override { return pos; }
  // Updates the robot's position
  void Update(double dt) override;

 private:
  std::string name;
  std::vector<double> pos = std::vector<double>(2);
  double angle;
  double radius;
};

#endif