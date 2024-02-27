#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include "Model.h"
using namespace std;

class Translator{

    public:
        Translator(); //default constructor
        ~Translator(); //destructor

        //core functions
        string translateEnglishWord(string word); //pass in a word string, and recieve the translated word
        string translateEnglishSentence(string sentence); //pass in a sentence string, and recieve the translated sentence

    private:
        Model *myModel; //private member variavle of Model class to use in Translator.cpp
};


#endif