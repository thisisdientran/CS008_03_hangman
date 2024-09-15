//
// Created by Dave R. Smith on 9/10/24.
//

#include "View.h"

View::View()
{

}

View::View(Controller &controller){
    _controller = &controller;
}

const Controller* View::getController() const{
    return _controller;
}

void View::setController(Controller &controller){
    _controller = &controller;
}


// std::ostream &operator<<(std::ostream &out, const View &view)
// {
//     out << view.phrase << view.body << view.incorrectLetters;

//     return out;
// }