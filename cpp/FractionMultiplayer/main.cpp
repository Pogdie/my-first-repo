#include <iostream>

struct Fraction {
  int numerator{};
  int denominator{};
};

Fraction getFraction() {
  Fraction temp{};
  std::cout << "Numerator?: ";
  std::cin >> temp.numerator;
  std::cout << "denominator?: ";
  std::cin >> temp.denominator;
  return temp;
}

Fraction getMultipliedFraction(const Fraction &F1, const Fraction &F2) {
  return Fraction{F1.numerator * F2.numerator, F1.denominator * F2.denominator};
}

void printFraction(const Fraction &Fraction) {
  std::cout << "\nMultiplied it equals " << Fraction.numerator << '/'
            << Fraction.denominator;
}
int main() {
  Fraction F1{getFraction()};
  Fraction F2{getFraction()};
  printFraction(getMultipliedFraction(F1, F2));
  return 0;
}
