//
//  main.cpp
//  Algorithm Testing
//
//  Created by Caitlin Sigler on 11/29/18.
//  Copyright © 2018 Caitlin Sigler. All rights reserved.
//
// This algorithm was developed for Uadopt.netlify.com to compare a user's preference of a given dog trait, ranked on a 
// scale of 1-5, with a breed's ranking for that trait, also on a scale of 1 to 5.
// The algrithm returns a matchIndex which quantifies the level of compatibility between the user and the breed.
// The lower the match index, the more compatible the user and breed are.

#include <iostream>
using namespace std;
#include <cmath>


int matching ( int userPrefs[], int breedTraits[]){ //array values are pre-aligned by trait
    int matchIndex=0;
    
    for (int i=0; i<5; i++){
            if (abs(userPrefs[i]- breedTraits[i])>0) //if rank is equal, add nothing
            {
                matchIndex+= abs(userPrefs[i]- breedTraits[i])+ abs(userPrefs[i]-breedTraits[i]) -1;
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
