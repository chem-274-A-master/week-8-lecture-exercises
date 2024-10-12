#include <cassert>

/* Below is an opinionated list of best programming languages stored as an std::list

  1.) Insert "C++" at the beginning
  2.) Insert "Julia" between Fortran and Javascript

  HINT: You can use std::advance to advance an iterator a number of times. Ie, 
        std::advance(it, 10) is the same as calling it++ 10 times;
  
  Also, be sure to include the correct header for lists!
*/

int main() {

  std::list<std::string> best_languages{
    "Python",
    "Fortran",
    "JavaScript"
  };

  /*********************/
  /* Insert stuff here */
  /*********************/


  /* Testing code below. Do not modify! */
  assert(best_languages.size() == 5);
  auto it = best_languages.begin();
  assert(*it == "C++");  std::advance(it, 1);
  assert(*it == "Python");  std::advance(it, 1);
  assert(*it == "Fortran"); std::advance(it, 1);
  assert(*it == "Julia"); std::advance(it, 1);
  assert(*it == "JavaScript"); std::advance(it, 1);
  assert(it == best_languages.end());
}