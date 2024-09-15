//
// Created by Dave R. Smith on 9/10/24.
//

#ifndef HANGMAN_BODY_H
#define HANGMAN_BODY_H

#include <iostream>
class Body
{
    private:
        int _part;
    public:
        Body();
        Body(int part);

    // Mutators
        const int getPart() const;
        void setPart(const int &part);

        friend std::ostream& operator<<(std::ostream& out, const Body& phrase);
        /**
         * implement functionality to gradually draw the body
         */
};


#endif //HANGMAN_BODY_H