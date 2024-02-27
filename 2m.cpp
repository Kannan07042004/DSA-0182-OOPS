#include <iostream>
using namespace std;
int main() 
{
    int n1,n2,n3,largest;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    largest = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    cout << "The largest number is: " << largest << endl;
    return 0;
}

