#include <vector>

#include "IntersectionsCalculator.h"

int main()
{
    IntersectionsCalculator myIntersectionsCalculator;

    std::vector<double> myCoefficients{ 1.0 / 2.0, 1.0 / 5.0, 1.0 / 10000000000000.0, 12345.0, 12.0 * 10000000000000.0 };

    myIntersectionsCalculator.Calculate(myCoefficients);

    return 0;
}

