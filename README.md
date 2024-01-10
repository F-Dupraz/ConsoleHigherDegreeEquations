# Polynomial Interceptions Calculator

Welcome to the Polynomial Interceptions Calculator project! This C++ application is designed to find interceptions of equations of degree two or higher. The implementation is crafted from scratch, drawing inspiration and insights from the "Algebra and Trigonometry" book by Earl W. Swokowski and Jeffery A. Cole (13th edition).

## Features

- **Polynomial Interceptions**: Efficiently calculates interceptions for equations of degree two or higher.
- **Custom Implementation**: Built entirely from the ground up in C++, providing a solid foundation for accurate results.
- **Educational Insights**: Leverages concepts and methodologies from "Algebra and Trigonometry" to enhance understanding.

## Getting Started

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/F-Dupraz/ConsoleHigherDegreeEquations
   cd ConsoleHigherDegreeEquations
   ```

2. **Build the Project:**
   ```bash
   g++ -o roots_calculator ConsoleHigherDegreeEquations.cpp IntercectionsCalculator.cpp -std=c++11
   ```

3. **Run the Calculator:**
   ```bash
   ./roots_calculator
   ```

## Usage

1. Input the coefficients of your polynomial in decreasing order of power.
2. The calculator will determine the interceptions of the provided polynomial.

## Example

For a quadratic equation (degree 2) like `5x^2 + -2x + 15 = 0`, input the coefficients `a`, `b`, and `c`.

```bash
Enter myCoefficients{ 5.0, -2.0, 15.0 }
```

The program will then output the interceptions of the equation.

## Known Issues

While the Polynomial Interceptions Calculator is fully functional, there is a known issue related to repeating numbers in the push_back of interceptions. This can cause the output to be the same numbers but repeated many times.

## Contributing

Feel free to contribute to the project by submitting issues or pull requests. Your feedback is highly appreciated!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.