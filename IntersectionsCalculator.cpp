#include <cmath>
#include <vector>
#include <iostream>
#include "IntersectionsCalculator.h"

IntersectionsCalculator::~IntersectionsCalculator() {
    std::cout << std::endl;
    std::cout << "Finished!" << std::endl;
}

std::vector<double> IntersectionsCalculator::Calculate(const std::vector<double>& coefficients) {
    std::vector<double> principalCoefficientDivisors;
    std::vector<double> constantTermDivisors;

    double vectorSize = coefficients.size() - 1;
    double tolerance = 1e-9;

    // Calculate divisors for principal coefficient
    for (double i = 1; i <= std::abs(coefficients[0]); ++i) {
        double possibleDivisor = std::abs(coefficients[0]) / i;
        if (std::abs(possibleDivisor - std::round(possibleDivisor)) < tolerance) {
            principalCoefficientDivisors.push_back(i);
        }
    }

    // Calculate divisors for constant term
    for (double j = 1; j <= coefficients[vectorSize]; ++j) {
        double possibleDivisor = coefficients[vectorSize] / j;
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
        }
    }

    return possibleIntersections;
}

/*
 * ----------------- Implement fast division here -----------------
 */
