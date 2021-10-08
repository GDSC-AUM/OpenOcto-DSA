#include <iostream> // std::cout

using namespace std;

// function to find factorial of given number
int fact(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int num = 5; //input value
    cout << "Factorial of " << num << " is " << fact(num) << endl;
    return 0;
}
