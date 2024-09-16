#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <time.h>

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
const int GRID_WIDTH = 200;
const int GRID_HEIGHT = 110;
const int CELL_SIZE = 5;

using namespace std;

// class GraphicView:public sf::Drawable(){
//     public:
//         GraphicView(View&view sf::vector2<G> windowSize);
//         virtual void draw(sf::RenderTarget& window, sf::RenderStales stales) const{
//             window.draw(A);
//             window.draw(B);
//         }
//     private:
//         sf::Ractangle A,B,C,D,E;
// }

int main(int argc, char *argv[])
{
    //----------S E T U P ------------------------------:

    //declare a window object:
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT),
                                                      "JAVA IS FOR WUSSIES!");
    window.setFramerateLimit(3);

    //this is where we keep all the shapes.
    //    sf::RectangleShape shapeArray[GRID_HEIGHT][GRID_WIDTH];


    // call it once, after creating the window
    window.setVerticalSyncEnabled(true);
    //Application runs at the same freq as monitor

    //. . . . . . . SHAPES ............
    //this is how you would declare and manipulate shapes:
    sf::CircleShape circle(250.f);
    circle.setFillColor(sf::Color::Green);
    // set a 10-pixel wide orange outline
    circle.setOutlineThickness(10);
    circle.setOutlineColor(sf::Color(250, 150, 100));


    // define a 120x50 rectangle
    sf::RectangleShape rectangle(sf::Vector2f(SCREEN_WIDTH*0.6, SCREEN_HEIGHT*0.75));
    rectangle.move(sf::Vector2f(0,0));
    rectangle.setFillColor(sf::Color::Magenta);

    sf::RectangleShape rectangle_1(sf::Vector2f(SCREEN_WIDTH*0.4, SCREEN_HEIGHT*0.75));
    rectangle_1.move(sf::Vector2f(SCREEN_WIDTH*0.6,0));
    rectangle_1.setFillColor(sf::Color::Yellow);


    sf::RectangleShape rectangle_2(sf::Vector2f(SCREEN_WIDTH, SCREEN_HEIGHT*0.15));
    rectangle_2.move(sf::Vector2f(0,SCREEN_HEIGHT*0.75));
    rectangle_2.setFillColor(sf::Color::Red);


    sf::RectangleShape rectangle_3(sf::Vector2f(SCREEN_WIDTH*0.2, SCREEN_HEIGHT*0.1));
    rectangle_3.move(sf::Vector2f(SCREEN_WIDTH*0.7,SCREEN_HEIGHT*0.89));
    rectangle_3.setFillColor(sf::Color::Magenta);

    // std::cout << win.GetSize() << std::endl;
    // SCREEN_WIDTH*0.6
    // change the size to 100x100
    //rectangle.setSize(sf::Vector2f(10, 10));
    //. . . . . . . . . . . . . . . . . . . . . . . . . . .



    // run the program as long as the window is open
    // this is your main loop:
    while (window.isOpen()){
        cout<<"looooping..."<<endl;
        // check all the window's events that were triggered since the last iteration of the loop

        sf::Event event;

        //go through all the pending events: keyboard, mouse, close, resize, etc.
        //pollEvent and waitEvent are the only two functions that can fill event
        while (window.pollEvent(event))//or waitEvent: EVENT LOOP
        {
            // check the type of the event...
            switch (event.type)
            {
            // window closed
            // "close requested" event: we close the window
            case sf::Event::Closed:
                cout<<"close event was encountered!"<<endl;
                window.close();
                break;

                // key pressed
            case sf::Event::KeyPressed:
                cout<<"a key was pressed..."<<endl;
                //...
                break;
            case sf::Event::MouseButtonReleased:
                if (event.mouseButton.button == sf::Mouse::Right)
                {
                    std::cout << "the right button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                }
                else
                    std::cout<<"left button?"<<std::endl;
                break;
            default:
                break;
            }
        }

        // you HAVE TO clear your window on every iteration of this while.
        window.clear();

        window.draw(circle); //draw the circle on the window
        window.draw(rectangle);
        window.draw(rectangle_1);
        window.draw(rectangle_2);
        window.draw(rectangle_3);
        window.display();;
    }

    cout<<"------ NORMAL TERMINATION: WINDOW CLOSED!"<<endl;
    return 0;
}



















