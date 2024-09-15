#include "Model.h"

//============================================================================
//Constructors
//============================================================================
Model::Model(){
    _phrase.setPhrase("_");
    _incorrectLetters.setWord("_");
    _prompt.setPhrase("_");
};

Model::Model(const std::string& phrase,const std::string& incorrectLetters,const std::string& prompt){
    _phrase.setPhrase(phrase);
    _incorrectLetters.setWord(incorrectLetters);
    _prompt.setPhrase(prompt);
};

//============================================================================
//Getters
//============================================================================
const Body& Model::getBody() const { 
    return _body; 
};

const Phrase& Model::getPhrase() const{
    return _phrase;
};

const Word& Model::getIncorrectLetters() const{
    return _incorrectLetters;
};

const Phrase& Model::getPrompt() const{
    return _prompt;
};

//============================================================================
//Setters
//============================================================================
void Model::setBody(const int& part){
    _body.setPart(part);
};

void Model::setPhrase(const std::string& phrase){
    _phrase.setPhrase(phrase);
}

void Model::setIncorrectLetters(const std::string& incorrectLettersString){
    _incorrectLetters.setWord(incorrectLettersString);
}

void Model::setPrompt(const std::string& prompt){
    _prompt.setPhrase(prompt);
};