#include <iostream>
#include <array>
#include <cmath>


/* Write a function that calculates the distance between two 3d points
   represented as std::array of double.

   Call the function calculate_distance

   This is a bit of review from the bootcamp :)
*/

double calculate_distance(/* arguments here */)
{

}



int main() {

    /* Testing code below. Do not modify! */
    std::array<double, 3> pt1{1.0, 2.0, 3.0};
    std::array<double, 3> pt2{1.0, 2.0, 2.0};
    std::array<double, 3> pt3{2.2, 2.0, 3.0};

    std::cout << calculate_distance(pt1, pt2) << std::endl;
    std::cout << calculate_distance(pt1, pt3) << std::endl;
}