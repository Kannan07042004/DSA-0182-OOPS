#include <iostream>
using namespace std;
double PI = 3.141;
double area1(double side) {
    return side * side;
}
double area2(double length, double width) {
    return length * width;
}
double area3(double radius) {
    return PI * radius * radius;
}
int main() {
    double side, length, width, radius;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of the square: " << area1(side) << endl;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area2(length, width) << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area3(radius) << endl;
    return 0;
}

