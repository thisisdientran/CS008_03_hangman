#ifndef GRAPHIC_VIEW_H
#define GRAPHIC_VIEW_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "../view/View.h"

class GraphicView:public sf::Drawable, public View{
    private:
        sf::RectangleShape phrasePane, bodyPane,letterBank, resetButton;
        sf::Vector2u windowSize;
        sf::Font font;
        sf::Text text;
        // void setupPhrase();
        // setupBody();
        // setupIncorrectLetter();
        // setupResetButton();

    public:
        GraphicView();
        void init(sf::Vector2u windowSize);
        // virtual void draw(sf::graphics::;

}

#endif