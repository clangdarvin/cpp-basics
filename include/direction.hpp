#ifndef CPPBASICS_DIRECTION_HPP
#define CPPBASICS_DIRECTION_HPP

#include <SFML/Graphics.hpp>

#include "point.hpp"
#include "constants.hpp"

enum Direction {
    North,
    East,
    South,
    West,
};

Point2D getDirection(Direction direction);

inline Point2D calculateVelocity() {
    Point2D velocity = { 0.0f, 0.0f };
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
        velocity = add(velocity, getDirection(North));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
        velocity = add(velocity, getDirection(East));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
        velocity = add(velocity, getDirection(South));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
        velocity = add(velocity, getDirection(West));
    }
    velocity = mul(SPEED, velocity);
    return velocity;
}

#endif // CPPBASICS_DIRECTION_HPP
