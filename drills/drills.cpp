#include <iostream>
#include <valarray>
#include <sstream>
#include<string>
#include<vector>
#include<span>
#include<stdexcept>
#include<random>
#include <cmath>
#include<cstdint>
#include<list>
#include <map>
#include<unordered_map>
#include <set>
#include<memory>
#include <algorithm>
#include "../utils/number_utils.h"

using namespace std;

int compare_int_inputs() {
    vector<int> numbers;
    vector<int> sorted_numbers;
    string input;
    int num;
    int first_num;
    int second_num;

    cout << "Type an integer value (e.g. 2 or 56): " << endl;
    while(cin >> input && input != "/") {
        cout << "This is the input: " << input << endl;
        istringstream int_tester(input);

        if(is_integer(input)) {
            int_tester>>num;
            numbers.push_back(num);
        }

        if (numbers.size() == 2) {
            sort(numbers.begin(), numbers.end());
            first_num = numbers[0];
            second_num = numbers[1];

            if (first_num == second_num) {
                cout << "The numbers are equal " << "(" << first_num << ", " << second_num << ")" << endl;
            } else {
                cout << "The smaller value is: " << first_num << ", the larger value is: " << second_num << endl;
            }
            numbers = {};
        }
    }

}

int compare_double_inputs() {
    vector<double> numbers;
    vector<double> sorted_numbers;
    string input;
    double num;
    double first_num;
    double second_num;
    double num_diff;

    cout << "Type a double value (e.g. 2.8 or 56.008): " << endl;
    while(cin >> input && input != "/") {
        cout << "This is the input: " << input << endl;
        istringstream int_tester(input);

        if(is_double(input)) {
            int_tester>>num;
            numbers.push_back(num);
        }

        if (numbers.size() == 2) {
            sort(numbers.begin(), numbers.end());
            first_num = numbers[0];
            second_num = numbers[1];

            if (first_num == second_num) {
                cout << "The numbers are equal " << "(" << first_num << ", " << second_num << ")" << endl;
            } else {
                num_diff = second_num - first_num;
                if (num_diff <= (1.00/100)) {
                    cout << "The numbers are almost equal " << "(" << first_num << ", " << second_num << ")" << endl;
                } else {
                    cout << "The smaller value is: " << first_num << ", the larger value is: " << second_num << endl;
                }
            }
            numbers = {};
        }
    }
    return 0;
}
