#include "looping.h"
#include <iostream>

namespace looping
{
  void demo()
  {
    std::cout << "Demonstrating loops:" << std::endl;

    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
      std::cout << "Iteration: " << i << std::endl;
    }
    std::cout << std::endl;

    
    std::cout << "While loop:" << std::endl;
    int count = 0;
    while (count < 5)
    {
      std::cout << "Count: " << count << std::endl;
      ++count;
    }
    std::cout << std::endl;


    std::cout << "Do-while loop:" << std::endl;
    int num = 0;
    do
    {
      std::cout << "Number: " << num << std::endl;
      ++num;
    } while (num < 5);
  }
}
