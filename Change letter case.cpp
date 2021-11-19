/*3. Write a program that inputs a line of text into char array s[ 100 ]. Output the line in 
uppercase letters and in lowercase letters. */

#include <iostream>
#include <cstring>

using namespace std;

int main(){

  char s[100];

  cout<<"Enter a text: ";
  cin.getline(s, 100);

  cout<<"\nText in uppercase: "; 
  for(int i=0; i<strlen(s); i++){
    s[i]=toupper(s[i]);
    cout<<s[i];
  }

  cout<<"\nText in lowercase: ";
  for(int j=0; j<strlen(s); j++){
    s[j]=tolower(s[j]);
    cout<<s[j];
  }
 
}
