//
// Created by Dave R. Smith on 9/4/24.
//

#include "Word.h"

std::ostream& operator<<(std::ostream& out, const Word& word)
{
    // for( Letter l : word._word)
    for(int i = 0; i < word._word.size(); i++)
    {
        // out << l;
        out << word._word.at(i);
    }

    return out;
}

std::string Word::toString() const {
    std::string word;
    for (int i = 0; i < _word.size(); i++)
    {
        word.push_back(_word.at(i).getLetter());
        //i < 11 => string word.push("Hello World")
        //this convert vector<Letter> of _word into a string
    }
    return word;
}

Word::Word()
{
    setWord("_");
}

Word::Word(const std::string& word)
{
    setWord(word);
}

// vector<Letter>         std::cout << char(std::toupper('a')) << std::endl;
// std::topper(Word.at(i));
// word.toUpper();
// word.toUpper();

void Word::setWord(const std::string& word)
{
    _word.clear();
    for(int i = 0; i < word.size(); ++i)
    {
        _word.emplace_back(word.at(i));
    }
}
const std::vector<Letter>& Word::getWord() const
{
    return _word;
}

bool operator==(const Word& word1, const Word& word2){
    return word1.toString() == word2.toString();
}

bool operator!=(const Word& word1, const Word& word2){
    return word1.toString() != word2.toString();
}

unsigned int Word::size() const{
    return _word.size();
}