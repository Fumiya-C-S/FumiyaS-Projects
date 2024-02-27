#include "Translator.h"
#include "Model.h"

//default constructor
Translator::Translator(){
    myModel = new Model(); //initialize the model class
    cout << "Translator Constructor" << endl;
}

//destructor
Translator::~Translator(){
    delete myModel; //delete the model class
    cout << "Translator Destructor" << endl;
}

//translateEnglishWord function implementatoin 
string Translator::translateEnglishWord(string word){

    string newWord = "\0";

    //for each character/letter in the word, check if the letter is a consonant or vowel. 
    for (char currentChar : word){
        //if the current character is a vowel, pass the character into the translateSingleVowel function and append the translated section to the new translated word
        if (tolower(currentChar) == 'a' || tolower(currentChar) == 'e' || tolower(currentChar) == 'i' || tolower(currentChar) == 'o' || tolower(currentChar) == 'u'){
            newWord += myModel->translateSingleVowel(currentChar);
        } else { //if the current character is not a vowel, it must be a consonant, so pass the consonant into the translateSingleConsonant function and reviece a string of characters that is the translated version and appened the translated section to the new translated word 
            newWord += myModel->translateSingleConsonant(currentChar);
        }
    }

    //return the string of the new translated word
    return newWord;
}

//translateEnglishSentence function implementation
string Translator::translateEnglishSentence(string sentence){

    string newSentence = "\0";

    //for each character/letter in the word, check if the letter is a consonant, vowel, or a punctuation.
    for (char currentChar : sentence){
        if (currentChar == ' ' || currentChar == '.' || currentChar == '!' || currentChar == '?' || currentChar == 39){ //if the character/letter is a punctuation or space, do nothing with it and add it to the translated word string / currentChar == 39 is ASCII code for a '
            newSentence += currentChar;
        } else if (tolower(currentChar) == 'a' || tolower(currentChar) == 'e' || tolower(currentChar) == 'i' || tolower(currentChar) == 'o' || tolower(currentChar) == 'u'){ //else if, the character is a vowel, pass the character into the translateSingleVowel function and append the translated section to the new translated word
            newSentence += myModel->translateSingleVowel(currentChar);
        } else { //if the current character is not a vowel, it must be a consonant, so pass the consonant into the translateSingleConsonant function and reviece a string of characters that is the translated version and appened the translated section to the new translated word 
            newSentence += myModel->translateSingleConsonant(currentChar);
        }
    }

    //return the string of the new translated Sentence
    return newSentence;
}
