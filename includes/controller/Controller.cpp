//
// Created by Dave R. Smith on 9/10/24.
//

#include "Controller.h"

Controller::Controller(){
    _model = NULL;
}

Controller::Controller(Model &model){
    _model = &model;
}

const Model* Controller::getModel() const{
    return _model;
}

void Controller::setModel(Model &model){
    _model = &model;
}