#include <iostream>

int main() {
 int width;  
  int height;
  std::cout << "Enter a width: \n";
  std::cin >> width;
  std::cout << "Enter a height \n";
  std::cin >> height;
  std::cout << "Shape:" ;
for (int i = 0; i < height;i++){
  std::cout << "\n";
   for (int i = 0; i < width;i++){
     std::cout << "*";
   }
  
     
   }
  
  }
