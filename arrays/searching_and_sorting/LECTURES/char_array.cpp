#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;
    while ( name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

// void reverseString(char name[]){
//     int i = 0;
//     int n = getLength(name);
//     int j = n -1;

//     while ( i <= j)
//     {
//         swap(name[i], name[j]);
//         i++;
//         j--;
//     }
    
// }

void replaceSpaces(char sentence[]){
    int i = 0;
    int n = strlen(sentence);
    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
        
    }
    
}

bool isPalindrome(char word[]){
    int i = 0;
    int n = strlen(word);
    int j = n -1;

    while ( i <= j)
    {
        if (word[i] != word[j])
        {
            return false;
        }else{
            i++;
            j--;
        }
        
    }
    return true;
    
}

void toUpperCase(char arr[]){
    int n = strlen(arr);
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
    
}

int main(){
    // char name[100];
    // when we take input like this in the character array then by default at the end a null value is stored 
    // when there a gap between the name you give that is space then cin does not take the value given after space, tab, enter
    // cin.getline(name, 50);

    // cout << name;

    // Q1 -> LENGTH OF A STRING 
    // char name[100];
    // cin >> name;

    // cout << " LENGTH IS " << getLength(name) << endl;
    // cout << " length is " << strlen(name) << endl;

    // Q2- REVERSE A STRING 
    // char name[100];
    // cout << " Enter the name " << endl;
    // cin >> name;
    // getLength(name);
    // reverseString(name);
    // cout << " The reverse is : " << name << endl;


    // Q3 -> FILLING SPACES WITH A SPECIAL CHARACTER
    // char sentence[100];
    // cin.getline(sentence, 100);

    // replaceSpaces(sentence);
    // cout << "printing sentence " << endl << sentence << endl;

    // Q4- CHECKING IF A STRING IS PALINDROME OR NOT 
    // char word[100];
    // cin >> word;
    // cout << "palindrome check : " << isPalindrome(word) << endl;

    // Q5 - CONVERTING LOWER CASE TO UPPER CASE
    // char arr[100];
    // cin >> arr;
    // toUpperCase(arr);
    // cout << arr << endl;
    
    return 0;
}