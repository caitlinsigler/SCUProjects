//
//  main.cpp
//  homework 7.2
//
//  Created by Caitlin Sigler on 11/7/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

string remove_vowels(string s){
    string snovowels;
    for (int i=0; i< s.length(); i++){
        if (s[i]== 'A'|| s[i]== 'a' ||s[i]== 'E'||s[i]== 'e'||s[i]== 'I'||s[i]== 'i'||s[i]== 'O'||s[i]== 'o'||s[i]== 'U'||s[i]== 'u'){
            snovowels+= "";
        }
        else {
            snovowels+= s[i];
        }
    }
    return snovowels;
}

int main() {

    string s= {"The quick red fox jumped over the lazy brown dog\n"};
    cout<< remove_vowels(s);
    
    string c= {"Hello my NAME is Michael!!!\n"};
    cout<< remove_vowels(c);
    
    string d= {"You're are taking CSCI 10 at SCU\n"};
    cout<< remove_vowels(d);
    
    return 0;
}
