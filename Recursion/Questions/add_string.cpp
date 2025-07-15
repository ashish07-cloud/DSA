#include<iostream>
#include<algorithm>
using namespace std;

void addRE(string &num1, int p1, string &num2, int p2, int carry, string &ans) {
    // base case 
    if (p1 < 0 && p2 < 0) {
        if (carry != 0) {
            ans.push_back(carry + '0');
        }
        return;  
    }

    // Get digits or '0' if out of bounds
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';  // ✅ fixed p1 > 0 → p1 >= 0
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';

    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = sum / 10;

    ans.push_back(digit + '0');

    // Recursive call
    addRE(num1, p1 - 1, num2, p2 - 1, carry, ans);
}

string addString(string num1, string num2) {
    string ans = "";
    int carry = 0;
    addRE(num1, num1.size() - 1, num2, num2.size() - 1, carry, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string num1, num2;
    cout << "Enter the first string: ";
    cin >> num1;

    cout << "Enter the second string: ";
    cin >> num2;

    string result = addString(num1, num2);

    cout << "Answer is: " << result << endl;
    return 0;
}
