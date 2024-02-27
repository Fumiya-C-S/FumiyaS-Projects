#include "FileProcessor.h"
#include "Translator.h"

//default constructor
FileProcessor::FileProcessor(){
    myTranslator = new Translator; //initialize Translator class
    cout << "FileProcessor Constructor" << endl;
}

//destructor
FileProcessor::~FileProcessor(){
    delete myTranslator; //delete Translator class
    cout << "FileProcessor Destructor" << endl;
}

//processFile function implementation
void FileProcessor::processFile(string inputFile, string outputFile){

    //create input Stream
    ifstream inFile;

    //open File(input.txt) to obtain word/sentence to translate
    inFile.open(inputFile);

    //create outputFile stream
    ofstream outFile;
    outFile.open(outputFile); //open the file "output.html" to output to

    //necessary starting code for HTML website
    if (outFile.is_open()){
        outFile << "<html>\n";
        outFile << "<head>\n";
        outFile << "<title>English to Robber Translation</title>\n";
        outFile << "</head>\n";
        outFile << "<body>\n";
    }

    //obtain all word/sentences to translates
    if (inFile.is_open() == true){
        while (getline(inFile, inputtedString)){
            //if outFile is open, write the original text into the HTML code
            if(outFile.is_open() == true){
                outFile << "<p><b>" << inputtedString << "</b></p>\n"; //print the original word/sentence in bold
            }
        }
        if(outFile.is_open()){
            outFile << "<p><b></b><br></p>\n";
        }
    }

    inFile.close(); //close inputFile stream
    inFile.open(inputFile); //reopen file stream to start getLine from beginning

    if (inFile.is_open() == true){
        while (getline(inFile, inputtedString)){

            //bool for if the fileContent is a sentence or not
            bool sentence = false;

            //check each character in fileContents
            for (char character : inputtedString){
                if (character == ' '){ //if fileContents contains a character that is a space, then that means the string is a sentence.
                    sentence = true; //set sentence bool to true since the string is a sentence due do it having a space
                    break; //break out of the for loop because having one space means that it is no longer a word
                }
            }

            if (sentence){ //if the string was a sentence
                translatedString = myTranslator->translateEnglishSentence(inputtedString); //call the translateEnglishSentence function and save the return into translatedString
            } else{ //if the string was a word
                translatedString = myTranslator->translateEnglishWord(inputtedString); //call the translateEnglishWord function and save the return into translatedString
            }

            if (outFile.is_open()){ //output text into output.html if outFile is open 
                outFile << "<p><i>" << translatedString << "</i><br></p>\n"; //print the translated word/sentence in italics
            }
        }
    }

    //finishing touches on outFile HTML code
    if (outFile.is_open()){
        outFile << "</body>\n";
        outFile << "</html>\n";
    }

    inFile.close(); //close inputFile stream
    outFile.close(); //close the output file stream

}