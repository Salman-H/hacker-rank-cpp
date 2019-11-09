/*
Task
----
Given a positive integer denoting n, do the following:
o- If 1<=n<=9, then print the lowercase English word corresponding to the
   number (e.g., one for 1, two for 2, etc.).
o- If n>9, print Greater than 9.

Input Format
------------
A single integer denoting n.

Constraints
------------
1<=n<=10^9

Output Format
-------------
1<=n<=9, then print the lowercase English word corresponding to the number
(e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.

Sample Input 0
--------------
5

Sample Output 0
---------------
five

Sample Input 1
--------------
8

Sample Output 1
---------------
eight

Sample Input 2
--------------
44

Sample Output 2
---------------
Greater than 9
*/

#include <iostream>

int main()
{
  int n{};
  std::cin >> n;
  switch(n)
  {
    case 1:  std::cout << "one"   << '\n';  break;
    case 2:  std::cout << "two"   << '\n';  break;
    case 3:  std::cout << "three" << '\n';  break;
    case 4:  std::cout << "four"  << '\n';  break;
    case 5:  std::cout << "five"  << '\n';  break;
    case 6:  std::cout << "six"   << '\n';  break;
    case 7:  std::cout << "seven" << '\n';  break;
    case 8:  std::cout << "eight" << '\n';  break;
    case 9:  std::cout << "nine"  << '\n';  break;
    default: std::cout << "Greater than 9" << '\n';
  }
  return 0;
}
