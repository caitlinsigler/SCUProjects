//
//  main.cpp
//  Palindrome
//
//  Created by Caitlin Sigler on 11/3/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
using namespace std;

//Determines if a string is a palindrome without using the reverse function or creating more than 1 new varibale.
bool isPalindrome(string s) {
  var counter=0;
  for (var i = s.length() - 1; i >= 0; i--){
    if (s[counter]== s[i]){
		  counter++;
		}
		else{
		  return false;
		}
  }
	  return true;
}

int main() {
   
  string a= "racecar"
  string b= "kayak"
  string c= "hello"
  string d= "world"
  string e= "madam" 
  
  cout<<isPalindrome(a)<<endl;
  cout<<isPalindrome(b)<<endl;
  cout<<isPalindrome(c)<<endl;
  cout<<isPalindrome(d)<<endl;
  cout<<isPalindrome(e)<<endl;

  return 0;
}
