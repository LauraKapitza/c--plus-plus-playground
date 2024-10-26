// File Exercises.h
#include<string>
#include <iostream>
#include <valarray>
#include<vector>
#include "../utils/string_utils.h"
#include "../utils/math_utils.h"

using namespace std;

void print_int_operations() {
    cout << "Please enter an integer values separated by a space: " << endl;
    int a = 0;
    int b = 0;
    cin >> a >> b;
    cout << "a is " << a << " and b is " << b
         << "\n a + b == " << a+b
         << "\n a times b == " << a*b
            << "\n twice a == " << a+a
            << "\n twice b == " << b+b
            << "\n a squared == " << a*a
            << "\n b squared == " << b*b
            << "\n half of a == " << a/2
            << "\n half of b == " << b/2
            << "\n modulo of a in b == " << b%a
            << "\n square root of a == " << sqrt(a)
            << "\n square root of b == " << sqrt(b)
            << "\n a/b + b + a%b == " << a/b + b + a%b
            << '\n';
}

void detect_repeated_words() {
    string previous;
    string current;
    cout << "Type different words. When repeating two words in a row the program leaves a message." << endl;
    while(cin>>current) {
        if (previous == current)
            cout << "repeated word: " << current << "\n";
        previous = current;
    }
}

/*exercise for narrowing conversion */
void print_narrowing_conversion_example() {
    cout << "Please type a double value, e.g. 1.9 or 1.09: " << endl;
    double d = 0;
    while (cin>>d) {
        int i = d;
        char c = i;
        cout << "double value would be: " << d
            << "\n integer value would be: " << i
            << "\n char value would be: " << c
            << ")\n";

    }
}

void write_letter() {
    string first_name;
    string my_first_name;
    string friend_name;
    int age;
    cout << "Enter the name of the person you want to write to\n";
    cin >> first_name;
    cout << "Enter the name of your friend\n";
    cin >> friend_name;
    cout << "Enter you current age\n";
    cin >> age;
    cout << "Enter your name\n";
    cin >> my_first_name;
    cout << "Dear " << first_name << ",\n"
         << "How are you? I am fine. I miss you.\n"
         << "Have you seen " << friend_name << " lately?\n";
    if (age == 0) {
        cout << "you’re kidding!";
    } else if (age < 12) {
        cout << "Next year you will be " << age+1 << ".\n";
    } else if (age > 70) {
        cout << "Are you retired?";
    } else {
        cout << "I hear you just had a birthday, and you are " << age << " years old.";
    }
    cout << "\n\n\n" << my_first_name;
}

/*exercise switch statement*/
void convert_currency() {
    constexpr double yen_in_dollar = 0.01;
    constexpr double pound_in_dollar = 1.29;
    constexpr double euro_in_dollar = 1.08;
    char currency;
    double amount;

    cout << "Enter a character to choose the curreny you want to convert ('y' for Yen, 'p' for Pound, and 'e' for Euro).\n";
    cin >> currency;
    cout << "Enter the amount to convert.\n";
    cin >> amount;

    switch (currency) {
        case 'y':
            cout << amount << " Yen is " << yen_in_dollar*amount << " Dollars.\n";
            break;
        case 'p':
            cout << amount << " Pound is " << pound_in_dollar*amount << " Dollars.\n";
            break;
        case 'e':
            cout << amount << " Euro is " << euro_in_dollar*amount << " Dollars.\n";
            break;
        default:
            cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }
}

/* Loop statement.
 * Prints characters and their corresponding integer value
 * */
void print_character_integers() {
    int i = 97;
    while(i <= 122) {
        cout << char(i) << '\t' << i << '\n';
        ++i;
    }
}

/*exercise for statement*/
void calc_square (int max_range) {
    for (int i = 0; i <= max_range; ++i) {
        cout << i << '\t' << square(i) << '\n';
    }
}

/*exercise vectors*/
void beep_disliked_words() {
    vector<string> disliked_words = {"onion", "cucumber", "aubergine"};
    cout << "Type different words. Disliked words will be beeped." << endl;
    for(string input; cin >> input;) {
        bool is_disliked = false;
        string temp = to_lower_case(input);
        for(const auto & disliked_word : disliked_words) {
            if (temp == disliked_word) {
                is_disliked = true;
            }
        }
        if (is_disliked) {
            cout << "Beep \n";
        } else {
            cout << input << "\n";
        }
    }
}

