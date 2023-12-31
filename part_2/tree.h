#ifndef TREE_H_
#define TREE_H_

#include "entity.h"

// Represents a Tree in a physical system
class Tree : public Entity {
 public:
  // Trees are on the ground, so do not have a z component
  Tree(const std::string& name, double x, double y) : name(name) {
    pos[0] = x;
    pos[1] = y;
  }
  // Gets the tree name
  const std::string& GetName() override { return name; }
  // Gets the tree position
  std::vector<double> GetPosition() override { return pos; }

 private:
  std::vector<double> pos = std::vector<double>(2);
  std::string name;
};

#endif
