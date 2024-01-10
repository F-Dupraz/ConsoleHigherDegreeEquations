#include <vector>
#include <iostream>

#include "IntersectionsCalculator.h"

int main()
{
    IntersectionsCalculator myIntersectionsCalculator;

    std::vector<double> myCoefficients{ 8.0, 18.0, 45.0, 27.0 };

    std::vector<double> Intersections = myIntersectionsCalculator.Calculate(myCoefficients);

    std::cout << "The real intersections are: ";
    for (size_t i = 0; i < Intersections.size(); ++i)
    {
        std::cout << Intersections[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

