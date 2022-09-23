#include <iostream>

#include <string>
#include "shapes.h"

int main() {
//std::string result;
//result = box(7,4);
std::cout << "box(7,4):\n";
std::cout << box(7,4);
std::cout << "\n------------------\n"; 
std::string check = checkerboard(11, 6);
  std::cout << "checkerboard(11,6):\n";
std::cout << check;
  std::cout << "\n------------------\n";
  std::cout << "cross(8):\n";
  std::string cro = cross(8);
  std::cout << cro;
  std::cout << "\n------------------\n";
  std::string low = lower(6);
  std::cout << "lower(6)):\n";
std::cout << low;
  std::cout << "\n------------------\n";
  std::string up = upper(5);
  std::cout << "upper(5):\n";
std::cout << up;
  std::cout << "\n------------------\n";
  std::string tra = trap(12, 5);
  std::cout << "trap(12, 5):\n";
std::cout << tra;
  std::cout << "\n------------------\n";
  std::string check3 = checkerboard3(16, 11);
  std::cout << "checkerboard3(16,11):\n";
std::cout << check3;
  std::cout << "\n------------------\n";
  


  
}
