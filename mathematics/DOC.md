# Mathematics

## Factorial of a Number

- [Source code](./factorial_of_n.cpp)

- In mathematics, the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n:
`n! = n . (n-1) . (n-2) . (n-3) ...... 3 . 2 . 1`  
For example,  `5! = 5 . 4 . 3 . 2 . 1 = 120`  
The value of `0!` is `1`, according to the convention for an empty product. [[Wikipedia](https://en.wikipedia.org/wiki/Factorial)]



**Program to Check whether a no. is prime or not-**
#include <iostream>
using namespace std;
int main()
{
    int num;
    int index = 0;
    cout << "Enter a number ";
    cin >> num;
    for (int i = 2; i <= num / 2; ++i)
    {
        // condition for non-prime
        if (num % i == 0)
        {
            index = 1;
            break;
        }
    }
    if (num == 1)
    {
        cout << num << " is neither prime nor composite" << endl;
    }
    else
    {
        if (index == 0)
            cout << num << " is a prime number" << endl;
        else
            cout << num << " is not a prime number" << endl;
    }
}
