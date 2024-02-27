#include "Model.h"

//default constructor
Model::Model(){
    cout << "Model Constructor" << endl;
}

//destructor
Model::~Model(){
    cout << "Model Decontructor" << endl;
}

//translateSingleConsonant function implementation
string Model::translateSingleConsonant(char consonant){
    string newConsonant;
    //first add the passed in charatcer into the newConsonant string, this will keep the upper or lower case of the character
    newConsonant = consonant;

    //a string variable to hold the lowercase version of a consonant if the passed in variable is a uppercase
    string consonantLower = "\0";

    //if char consonant is a uppercase letter, then add "o", then save the lowercase version of the letter into consonantLower and then add that to the new consonant
    if (isupper(consonant)){
        newConsonant += "o";
        consonantLower = tolower(consonant);
        newConsonant += consonantLower;
    } 
    else{ //if the letter is not a uppercase letter, then add "o" and the char consonant passed in to newConsonant
        newConsonant += "o";
        newConsonant += consonant;
    }

    //return the string that holds the new translated version of the letter
    return newConsonant;
}

//translateSingleVowel function implementation
string Model::translateSingleVowel(char vowel){
    string newVowel;
    newVowel = vowel; //change the passed in vowel into a string from a character to be able to be added to the whole word or sentence in Translator.cpp
    
    //return the newVowel in string form
    return newVowel;
}