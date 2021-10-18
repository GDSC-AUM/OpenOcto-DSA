// include the header file for standard input output 
#include <iostream>
using namespace std;

// declaring the sieve function
// it will print all the prime numbers less than equal to n
// also prints the count of primes less than equal to n
void seive(int n);

// the main function
int main(){
    
    cout << "Enter a number n: \n";
    int n;
    cin >> n;

    seive(n);
    return 0;
}

// defining the sieve function
void seive(int n){
    // boolean array to store if index number is prime or not
    bool arr[n+1];
    for(int i = 1; i <= n; i++){
        arr[i] =true;
    }

    // 1 is neither prime nor composite
    arr[1] = false;

    // start from 2, and set the value as false for all multiples of 2 other than itself
    // similarly iterate for every number less than equal to square root(n)
    for(int i = 2; i * i <= n; i++){
        // if we encounter a false value i.e. a composite number,
        // then there is no need to iterate
        if(arr[i]){
            for(int j = i * i; j <= n; j+=i){
                arr[j] = false;
            }
        }
    }

    // we have obtained the array that has true value for every prime index
    // printing those elements and counting the number of such elements
    int count = 0;
    cout << "The list of prime numbers below " << n << " is: \n";
    for(int i = 1; i <= n; i++){
        if(arr[i]){
            count++;
            cout << i << " ";
        } 
    }
    cout << endl << "There are " << count << " prime numbers less than equal to "<< n;
}