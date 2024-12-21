

/**
 * Calculates area of a triangle
 * 
 * @param a Contains length of one of the triangle's sides
 * @param h Contains length of the height to the same side if the triangle
 * @return area of the triangle with given side and height lengthes
 */
float Area(int a, int h){
    return a * h / 2;
}


/**
 * Calculates perimeter of a triangle
 * 
 * @param a Contains length of the first triangle's sides
 * @param b Contains length of the second triangle's sides
 * @param C Contains length of the third triangle's sides
 * @return perimeter of the triangle with given sides' lengthes
 */
int Perimeter(int a, int b, int  c){
    return a + b + c;
}