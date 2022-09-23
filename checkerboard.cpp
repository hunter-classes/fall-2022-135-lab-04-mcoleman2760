#include <iostream>

int main() {
  int width;  
  int height;
  std::cout << "Enter a width: \n";
  std::cin >> width;
  std::cout << "Enter a height \n";
  std::cin >> height;
  std::cout << "Shape: \n" ;
for (int row = 0; row < height;row++){

  for (int col = 0; col < width ;col++){
     if (col %2 == 0 && row % 2 == 0){
       std::cout << "*";
    }
    else if (col % 2 != 0 && row % 2 != 0){
      std::cout << "*";
      }
    else {
      std::cout << " ";
    }
  }
  
      
  
      std::cout << "\n";
     }

  
  }
