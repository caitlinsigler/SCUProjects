//
//  main.cpp
//  Matrices
//
//  Created by Caitlin Sigler on 11/17/16.
//  Copyright © 2016 Caitlin Sigler. All rights reserved.
//

#include <iostream>
using namespace std;

struct matrix {
    int row1[3];
    int row2[3];
    int row3[3];
};

matrix getMatrix (int row1[3], int row2[3], int row3[3]){
    matrix m;
    for (int i=0; i<3; i++) {
        m.row1[i]= row1[i];
    }
    for (int i=0; i<3; i++) {
        m.row2[i]= row2[i];
    }
    for (int i=0; i<3; i++) {
        m.row3[i]= row3[i];
    }
    return m;
}

void PrintMatrix(matrix m){
    for (int i=0; i<3; i++) {
        cout<< m.row1[i];
    }
    cout<<endl;
    for (int i=0; i<3; i++) {
        cout<< m.row2[i];
    }
    cout<<endl;
    for (int i=0; i<3; i++) {
        cout<< m.row3[i];
    }
    cout<<endl;
}
matrix matrixadd(matrix m1, matrix m2) {
    matrix out;
    for (int i=0; i<3; i++) {
        out.row1[i]= m1.row1[i]+m2.row1[i];
    }
    for (int i=0; i<3; i++) {
        out.row2[i]= m1.row2[i]+m2.row2[i];
    }
    for (int i=0; i<3; i++) {
        out.row3[i]= m1.row3[i]+m2.row3[i];
    }
    return out;
}
matrix MatrixSum (matrix mats[],int size){
    matrix s;
    for (int i=0; i<size; i++) {
        s= matrixadd(s, mats[i]);
    }
    return s;
}
int main() {
    
    int a[]= {1,2,3};
    int b[]= {1,2,3};
    int c[]= {1,2,3};

    int d[]= {1,1,1};
    int e[]= {1,1,1};
    int f[]= {1,1,1};
   
    

    matrix x= getMatrix(a, b, c);
    matrix y= getMatrix(d, e, f);
    matrix A[]= {x, y, y};
    
    PrintMatrix(x);
    cout<<endl;
    PrintMatrix(matrixadd(y, y));
    cout<<endl;
    PrintMatrix(MatrixSum(A, 3));
    
    return 0;
}




