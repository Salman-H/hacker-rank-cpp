/*
Basic Data Types

Input Format
------------
Input consists of the following space-separated values:
int, long, char, float, and double, respectively.

Output Format
-------------
Print each element on a new line in the same order it was received as input.
Note that the floating point value should be correct up to 3 decimal places
and the double to 9 decimal places.

Sample Input
------------
211916801 97592151379235457 p 19856.992 -5279235.721231465

Sample Output
-------------
211916801
97592151379235457
p
19856.992
-5279235.721231465

Note: You can use cin and cout instead of scanf and printf; however, if
      you are taking a million numbers as input and printing a million
      lines, it is faster to use scanf and printf.
*/

#include <iostream>
#include <cstdio>

int main()
{
  int    i {0};
  long   l {0l};
  char   c {0};
  float  f {0.0f};
  double d {0.0};

  scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

  printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i, l, c, f, d);

  return 0;
}
