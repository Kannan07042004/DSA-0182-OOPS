#include <iostream>
using namespace std;
class Rectangle {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Rectangle created with length " << length << " and width " << width << endl;
    }
    double area() {
        return length * width;
    }
};
int main() {
	int n1, n2;
    cout << "Enter the length: ";
    cin >> n1;
    cout << "Enter the width: ";
    cin >> n2;
    Rectangle rect(n1, n2);
    cout << "Area of the rectangle: " << rect.area() << endl;
    return 0;
}

