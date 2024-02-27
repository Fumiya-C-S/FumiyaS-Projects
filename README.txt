Fumiya Shinagawa 
2416455
shinagawa@chapman.edu
CPSC-350-01
Assignment 1

Robber Language Translator

Files:
README.txt, main.cpp, Model.h, Model.cpp, Translator.h, Translator.cpp, FileProcessor.h, FileProcessor.cpp, input.txt, output.html

Sources Referenced:
https://www.geeksforgeeks.org/isupper-islower-application-c/
https://www.programiz.com/cpp-programming/library-function/cctype/tolower
https://pages.cs.wisc.edu/~hasti/cs368/CppTutorial/NOTES/IO.html#:~:text=To%20read%20from%20a%20file,you%20can%20read%20or%20write.&text=Note%20that%20to%20use%20files,iostream%20is%20not%20good%20enough).
https://stackoverflow.com/questions/43629363/how-to-check-if-a-string-contains-a-char


For this assignment, I had struggles in the begginning because my files wouldn't update, showing me the wrong output on my terminal, and I did
not know what was wrong with my code. My friend then suggested to restart docker which fixed the issue and it was smooth sailing from there.

My application takes in a string through input.txt, and through FileProcessor files, they are read and taken into Translator and Model Files
to translate the string into robber language, where consonants are added a "o" and the original character, and consonants are kept the same,
and punctuation is kept the same. 