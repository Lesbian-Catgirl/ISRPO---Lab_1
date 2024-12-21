#define _USE_MATH_DEFINES
#include <math.h>


/**
 * Calculates area of the circle
 * 
 * @param r Contains radius of the circle
 * @return area of the circle with given radius
 */
float Area(int r) {
    return M_PI * r * r;
}


/**
 * Calculates perimeter of a circle
 * 
 * @param r Contains radius of the circle
 * @return perimeter of the circle with given radius
 */
float Perimeter(int r) {
    return 2 * r * M_PI;
}