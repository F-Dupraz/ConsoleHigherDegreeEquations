#ifndef INTERSECTIONS_CALCULATOR_H
#define INTERSECTIONS_CALCULATOR_H

#include <vector>

class IntersectionsCalculator
{
public:
    /**
     * Calculates the intersections of a polynomial equation with given coefficients.
     */
    std::vector<double> Calculate(const std::vector<double>& coefficients);
};

#endif // INTERSECTIONS_CALCULATOR_H