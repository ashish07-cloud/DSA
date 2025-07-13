#include<iostream>
#include<vector>


using namespace std;

vector<bool> Sieve(int n){
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    // i*i <= n this is the second optimization because we have stopped the loop after the square root of n because after that no array exist 
    for (int  i = 2; i*i <= n; i++)
    {
        if (sieve[i] == true)
        {
            // int j = i*2;
            int j = i*i; //here is the optimization because when we start from i*i before it all the numbers are covered
            while (j<= n)
            {
                sieve[j] = false;
                j += i;
            }
            
        }
        
    }
    return sieve;
    
}

int f(int x, int *py, int **ppz){
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    cout << x << endl;
    cout << y << endl; 
    cout << z << endl;
    return x+y+z;
}

int main(){

    // vector<bool> sieve = Sieve(25);
    // for (int i = 0; i <= 25; i++)
    // {
    //     if (sieve[i])
    //     {
    //         cout << i << " " ;
    //     }
        
    // }
    

    // char st[] = "ABCD";
    // for (int i = 0; st[i] != '\0'; i++)
    // {
    //     cout << st[i] << endl; 
    //     cout << *st+ i << endl;
    //     cout << *(i+st) << endl;
    //     cout << i[st] << endl;
    //     cout << "done" << endl;
    // }

    // int a  = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl;

    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout << f(c, b, a);

    int ***r, **q, *p, i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << " "  << **q << " " << ***r << endl;


    



    return 0;
}