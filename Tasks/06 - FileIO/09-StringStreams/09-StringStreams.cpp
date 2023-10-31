// 09-StringStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    //Create two strings.
    string nextWord;

    //Note how a long string can be broken over several lines to aid writing. Note the \ character never features in the string.
    string sentence = "May the force be with you. " \
                      "Always. Ok, maybe that's asking too much. " \
                      "How about 3 days-a-week with time off for birthdays?";

    //Write the complete string to the the terminal
    cout << sentence << endl;

    //Read first word (words are separated by spaces or newlines)
    istringstream iss(sentence);
    int word_count = 0;     //Set the word count to 0

    while (!iss.eof()) {    //While we are not at the end of the file do the following:
        iss >> nextWord;    //Read the next word
        if (iss.fail()) {   //If it does not read the next word do the following:
            continue;       //Break out the loop and continues with the next iteration
        }
        word_count++;   //Each time a word is read the value is increased by1.


        cout << nextWord << endl;   //Write each word if they are available
        if (nextWord == "Always.")   //If the next word is Always then do the following:
        {
            cout << endl;   //Display and empty line as a line break
        }
    }
    
    cout << "The total number of words are" << word_count << endl;  // Displaying the total word count

    //Done
    return 0;

}

