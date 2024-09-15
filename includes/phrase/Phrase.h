//
// Created by Dave R. Smith on 9/5/24.
//

#ifndef HANGMAN_PHRASE_H
#define HANGMAN_PHRASE_H
#include "../word/Word.h"

class Phrase
{
private:
    std::vector<Word> _phrase;
    std::vector<Word> split(const std::string& word);
public:
    Phrase();
    Phrase(const std::string& phrase);

    std::string toString() const;
    
    const std::vector<Word>& getPhrase() const;
    void setPhrase(const std::string& phrase);

    friend std::ostream& operator<<(std::ostream& out, const Phrase& phrase);

};


#endif //HANGMAN_PHRASE_H