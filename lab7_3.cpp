#include <iostream>
using namespace std;

char before(char c) {
    if (c >= 'A' && c <= 'Z') {
        if (c == 'A')
            return 'Z';
        else
            return c - 1;
    }
    return '0';
}
