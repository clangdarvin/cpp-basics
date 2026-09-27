#include <cmath>

#include "game.hpp"

float distance(Point2D a, Point2D b) {}

bool collision(Circle circle1, Circle circle2) {
  float total_radii{circle1.radius + circle2.radius};
  float dist{distance(circle1.center, circle2.center)};
  if (dist < total_radii) {
    return true;
  }
  return false;
}
}