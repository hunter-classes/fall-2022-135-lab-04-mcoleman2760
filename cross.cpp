#include <iostream>
#include <string>
int main() {
 int size;  
 
  std::cout << "Input size: ";
  std::cin >> size;

 for (int rows =1; rows<= size;rows++){
   
   for (int col = 1; col <= size; col++ ) {
   if ((col == rows)  || (col == (size + 1) - rows)){
     std::cout << "*";
     }
   
     else {
       std::cout << " ";
       }
     
   }
   
std::cout << std::endl;
  
 }
   return 0;
  }
