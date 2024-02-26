#include <iostream>

int main() {
    double principal, rateOfInterest, time;

    // Fixed interest rate for the student
    double fixedInterestRate = 8.0;

    // Input principal amount and time
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the time (in years): ";
    std::cin >> time;

    // Calculate interest for the student (8%)
    double studentInterest = (principal * fixedInterestRate * time) / 100;

    // Additional rate of interest (ROI) offered to the customer (10%)
    rateOfInterest = 10.0;

    // Calculate total simple interest
    double totalSimpleInterest = (principal * rateOfInterest * time) / 100;

    // Display the result
    std::cout << "Interest for the student (8%): " << studentInterest << std::endl;
    std::cout << "Additional ROI (10%): " << totalSimpleInterest - studentInterest << std::endl;
    std::cout << "Total Simple Interest: " << totalSimpleInterest << std::endl;

    return 0;
}
