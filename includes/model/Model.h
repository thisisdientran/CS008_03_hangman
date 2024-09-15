#ifndef MODEL_H
#define MODEL_H

#include "../body/Body.h"
#include "../letter/Letter.h"
#include "../word/Word.h"
#include "../phrase/Phrase.h"
#include "../checker/Checker.h"

class Model{
    private:
        Body _body;
        Phrase _phrase;
        Word _incorrectLetters;
        Phrase _prompt;
        Checker _checker;
    public:
    // Constructors
        Model();
        Model(const std::string& phrase,const std::string& incorrectLetters,const std::string& prompt);
        
    // Mutators
        // Getters
        const Body& getBody() const;
        const Phrase& getPhrase() const;
        const Word& getIncorrectLetters() const;
        const Phrase& getPrompt() const;

        //Setters
        void setBody(const int& body);
        void setPhrase(const std::string& phrase);
        void setIncorrectLetters(const std::string& incorrectLettersString);
        void setPrompt(const std::string& prompt);

    
};







#endif