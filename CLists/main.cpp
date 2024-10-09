#include <iostream>

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
  for(const auto & it : best_languages)
  {
    std::cout << it << std::endl;
  }
  
}