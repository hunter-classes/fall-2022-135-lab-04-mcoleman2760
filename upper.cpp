#include <iostream>

int main() {
int sidelengthu;  
 
  std::cout << "Input side length: ";
  std::cin >> sidelengthu;

  for (int i =sidelengthu; i >= 1 ;i--)
    {
      for (int k = sidelengthu - i; k > 0; k-- )
        std::cout << " ";
    
      for (int j = i;j > 0; j--){
        std::cout << "*";
      }
       std::cout << std::endl;
  
      }
}
