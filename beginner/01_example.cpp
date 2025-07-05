#include <iostream>
using namespace std;

int main()
{
    // int score;
    // cout << "Enter your score: " << endl;
    // cin >> score;
    // if (score < 300)
    // {
    //     cout << "You are not qualified for the next round" << endl;
    // }
    // else
    // {
    //     cout << "You are qualified for the next round" << endl;
    // }

    // int rowCount, colCount;
    // cout << "Enter the number of rows: " << endl;
    // cin >> rowCount;
    // cout << "Enter the number of columns: " << endl;
    // cin >> colCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for (int col = 0; col < colCount; col++)
    //     {
    //         if ( row == 0 || row == rowCount-1 || col == 0 || col == colCount-1 )
    //         {
    //             cout << " *";
    //         }
    //         else{
    //             cout << "  ";
    //         }

    //     }
    //     cout << endl;

    // }

    // printing a pyramid pattern
    // for( int row = 0; row < rowCount; row++){
    //     for ( int col = 0; col <= row; col++){

    //         cout<< " *";
    //     }
    //     cout << endl;
    // }

    // printing a reverse pyramid pattern
    // for( int row = rowCount; row >= 1; row--){
    //     for ( int col = 0; col < row; col++){

    //         cout<< " *";
    //     }
    //     cout << endl;
    // }

    // numeric half pyramid pattern
    // for( int row = 0; row < rowCount; row++){
    //     for( int col = 0; col< colCount; col++){
    //         if( col <= row){
    //             cout << " " << col+1;
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // printing a reverse numeric half pyramid pattern
    // for( int row = rowCount; row >= 1; row--){
    //     for ( int col = 0; col < row; col++){

    //         cout<<  col+1 ;
    //     }
    //     cout << endl;
    // }

    // q-7 -  printing a full pyramid pattern
    // for( int row = 0; row < rowCount; row++){
    //     for( int col = 0; col < colCount-row; col++){
    //         cout << " ";
    //     }
    //     for( int col = 0; col <= row; col++){
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    // perimeter of a triangle
    // int side1, side2, side3;
    // cout<<"Enter the length of side 1:" << endl;
    // cin >> side1;
    // cout<<"Enter the length of side 2:" << endl;
    // cin >> side2;
    // cout<<"Enter the length of side 3:" << endl;
    // cin >> side3;

    // if( side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2){
    //     cout << "The triangle is valid" << endl;
    //     cout << "The perimeter of the triangle is: " << side1 + side2 + side3 << endl;
    // }
    // else{
    //     cout << "The triangle is invalid" << endl;
    // }

    // print n to 1
    // int n;
    // cout << "Enter the number from which you want to start " << endl;
    // cin>>n;
    // for (int i = n; i >= 1; i--)
    // {
    //     cout << i << endl;
    // }

    // print  factorial of a number
    // int n;
    // cout << "Enter the number whose factorial you want " << endl;
    // cin >> n;
    // if ( n == 0 || n == 1)
    // {
    //     cout<<"The factorial is " << 1 << endl;
    // }

    // else
    // {
    //     int fact = 1;
    //     for (int i = 1; i <= n ; i++)
    //     {
    //         fact = fact * i;
    //     }
    //     cout << "The factorial is " << fact << endl;
    // }

    // else
    // {
    //     for (int i = n-1; i >= 1; i--)
    //     {
    //         n = n * i;
    //     }
    //     cout << "The factorial is " << n << endl;

    // }

    // print the sum of n natural numbers
    // int n;
    // cout << "Enter the number upto which you want to find the sum " << endl;
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << "The sum of the first " << n << " natural numbers is " << sum << endl;

    // checking the number is prime or not
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;

    // for (int i = 2; i < n-1 ; i++)
    // {
    //     if ( n % i == 0){
    //         cout << "The number is prime" << endl;
    //         break;

    //     }
    //     else{
    //         cout << "The number is  not prime" << endl;
    //         break;

    //     }
    // }

    //  printing even numbers from 1 to n
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;

    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    // int n1, n2, n3;
    // cout << "Enter the first number " << endl;
    // cin >> n1;

    // cout << "Enter the second number " << endl;
    // cin >> n2;

    // cout << "Enter the third number " << endl;
    // cin >> n3;

    // if ( n1 > n2 && n1 > n3){
    //     cout << "The largest number is " << n1 << endl;
    // }
    // else if ( n2 > n1 && n2 > n3){
    //     cout << "The largest number is " << n2 << endl;
    // }
    // else{
    //     cout << "The largest number is " << n3 << endl;
    // }

    // printing hollow pyramid pattern
    // int n;
    // cin >> n;
    // for (int  i = 0; i < n ; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if ( i == 0 || j == 0 || j == n-i-1)
    //         {
    //             cout << " *";
    //         }
    //         else{
    //             cout << "  ";
    //         }

    //     }
    //     cout << endl;
    // }

    // printing a hollow  pyramid pattern
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < ((2 * n) - 1); j++)
    //     {

    //         if (j < n-i-1)
    //         {
    //             cout<< "  ";
    //         }
    //         else if (k < 2 * i +1){
    //             if (k == 0 || k == 2*i || i == n-1)
    //             {
    //                 cout << " *";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //             k++;
    //         }
    //         else {
    //             cout << "  ";
    //         }

    //     }
    //     cout << endl;

    // }

    // pyramids questions
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;

    //  palindrome characters of A, B , C, D
    // for (int i = 0; i < n; i++)
    // {
    //     for (int l = 0; l < n - i - 1; l++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         int ans = j + 1;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     for (int k = i; k >= 1; k--)
    //     {
    //         int ans = k;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {

    // for (int j = 0; j < i + 1; j++)
    //     {
    //         int ans = j + 1;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     for (int k = i; k >= 1; k--)
    //     {
    //         int ans = k;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // for(int i = 0 ; i< n; i++){

    //     for (int j = 0; j <= n; j++)
    //     {
    //         if ( j < n-i)
    //         {
    //             cout<< " ";
    //         }
    //         else{
    //             cout << "* ";
    //         }

    //     }
    //     cout<< endl;

    // }

    // or

    // for(int i = 0 ; i< n; i++){

    //     for (int j = 0; j <= n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < i +1; k++)
    //     {
    //         cout << " *";
    //     }

    //     cout<< endl;

    // }

    // for inverted pyramid pattern

    // for(int i = 0; i < n; i++){
    //     for(int k = 0; k < i+1; k++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n-i; j++){
    //         cout << " *";
    //     }

    //     cout << endl;
    // }

    //  for hollow diamond pattern
    // for(int i = 0 ; i< n; i++){

    //     for (int j = 0; j <= n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < i +1; k++)
    //     {
    //         if( k == 0 || k == i ){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }

    //     cout<< endl;

    // }
    // for(int i = 0; i < n; i++){
    //     for(int k = 0; k < i+1; k++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n-i; j++){
    //         if( j == 0 || j == n-i-1){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }

    // for hollow square diamond pattern
    // Upper part
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < 2 * i; k++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // Lower part
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < 2 * (n - i - 1); k++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << i + 1 << "*";
    //     }
    //     cout << endl;
    // }

    // // Lower Part
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i; j++) {
    //         cout << (i+4) + 1 << "*";
    //     }
    //     cout << endl;
    // }

    // printing a numeric  pyramid

    // int n;
    // cout<< "Enter a number "<< endl;
    // cin >> n;

    //  printing a numeric pyramid
    // for ( int row = 0; row < n; row++){
    //     // spaces
    //     for (int col = 0; col < n-row-1; col = col +1){
    //         cout << " ";
    //     }

    //     // numbers
    //     int starts = 1;
    //     for ( int col = 0; col < row +1; col = col +1){
    //         cout <<  starts;
    //         starts = starts +1;
    //     }

    //     // reverse counting
    //     int start = 2*row;
    //     for (int col = 0; col < row;  col++){
    //         cout << start  ;
    //         start  = start -1 ;
    //     }
    //     cout << endl;
    // }

    // for ( int row = 0; row < n ; row = row +1 ){
    //     int start = row + 1;
    //     for ( int col = 0; col < row +1; col = col + 1){
    //         cout << start << " ";
    //         start = start + 1;
    //     }
    //     cout << endl;
    // }

    // bool a = false;
    // bool b = false;

    // cout << (a & b);
    // cout << ( a || b);
    // cout << (~b);

    // int a = 5;
    // cout << (++a)*(++a);

    // numeric hollow half pyramid
    // int n;
    // cout << "Enter a number " << endl;
    // cin >> n;

    // for (int row = 0; row < n; row++){
    //     for (int col = 0; col < row+1; col++){
    //         if (col == row || col == 0 || row == n-1)
    //         {
    //             cout << col +1;

    //         }
    //         else{
    //             cout << " ";
    //         }

    //     }
    //     cout << endl;
    // }

    //  numeric hollow inverted pyramid
    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = row + 1; col <= n; col++)
    //     {
    //         if (col == n ||  col == row+1 || row == 0)
    //         {
    //             cout << col;
    //         }
    //         else{
    //             cout << " ";
    //         }

    //     }
    //     cout << endl;
    // }

    // numeric palindrome equilateral pyramid
    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     // space
    //     for (int space = 0; space < n - row - 1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // number
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     // palindrome number
    //     for (int col = row - 1; col >= 0; col--)
    //     {
    //         cout << col + 1;
    //     }

    //     cout << endl;

    // }

    // half diamond pattern 
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }
    

    // 
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col <= row; col++)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    cout<<"Printing upwrite triangle "<<endl;
    
    for (int row = 0; row < n ; row++){
        
        for( int col = 0; col < n-row; col++ ){
            cout << " *";
        }
        for(int space = 0; space < n-row-1; space++){
            cout << "  ";
        }
        cout<<endl;
    }


return 0;
}
