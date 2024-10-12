#include <array>
#include <cmath>
#include <cassert>
#include <cmath>


/* Write a function that calculates the distance between two 3d points
   represented as std::array of double.

   Call the function calculate_distance

   This is a bit of review from the bootcamp :)
*/

double calculate_distance(/* arguments here */)
{
}

/* Testing code below */
bool isclose(double a, double b) { return (std::abs(a-b)/std::min(std::abs(a), std::abs(b)))  < 1.0e-10; }

int main() {
    /* Testing code below. Do not modify! */
    std::array<double, 3> pt1{1.0, 2.0, 3.0};
    std::array<double, 3> pt2{1.0, 2.0, 2.0};
    std::array<double, 3> pt3{2.2, 2.0, 3.0};

    assert(calculate_distance(pt1, pt1) == 0.0);
    assert(isclose(calculate_distance(pt1, pt2), 1.0));
    assert(isclose(calculate_distance(pt1, pt3), 1.2));
}