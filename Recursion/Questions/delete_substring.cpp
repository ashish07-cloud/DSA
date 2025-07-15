#include<iostream>
#include<algorithm>

using namespace std;

void removeStringHelper(string& s, string &part){
    
    int found = s.find(part);
    if (found != string::npos)
    {
        string left_part = s.substr(0, found);
        string right_part = s.substr(found+part.size(), s.size());
        s = left_part + right_part;

        removeStringHelper(s, part);
    }else{
        // in this the base condition is handled
        return;

    }
    
}

string removeString(string& s, string& part){
    removeStringHelper(s, part);
    return s;
}

int main(){

    string s;
    cout << "Enter the main string " << endl;
    cin >> s;

    string part;
    cout << "Enter the part you want to delete " << endl;
    cin >> part;

    string result = removeString(s, part);

    cout << "Answer is " << result << endl;


    return 0;
}