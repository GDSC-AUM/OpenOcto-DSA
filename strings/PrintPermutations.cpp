// Import the header
#include <bits/stdc++.h>
// Import string header
#include <string>
using namespace std;


void printPerms(string s, string toPrint){

    // this means that all elements of the string are appended to "toPrint" string
    // hence ready to be printed
    if(s.length() == 0){
        cout << toPrint << '\n';
        return;
    }

    // everyiteration takes the character at ith position and append it to end of "toPrint" string
    for(int i = 0; i < s.length(); i++){
        
        string left_sub = s.substr(0, i);
        string right_sub = s.substr(i+1);

        // recursively call the function to permute on remaining string
        string remain = left_sub + right_sub;

        printPerms(remain, toPrint+s[i]);
    }
}   


// Main Function
int main(){
    // take a string input from the user
    string s;
    cout << "Enter a string : \n";
    cin >> s;

    string toPrint = "";

    // Print all the permutations of the string
    printPerms(s, toPrint);
    return 0;
}