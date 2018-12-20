//
//  main.cpp
//  Number Distance
//
//  Created by Caitlin Sigler on 11/3/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
using namespace std;

//Caulates distance between two integers on a number line without using the abs function or creating any new variables
int distance(int a, int b){
    if ((a-b)>=0){
        return a-b;
    }
    else{
        return b-a;
    }
}

int main() {
   
  int a= 7;
  int b= 5;
  int c= 15;
  int d= -17;
  int e= -8;
  
  cout<<distance(a,b)<<endl;
  cout<<distance(b,c)<<endl;
  cout<<distance(d,e)<<endl;
  cout<<distance(e,b)<<endl;
  cout<<distance(e,a)<<endl;

    return 0;
}
