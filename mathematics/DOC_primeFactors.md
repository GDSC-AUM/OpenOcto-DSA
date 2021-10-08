# Prime Factors of any number

[Source Code](./prime_factors.cpp)

Prime factors are the factors of a number, which are already prime number.

To write this program, we will run a loop from 1 to less than 'n' (where 'n' is the user input value, of which we need to find the prime factors).

Throughout the program, value of i will be incremented by 1 (i.e, i++) and we will check, if **i divides by n** gives a remainder zero then that particular value of 'i' will be a prime factor and it will be printed. 

One can refer to this wikipedia as an extra source of study material.[[Prime numbers](./https://en.wikipedia.org/wiki/Prime_number)]

**Time complexity** : O(n), because we always need to traverse the complete loop.


## Sample I/O:

### Input
```
21
```
### Output
```
Factors of 21: 1 3 7 21
```
