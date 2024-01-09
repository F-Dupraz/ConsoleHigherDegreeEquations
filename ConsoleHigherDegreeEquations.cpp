#include <vector>
#include <iostream>

#include "IntersectionsCalculator.h"

int main()
{
    IntersectionsCalculator myIntersectionsCalculator;

    std::vector<double> myCoefficients{ 1.0, 1.4, 0.44, -0.56, -0.96 };

    std::vector<double> Intersections = myIntersectionsCalculator.Calculate(myCoefficients);

    std::cout << "The real intersections are: ";
    for (size_t i = 0; i < Intersections.size(); ++i)
    {
        std::cout << Intersections[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

