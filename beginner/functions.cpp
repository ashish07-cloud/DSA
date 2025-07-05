#include <iostream>
using namespace std;

void printName()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Sher" << endl;
    }
}

int printAdd(int a, int b)
{

    cout << "Sum is " << a + b << endl;
}

int findMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2;
    }
    else
    {
        cout << num3;
    }
}
char getGrade(int marks)
{
    if (marks >= 80 && marks <= 100)
    {
        return 'A';
    }
    else if (marks >= 70 && marks <= 79)
    {
        return 'B';
    }
    else if (marks >= 60 && marks <= 69)
    {
        return 'C';
    }
    else if (marks >= 50 && marks <= 59)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int findArea(int r)
{
    double area = (3.14 * (r * r));
    return area;
}

void check_even_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        cout << 1;
    }
    else
    {

        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "The factorial is " << fact << endl;
    }
}

void prime(int n)
{
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Prime number" << endl;
    else
        cout << "Not a prime" << endl;
}

void allPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
}

void printDigits(int n)
{
    int temp = n;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        cout << lastDigit << " " << endl;
        temp = temp / 10;
    }
    cout << endl;
}
int printNumber()
{
    int number = 0, digit;

    cout << "Enter digits one by one (-1 to stop): ";
    while (true)
    {
        cin >> digit;
        if (digit == -1)
            break; 
        number = number * 10 + digit;
    }

    cout << "The formed number is: " << number << endl;
    return 0;
}

int main()
{

    // int a, b, c;
    // cout << "Enter first number"<< endl;
    // cout << "Enter second number"<< endl;
    // cin >> a >> b >> c;

    // int marks;
    // cout << "Enter the marks " << endl;
    // cin >> marks;

    // char finalGrade = getGrade(marks);
    // cout << finalGrade;

    // printName();
    // printAdd(a, b);
    // findMax(a, b, c);

    // int r;
    // cout << "Enter the radius of the circle " << endl;
    // cin >> r;
    // double area = findArea(r);
    // cout << "The area of the circle is " << area << endl;

    // int n;
    // cout <<" Enter number to check" << endl;
    // cin >> n;

    // check_even_odd(n);

    // int n;
    // cout << "Enter the number to find its factorial" << endl;
    // cin >> n;

    // factorial(n);

    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;

    // prime(n);

    // printing all the prime numbers from 1 to n
    // allPrime(n);

    // print all digits in an integer
    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;
    // printDigits(n);

    // creating a number using digits
    
    // printNumber();

    
    

    return 0;
}
