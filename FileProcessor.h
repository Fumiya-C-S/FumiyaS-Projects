#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include <string>
#include "Translator.h"
using namespace std;

class FileProcessor{
    public:
        FileProcessor(); //default constructor
        ~FileProcessor(); //destructor

        //core functions
        void processFile(string inputFile, string outputFile); //pass in two strings, inputFile and outputFile, which are the names of the input and outputFiles, where inputFile will hold the string that we want to translate and outputfile will be where we output our translated word to

    private:
        string inputtedString; //string to hold the word or sentenced in inputFile
        string translatedString; //string to hold the translated word or sentence
        Translator *myTranslator; //Translator class to be able to use in FileProcessor.cpp
};

#endif