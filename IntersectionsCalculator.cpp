#include <cmath>
#include <vector>
#include <iostream>
#include "IntersectionsCalculator.h"

/**
 * @brief Destructor for IntersectionsCalculator.
 * Prints a message indicating the completion of calculations.
 */
IntersectionsCalculator::~IntersectionsCalculator() {
    std::cout << std::endl;
    std::cout << "Finished!" << std::endl;
}

/**
 * @brief Calculates possible intersections of a polynomial equation.
 *
 * @param coefficients Vector of coefficients representing the polynomial equation.
 * @return Vector containing calculated intersections.
 */
std::vector<double> IntersectionsCalculator::Calculate(const std::vector<double>& coefficients) {
    // Initialize vectors to store divisors
    std::vector<double> principalCoefficientDivisors;
    std::vector<double> constantTermDivisors;

    // Set tolerance for precision issues
    double tolerance = 1e-11;

    // Calculate divisors for principal coefficient
    for (double i = 0.01; i <= std::abs(coefficients[0]); i = i + 0.01) {
        double possibleDivisor = std::abs(coefficients[0]) / i;
        if (std::abs(possibleDivisor - std::round(possibleDivisor)) < tolerance) {
            principalCoefficientDivisors.push_back(i);
        }
    }

    // Calculate divisors for constant term
    double vectorSize = coefficients.size() - 1;
    for (double j = 0.01; j <= std::abs(coefficients[vectorSize]); j = j + 0.01) {
        double possibleDivisor = std::abs(coefficients[vectorSize]) / j;
        if (coefficients[vectorSize] == 0 || (std::abs(possibleDivisor - std::round(possibleDivisor)) < tolerance)) {
            constantTermDivisors.push_back(j);
        }
    }

    // Calculate possible intersections
    std::vector<double> possibleIntersections;

    for (size_t n = 0; n < constantTermDivisors.size(); ++n) {
        for (size_t m = 0; m < principalCoefficientDivisors.size(); ++m) {
            double possibleIntersection = constantTermDivisors[n] / principalCoefficientDivisors[m];
            possibleIntersections.push_back(possibleIntersection);
            possibleIntersections.push_back(possibleIntersection * (-1));
        }
    }

    // Calculate valid intersections using SyntheticDivision
    std::vector<double> Intersections;

    for (size_t n = 0; n < possibleIntersections.size(); ++n) {
        bool isIntersection = this->SyntheticDivision(coefficients, possibleIntersections[n]);
        if (isIntersection) {
            // It might casually nudge the same value a couple of times or more, depending on the divisions.
            Intersections.push_back(possibleIntersections[n]);
        }
        else {
            continue;
        }
    }

    return Intersections;
}

/**
 * @brief Performs synthetic division to check if a given divisor is a root of the polynomial equation.
 *
 * @param Coefficients Vector of coefficients representing the polynomial equation.
 * @param Divisor Divisor to be checked.
 * @return True if the divisor is a valid root, false otherwise.
 */
bool IntersectionsCalculator::SyntheticDivision(const std::vector<double> Coefficients, double Divisor) {
    // Check if the vector of coefficients is empty
    if (Coefficients.empty()) {
        // No coefficients to divide
        return false;
    }

    // Initialize the remainder with the leading coefficient of the polynomial
    double remainder = Coefficients[0];

    // Perform synthetic division
    for (int i = 1; i < Coefficients.size(); ++i) {
        remainder = remainder * Divisor + Coefficients[i];
    }

    // Use a small tolerance to handle floating-point errors
    const double tolerance = 1e-9;
    if (std::abs(remainder) < tolerance) {
        // The remainder is close enough to zero, indicating the divisor is a root
        return true;
    }
    else {
        // The remainder is not close enough to zero, indicating the divisor is not a root
        return false;
    }
}
