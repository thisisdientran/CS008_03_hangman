#ifndef FLOAT_RECT_H
#define FLOAT_RECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class FloatRect{
    public:
        float getWidth();
        float getHeight();
        float getLeft();
        float getTop();
        float getRight();
        float getBottom();
        sf::Vector2f getCenter();
};


#endif