#include "game.hpp"

Point2D getDirection(Direction direction) {
  {
    case Direction::North:
      return {0.0f, -1.0f};
    case Direction::East:
      return {1.0f, 0.0f};
    case Direction::West:
      return {-1.0f, 0.0f};
    case Direction::South:
      return {0.0f, 1.0f};
    default:
      break;
  }
}