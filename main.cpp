#include <iostream>
#include <string>
#include "src/compare.hpp"

using namespace std;
int main() {
    string a, b;
    cout << "\nEnter first word: ";
    getline(cin, a);
    cout << "Enter second word: ";
    getline(cin, b);

    int res = strcmp_case_insensitive(a, b);
    cout << "Result: " << res << " ("
              << (res < 0 ? "first < second" : res > 0 ? "first > second" : "equal") << ")\n";
    return 0;
}





