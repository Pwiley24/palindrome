#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
  char str[81];
  char str2[81];
  int count = 0;
  int nullIndex = 81;
  cin >> str; //read in the string
  cin.get(str, 81);
  cout << "str:" << str << endl;

   //find null index
   for(int i = 0; i < 81; i++){
     if(str[i] == '\0'){ //end of typed string
       nullIndex = i;
     }
   }
   cout << "string 1:" << str << endl;
   //convert to all lowercase
   for (int i = 0; i < nullIndex; i++){ 
     str[i] = tolower(str[i]);

     cout << str[i] << endl;
    
    if((str[i] >= 97 && str[i] <= 122) ||
        (str[i] >= 48 && str[i] <= 57)){ // char is a lowercase letter or number  
      //include the char in the new string
      str2[count] = str[i];
      count++;
    } else if (str[i] == '\0'){ //add a null value to the new string
      str2[count] = '\0';
    }

    //cout << str[i] << endl;
   //get ride of all repeats in string...

   
  }
 
    
  
  // strncpy(str, str2, 81);

  cout << "string 1:" << str << endl;
  cout << "string2:" << str2 << endl;
  
  
  
  
  

  
  
  

  

  //cout << str2 << endl; //print str2
  return 0;
}
