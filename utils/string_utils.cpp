#include<string>
using namespace std;

string to_lower_case (string word) {
    string lower_letters;
    for(int i = 0; i  < word.length(); ++i) {
        char lower_letter = tolower(word[i]);
        lower_letters.push_back(lower_letter);
    }
    return lower_letters;
}