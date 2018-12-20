//
//  main.cpp
//  Algorithm Testing
//
//  Created by Caitlin Sigler on 11/29/18.
//  Copyright © 2018 Caitlin Sigler. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>


int matching ( int a[], int b[]){
    int matchIndex=0;
    
    for (int i=0; i<5; i++){
            if (abs(a[i]- b[i])>0){
                matchIndex+= abs(a[i]- b[i])+ abs(a[i]-b[i]) -1;
            }
    }
    return matchIndex;
}



int main(int argc, const char * argv[]) {
    
    int a [5]= {5,4,3,2,1};
    int b [5]= {5,5,5,5,5};
    int c [5]= {1,1,1,1,1};
    int d [5]= {1,2,3,4,5};
    int e [5]= {1,2,4,4,5};
    int f [5]= {1,2,4,4,5};
    int g [5]= {1,2,5,5,5};
    
    cout<< "d, e "<< matching(d, e)<< endl;
    cout<< "d, f "<< matching(d, f)<< endl;
    cout<< "d, g "<< matching(d, g)<< endl;
    cout<< "d, b "<< matching(d, b)<< endl;
    cout<< "b, c "<< matching(b, c)<< endl;
    cout<< "b, c "<< matching(e, f)<< endl;
    
    return 0;
}
