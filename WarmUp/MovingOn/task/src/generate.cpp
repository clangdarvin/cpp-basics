#include <cstdlib>

#include "game.hpp"

Circle generateCircle(float radius) {
  const Circle circle = {{0, 0}, 0};
  /* TODO: Implement the function */
  return circle;
}

float generateCoordinate(float min, float max) {
  srand(time(NULL));
  const float x{min + rand() / (RAND_MAX / (max - min))};
  return x;
}
