//
//  main.cpp
//   SD
//
//  Created by Caitlin Sigler on 11/3/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


double average (double A[], int size){
    double sum=0;
    for (int i=0; i<size; i++){
        sum+= A[i];
    }
    return sum/size;
}
double standardDeviation (double A[], int size){
    double total=0;
    double avg = average(A,size);
    for (int i=0; i<size; i++){
        total+= pow(A[i]-avg,2);
    }
    return sqrt(total/size);
}

int main() {

}
