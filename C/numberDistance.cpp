//
//  main.cpp
//  Number Distance
//
//  Created by Caitlin Sigler on 11/3/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
using namespace std;

int distance(int a, int b){
    if ((a-b)>=0){
        return a-b;
    }
    else{
        return b-a;
    }
}

int main() {
   
  var a= 7;
  var b= 5;
  var c= 15;
  var d= -17;
  var e= -8;
  
  cout<<distance(a,b)<<endl;
  cout<<distance(b,c)<<endl;
  cout<<distance(d,e)<<endl;
  cout<<distance(e,b)<<endl;
  cout<<distance(e,a)<<endl;

    return 0;
}
