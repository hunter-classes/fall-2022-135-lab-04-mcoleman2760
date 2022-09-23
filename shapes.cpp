#include <iostream>
#include <string>

std::string box(int width, int height) {
  std::string s = "";
 
for (int i = 0; i < height;i++){
  return  "\n";
   for (int i = 0; i < width;i++){
     s+= "*";
}
  s += "\n";
  }
  return s;
  }

std::string checkerboard(int width, int height) {
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

  return 0;
  }

std::string cross(int size) {
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


std::string lower (int sidelength){
   for (int i =1; i <= sidelength ;i++)
    {
      for (int k = 1; k <= i; k++ ){
        std::cout << "*";
    }
       std::cout << std::endl;
  
      }
}
std::string upper (int sidelengthu){
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

std::string trap (int width, int height){
  for (int row = 0; row < height; ++row) {
        for (int col = height + row; col > 0; col--) {

            if (height % 6 == 1) { 
        std::cout << "Impossible shape!" << std::endl;

                return 0;
            }
          else {
            std::cout << " "; 
            
            }
            }

   for (int col = 0; col < (width - (2 * row)); col++) {
            std::cout << "*";
        }
        std::cout << std::endl; }}

std::string checkerboard3(int width, int height){
  


char rowStart = '*';
char c = '*';
for(int row = 1; row <= height; row++){
c = rowStart; 
for(int col = 1; col <= width; col++){
std::cout << c;

if(col % 3 == 0){
if(c == '*')
c = ' ';
else
c = '*';
}
}
std::cout << std::endl;

if(row % 3 == 0){
if(rowStart == '*')
rowStart = ' ';
else
rowStart = '*';
}
}
  }

