#include <iostream>

int main() {
 
 int sidelength;  
 
  std::cout << "Input side length: ";
  std::cin >> sidelength;

  for (int i =1; i <= sidelength ;i++)
    {
      for (int k = 1; k <= i; k++ ){
        std::cout << "*";
    }
       std::cout << std::endl;
  
      }

  }
