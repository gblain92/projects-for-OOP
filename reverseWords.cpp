#include <iostream>
#include <string>
#include <list>
#include <fstream>


using namespace std;

int main () {


    int entries;
    string sentences;
    list<string> s;
    list<string> reverseS;
    fstream rwFile ("reverseWords.txt");

    if (rwFile.is_open()) {

        rwFile >> entries;

        for (int i=0; i < entries; i++) {

            getline (rwFile, sentences);
            s.push_back (sentences);
        }



    }

    rwFile.close();

    list<string> :: iterator iter = s.begin();
    list<string> :: iterator jter = reverseS.begin();
    int i=0;

    while (iter != s.end()) {

            string sub;
            string word = *iter;
            string :: iterator siter = word.end();


            while (word[i] != *siter) {

                while (word[i] != ' ') {

                    sub.push_back(word[i]);

                    i++;

                }

                reverseS.push_front(sub);
                sub.clear();

                i++;

            }


            cout << endl;
            iter++;

    }


    return 0;

}


