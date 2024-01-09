#ifndef INTERSECTIONS_CALCULATOR_H
#define INTERSECTIONS_CALCULATOR_H

#include <vector>

/**
 * @brief Class for calculating intersections of a polynomial equation.
 */
class IntersectionsCalculator {
public:
    /**
     * @brief Destructor for IntersectionsCalculator.
     * Prints a message indicating the completion of calculations.
     */
    ~IntersectionsCalculator();

    /**
     * @brief Calculates the intersections of a polynomial equation with given coefficients.
     *
     * @param coefficients Vector of coefficients representing the polynomial equation.
     * @return Vector containing calculated intersections.
     */
    std::vector<double> Calculate(const std::vector<double>& coefficients);

private:
    /**
     * @brief Performs synthetic division to check if a given divisor is a root of the polynomial equation.
     *
     * @param Coefficients Vector of coefficients representing the polynomial equation.
     * @param Divisor Divisor to be checked.
     * @return True if the divisor is a valid root, false otherwise.
     */
    bool SyntheticDivision(const std::vector<double> Coefficients, double Divisor);
};

#endif // INTERSECTIONS_CALCULATOR_H
