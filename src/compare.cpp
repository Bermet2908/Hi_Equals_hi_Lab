#include "compare.hpp"
#include <iostream>

using namespace std;
int strcmp_case_insensitive(const string& a, const string& b) {
    int i = 0;
    while (i < a.size() && i < b.size()) {
        char c1 = tolower(a[i]);
        char c2 = tolower(b[i]);
        if (c1 != c2) {
            return c1 - c2;
        }
        ++i;
    }
    if (a.size() == b.size()) return 0;
    return (a.size() < b.size()) ? -1 : 1;
}