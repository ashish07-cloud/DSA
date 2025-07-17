#include<iostream>
#include<algorithm>
using namespace std;

void printPermutation(string str, int i) {
    // base case
    if (i >= str.length()) {
        cout << str << endl;
        return;
    }

    // loop from i to end of string
    for (int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);              // swap to fix one character
        printPermutation(str, i + 1);      // recurse on remaining
        swap(str[i], str[j]);              // backtrack
    }
}

int main() {
    string str = "abc";
    printPermutation(str, 0);
    return 0;
}
