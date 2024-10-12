#include <cassert>


int main() {

  /* Create a map for the first 5 elements of the periodic table
     The key should be the element number, the value should be the
     element symbol (string)
     Call the map "element_syms"

     You must include the correct header above!
  */

  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
    assert(element_syms.size() == 5);
    assert(element_syms[1] == "H");
    assert(element_syms[2] == "He");
    assert(element_syms[3] == "Li");
    assert(element_syms[4] == "Be");
    assert(element_syms[5] == "B");
}