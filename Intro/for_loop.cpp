/*
Input Format
------------
You will be given two positive integers, a and b (a<=b), separated by a
newline.

Output Format
-------------
For each integer n in the interval [a, b]:

o- If 1<=n<=9, then print the English representation of it in lowercase. That is
   "one" for 1, "two" for 2, and so on.
o- Else if n>9 and it is an even number, then print "even".
o- Else if n>9 and it is an odd number, then print "odd".

Note: [a,b] = {x belongs to Z | a<=x<=b} = {a, a+1,...,b}

Sample Input
------------
8
11

Sample Output
-------------
eight
nine
even
odd
*/

#include <iostream>

int main()
{
  int a{};
  int b{};
  std::cin >> a >> b;
  std::string digits[9] = { "one", "two", "three", "four",
                            "five", "six", "seven", "eight", "nine"};
  for (int i{a}; i<=b; ++i)
  {
    if (i >= 1 && i <= 9)
    {
      std::cout << digits[i-1] << '\n';
    }
    else if (i > 9)
    {
      if (i % 2 == 0) std::cout << "even" << '\n';
      else std::cout << "odd" << '\n';
    }
  }
  return 0;
}
