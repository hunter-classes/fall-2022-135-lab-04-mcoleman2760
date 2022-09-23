#include <iostream>
#include <string>

std::string box(int width, int height) {
  std::string s = "";
    
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            s += "*";
        }
        s += "\n";
    }
    return s;
}

std::string checkerboard(int width, int height) {
  
  std::string s2 = "";
for (int row = 0; row < height;row++){

  for (int col = 0; col < width ;col++){
     if (col %2 == 0 && row % 2 == 0){
        s2 += "*";
    }
    else if (col % 2 != 0 && row % 2 != 0){
       s2 += "*";
      }
    else {
       s2 += " ";
    }
  }
  
      
  
       s2 +=  "\n";
     }

  return s2;
  }

std::string cross(int size) {
      std::string s3 = "";
  for (int rows =1; rows<= size;rows++){
   
   for (int col = 1; col <= size; col++ ) {
   if ((col == rows)  || (col == (size + 1) - rows)){
    s3+= "*";
     }
   
     else {
       s3+= " ";
       }
     
   }
   
  s3+="\n";
  
 }
   return s3;
  }



std::string lower (int sidelength){
  std::string s3 = "";
   for (int i =1; i <= sidelength ;i++)
    {
      for (int k = 1; k <= i; k++ ){
        s3 +="*";
    }
       s3 +="\n";
  
      }
  return s3;
}
std::string upper (int sidelengthu){
  std::string s = "";
  for (int i =sidelengthu; i >= 1 ;i--)
    {
      for (int k = sidelengthu - i; k > 0; k-- )
        s+=  " ";
    
      for (int j = i;j > 0; j--){
       s+= "*";
      }
       s+="\n";
  
      }
  return s;
  }

std::string trap (int width, int height){
   std::string s = "";
  for (int row = 0; row < height; ++row) {
        for (int col = height + row; col > 0; col--) {

            if (height % 6 == 1) { 
        return "Impossible shape!\n";

               
            }
          else {
            s+= " "; 
            
            }
            }

   for (int col = 0; col < (width - (2 * row)); col++) {
           s+="*";
        }
        s+="\n"; }
  return s;
  }

std::string checkerboard3(int width, int height){
   std::string s = "";


std::string rowStart = "*";
std::string c = "*";
for(int row = 1; row <= height; row++){
c = rowStart; 
for(int col = 1; col <= width; col++){
s+= c;

if(col % 3 == 0){
if(c == "*")
c = ' ';
else
c = '*';
}
}
s += "\n";;

if(row % 3 == 0){
if(rowStart == "*")
s += ' ';
else
s  += '*';
}  
}
return s;
  }
