#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    // string creation 
    // string str;
    // cin >> str;
    // getline(cin, str); // for taking input with spaces 
    // cout << str << endl;

    // cout << "length : " << str.length() << endl;
    // cout << " is Empty " << str.empty() << endl;
    // str.push_back('A');
    // cout << str << endl;
    // str.pop_back();
    // cout << str << endl;
    // cout << str.substr(0, 4) << endl;

    // string a = "AShes";
    // string b  = "Ashes";
    // IF IN SECOND STRING THERE IS CAPITAL OR UPPERCASE LETTER 
    // THEN IN THE COMPARISON IT WILL GIVE POSITIVE VALUE 
    // AND IF FIRST STRING HAS UPPERCASE LETTER THEN IT WILL GIVE NEGATIVE VALUE 

    // if (a.compare(b) == 0)
    // {
    //     cout << " a and b are exactly same " << endl;
    // }else{
    //     cout << " a and b are not same " << endl;
    // }

    // cout << a.compare(b) << endl;
    // cout << a.find('h') << endl;
    // if the value is not found compare it with std::string::npos
    

    string str = "This is my second messege";
    string word = "Ashish";

    str.replace(0, 4, word);
    cout << str << endl;

    str.erase(12, 7);
    cout << str << endl;



    return 0;
}