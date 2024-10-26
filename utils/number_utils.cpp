#include<string>
using namespace std;


bool is_integer(string word) {
    for(int i = 0; i  < word.length(); ++i) {
        if (!isdigit(word[i]))  {
            return false;
        };
    }
    return true;
}

bool is_double(string word) {
    char letter;
    char point = '.';
    for(int i = 0; i  < word.length(); ++i) {
        letter = word[i];
        if (!isdigit(letter) && point != letter)  {
            return false;
        };
    }
    return true;
}