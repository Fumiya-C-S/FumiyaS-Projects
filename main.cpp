#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"


int main(int argc, char **argv)
{
    //create FileProcessor object
    FileProcessor *myFileProcessor = new FileProcessor();

    string input = "input.txt";
    string output = "output.html";
    myFileProcessor->processFile(input, output); //call processFile function to translate word ro sentence in input.txt

    //delete FileProcessor object
    delete myFileProcessor;

    return 0;
}
