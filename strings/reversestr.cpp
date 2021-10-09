// C++ program to reverse a string
#include <iostream>
using namespace std;
 
//Reverse function prototyping
void reverse(string);
 
// Main body
int main(void)
{
    string str;
    cout << "Type the string: ";
    cin >> str;
    reverse(str);
    return (0);
}

void reverse(string str)  // Reverse function body
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}