#include <iostream>
using namespace std;
int main() {
    int size,i;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "The array elements are: ";
    for (i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

