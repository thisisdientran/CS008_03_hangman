//
// Created by Dave R. Smith on 9/10/24.
//

#ifndef HANGMAN_VIEW_H
#define HANGMAN_VIEW_H
#include "../body/Body.h"
#include "../phrase/Phrase.h"
#include "../controller/Controller.h"

#include <iostream>
class View
{
private:
    Controller* _controller;

public:
    View();
    View(Controller &controller);

    // Mutators
    const Controller* getController() const;
    void setController(Controller &controller);

    Phrase getPhrase();

    friend std::ostream& operator<<(std::ostream& out, const View& view);
    /***
     * Create getters and setters for private member variables
     */

};


#endif //HANGMAN_VIEW_H

