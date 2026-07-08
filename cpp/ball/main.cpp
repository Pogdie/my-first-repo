#include <iostream>
#include <string>
#include <string_view>

class Ball {
public:
  void print() {
    std::cout << "Ball" << '(' << m_color << ' ' << m_radius << ")\n";
    return;
  }

  Ball() : Ball{"Black", 10} {}

  Ball(double radius) : Ball{"Black", radius} {}

  Ball(std::string_view color) : Ball{color, 10} {}

  Ball(std::string_view color, double radius)
      : m_color{color}, m_radius{radius} {
    print();
  }

private:
  std::string m_color{"Black"};
  double m_radius{10};
};

int main() {
  Ball def{};
  Ball blue{"blue"};
  Ball twenty{20.0};
  Ball blueTwenty{"blue", 20.0};

  return 0;
}
