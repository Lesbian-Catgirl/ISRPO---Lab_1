#define _USE_MATH_DEFINES
#include <math.h>


/**
 * Calculates area of a circle
 * 
 * @param r Contains radius of a circle
 * @return area of a circle with given radius
 */
float Area(int r) {
    return M_PI * r * r;
}


/**
 * Calculates perimeter of a circle
 * 
 * @param r Contains radius of a circle
 * @return perimeter of a circle with given radius
 */
float Perimeter(int r) {
    return 2 * r * M_PI;
}