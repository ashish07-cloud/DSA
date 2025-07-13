#include<iostream>
#include<vector>

using namespace std;

int fastExponentiation(int a, int b){
    int ans =1;
    while (b > 0)
    {
        if (b & 1)
        {
            // if odd 
            ans = ans*a;
        }
        a= a*a;
        b>>=1; // it is same as b=b/2 also called right shift

        
    }
    return ans;
    
}

int slowExponentiation(int a , int b){
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans*= a;
    }
    return ans;
}
    
    


int main(){
    cout << slowExponentiation(5, 4) << endl;
    cout << fastExponentiation(5, 4) << endl;
}