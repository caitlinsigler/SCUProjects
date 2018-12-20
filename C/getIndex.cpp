//
//  main.cpp
//  Get Index
//
//  Created by Caitlin Sigler on 11/3/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
using namespace std;

//Returns the index(s) of a value in an array
string getIndex(int A[], int size, int value){
    bool isFound= 0;
    string index= "";
    for (int i=0; i<size; i++){
        if (A[i]== value){
            index+= to_string(i);
            index+= " ";
            isFound= 1;
        }
    }
    if (isFound==0){
        cout<< "value not found";
    }
    return index;
}

int main() {
   
    int size=7;
    int value=88;
    int A[]= {11, 2, 15, 88, 99, 11, 88};
    
    cout<< getIndex(A, size, value)<< endl;
    
    return 0;
}
