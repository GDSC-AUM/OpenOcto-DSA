# Dynamic Programming

## Find length of longest common substring

- [Source Code](./longest_common_substring.cpp)

- Take 2 strings from user, and print the length of their longest common substring.

- Algorithm uses dynamic programming to store the length of longest common substring at dp[i+1][j+1] such that substring ends on index *i* for s<sub>1</sub> and index *j* for s<sub>2</sub>. Having stored these values in the 2D array, calculating the maximum element of the array gives the result. [Wikipedia](https://en.wikipedia.org/wiki/Longest_common_substring_problem)

## nth number in fibonacci sequence

- [Source Code](./fibonacci.cpp)

- Take n from user, and print the n<sup>th</sup> number in fibonacci sequence.

- Algorithm uses dynamic programming to store the i<sup>th</sup> and (i+1)<sup>th</sup> fibonacci numbers, and calculate (i+2)<sup>th</sup> fibonacci number using previous 2. [Wikipedia](https://en.wikipedia.org/wiki/Fibonacci_number)
