#include "Body.h"

Body::Body(){
    _part = 0;
};

Body::Body(int part){
    _part = part;
};

const int Body::getPart() const{
    return _part;
}

void Body::setPart(const int &part){
    _part = part;
}