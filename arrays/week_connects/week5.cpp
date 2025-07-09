#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// bool cmp(char first, char second){
//     return first > second;
// }

bool cmp(int a, int b){
    return a < b;
}

int main(){

    // string s = "ashish";
    // sort(s.begin(), s.end(), cmp);

    // cout << s << endl;

    vector num{2, 1, 5, 3, 6};
    sort(num.begin(), num.end(), cmp);
    for ( auto i:num)
    {
        cout << i << " ";
    }

    

    return 0;
}