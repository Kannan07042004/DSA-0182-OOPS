#include <iostream>
using namespace std;

class RegistrationCostCalculator {
public:
    int compute_cost(int last_four_digits) {
        int cost = 5000;
        if (is_same(last_four_digits))
            cost += 5000;
        if (is_palindrome(last_four_digits))
            cost += 3000;
        if (is_divisible_by_2(last_four_digits))
            cost += 1000;
        return cost;
    }
    bool is_same(int num) {
        return num % 1111 == 0;
    }
    bool is_palindrome(int num) {
        int reversed_num = 0, temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            reversed_num = reversed_num * 10 + digit;
            temp /= 10;
        }
        return num == reversed_num;
    }
    bool is_divisible_by_2(int num) {
        return num % 2 == 0;
    }
};
int main() {
    RegistrationCostCalculator calculator;
    int last_four_digits;
    cout << "Enter the last four digits of the registration number: ";
    cin >> last_four_digits;
    int cost = calculator.compute_cost(last_four_digits);
    cout << "Cost is: " << cost << endl;
    return 0;
}

