/*
Input and Output

Task
-----
Read 3 numbers from stdin and print their sum to stdout.

Note: If you plan on completing this challenge in C instead of C++, you'll
need to use format specifiers with printf and scanf.

Input Format
------------
A single line containing 3 space-separated integers: a, b, and c.

Constraints
-----------
1 <= a,b,c <= 1000

Output Format
-------------
Print the sum of the three numbers on a single line.

Sample Input
------------
1 2 7

Sample Output
-------------
10
*/

#include <iostream>

int main() 
{
  int sum{};
  int num{};
  for (int i{}; i<3; ++i)
  {
    std::cin >> num;
    sum += num;
  }
  std::cout << sum;
  return 0;
}
