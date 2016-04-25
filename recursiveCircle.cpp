/***********************************************************************
* Solves Brother Neffs CS237 seemingly infinite circle. What is the
* radius of the outer most circle? Assume the inner most circle has a
* radius of 1. (Answer is 8.7 > radius)
************************************************************************/

#include <iostream>
#include <math.h>       /* cos */
using namespace std;

/**********************************************************************
 * Recursively calculates the radius of each circle
 ***********************************************************************/
double recursivePi(double radius, long count)
{
  double pi = 3.14159265359;
  double radians = pi / count;
  double quotient = cos(radians);
  double newRadius = radius / quotient;
  cout << "quotient: " << quotient << "\nradians: " << radians << "\nNew Radius: " << newRadius << endl;
  count++;
  if (count < 10000)
    recursivePi(newRadius, count);
  return 0.0;
}

int main()
{
  recursivePi(1, 3);
  return 0;
}
