#include "functions.h"
#include <iostream>

namespace functions
{
  void demo()
  {
    std::cout << "Demonstrating functions:" << std::endl;

    int alpha = 5;
    int beta = 10;

    int result = sum(alpha, beta);
    std::cout << "The result of adding alpha and beta is: " << result << std::endl;
  }

  int sum(int alpha, int beta)
  {
    return alpha + beta;
  }
}
