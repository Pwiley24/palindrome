// This program takes in a string from a user and checks to see if it is a palindrome.
// Author: Paige Wiley
// Date: 9/19/2022

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
  char str[81];
  char str2[81];
  char strP[81];
  int count = 0;
  int index = 0;
  int nullIndex = 81;
 
  cin.get(str, 81); //get the string from user


   //find null index
   for(int i = 0; i < 81; i++){
     if(str[i] == '\0'){ //end of typed string
       nullIndex = i + 1;
       break;
     }
   }
   
   //convert to all lowercase
   for (int i = 0; i < nullIndex; i++){ 
     str[i] = tolower(str[i]);
    
    if((str[i] >= 97 && str[i] <= 122) ||
        (str[i] >= 48 && str[i] <= 57)){ // char is a lowercase letter or number  
      //include the char in the new string
      str2[count] = str[i];
      count++;
    } else if (str[i] == '\0'){ //add a null value to the new string
      str2[count] = '\0';
      count--;
    }
  }
 
      
  index = count;
    
  //copy string onto new string backwards
  for(int i = 0; i <= index; i++){
    strP[i] = str2[count];
    count--;
  }
  
  cout << "String: " << str2 << endl;
  cout << "String backwards: " << strP << endl;
  
  //compare strings:
  if(strcmp(strP, str2) == 0){ //equal
    cout << "Palindrome!" << endl;
  }else{ //not equal
    cout << "Not Palindrome :(" << endl;
  }
  
 
    
  return 0;
}
