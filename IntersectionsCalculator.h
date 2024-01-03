#ifndef INTERSECTIONS_CALCULATOR_H
#define INTERSECTIONS_CALCULATOR_H

#include <vector>

class IntersectionsCalculator
{
public:
    ~IntersectionsCalculator();

    /**
     * Calculates the intersections of a polynomial equation with given coefficients.
     */
    std::vector<double> Calculate(const std::vector<double>& coefficients);

private:
    double FastDivission(const std::vector<double> coefficients, double Divisor);
};

#endif // INTERSECTIONS_CALCULATOR_H