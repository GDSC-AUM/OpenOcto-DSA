
#include <iostream>
using namespace std;

int main(void)
{
    int number, k, flag, rem;

    cout << "Enter a number" <<endl;
    cin >> number;
    k = 2;
    flag = 1;

    while ((k <= number /2) && (flag == 1))

    {
        rem = number % k;
        if(rem == 0)
        flag = 0;
        k++;
    }
    if(flag == 1)
    cout << number << " is prime" << endl;
    else 
    cout << number << " is not prime" << endl;

    return 0;
}