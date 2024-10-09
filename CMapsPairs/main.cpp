#include <iostream>
#include <map>


int main() {

  /* Create a map for the first 5 elements of the periodic table
     The key should be the element number, the value should be the
     element symbol (string)
     Call the map "element_syms"
  */

  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
  for(const auto & it : element_syms)
    std::cout << it.first << " -> " << it.second << std::endl;
}