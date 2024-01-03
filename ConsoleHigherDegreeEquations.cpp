#include <vector>
#include <iostream>

#include "IntersectionsCalculator.h"

int main()
{
    IntersectionsCalculator myIntersectionsCalculator;

    std::vector<double> myCoefficients{ -1.0, 0.0, 48.0, 0.0, 49.0 };

    std::vector<double> Intersections = myIntersectionsCalculator.Calculate(myCoefficients);

    for (size_t i = 0; i < Intersections.size(); ++i)
    {
        std::cout << Intersections[i] << std::endl;
    }

    return 0;
}

