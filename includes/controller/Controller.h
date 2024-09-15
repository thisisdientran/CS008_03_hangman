//
// Created by Dave R. Smith on 9/10/24.
//

#ifndef HANGMAN_CONTROLLER_H
#define HANGMAN_CONTROLLER_H

#include "../model/Model.h"
#include "../checker/Checker.h"

class Controller
{
private:
    Model* _model;
public:
    Controller();
    Controller(Model &model);

    //Mutators
    const Model* getModel() const;
    void setModel(Model &model);

    //Member Functions

    /*
     *  Get User data from console and update the view accordingly
     */
};

//

#endif //HANGMAN_CONTROLLER_H