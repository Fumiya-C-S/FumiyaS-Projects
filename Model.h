#ifndef MODEL_H
#define MODEL_H

#include <iostream>
using namespace std;

class Model{

    public:
        Model(); //default constructor
        ~Model(); //destructor

        //core functions
        string translateSingleConsonant(char consonant); //pass in a character that is a consonant, and return the translated version of the character Ex. "s" -> "sos"
        string translateSingleVowel(char vowel); //pass in a character that is a vowel, and return the translated version of the character Ex. "a" -> "a"
};

#endif