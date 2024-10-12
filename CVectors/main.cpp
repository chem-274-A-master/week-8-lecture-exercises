#include <cassert>

int main() {
  /* Create a vector of factorial numbers (called 'factorial') such that factorial[i] = i!
     This should go up to (and including) 12! (which is the max that can be held in a 32-bit integer)

     Create the vector programmatically (ie, don't just put numbers into a vector).
     Remember to include the correct header!
  */


  // Testing code below. Do not modify!

  assert(factorial.size() == 13);
  assert(factorial[0] == 1);
  assert(factorial[1] == 1);
  assert(factorial[2] == 2);
  assert(factorial[6] == 720);
  assert(factorial[12] == 479001600);
}