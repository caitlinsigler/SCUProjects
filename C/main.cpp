//
//  main.cpp
//  cs 60 Hw 2 ATM
//
//  Created by Caitlin Sigler on 1/24/17.
//  Copyright © 2017 Caitlin Sigler. All rights reserved.
//

#include <iostream>
#include "Atm.hpp"


using namespace std;

int main() {
    Atm B (5,9);
    Atm C (2,3);
    BankAccount Bob (86, 86, 23, "bob");
    cout<< B.operator+=(C);
    cout<< C.get_tens()<< " tens and "<< C.get_twenties()<< " twenties\n";
    C.restock(6, 5);
    cout<< C.get_tens()<< " tens and "<< C.get_twenties()<< " twenties\n";
    B.get_cash(50, Bob);
    return 0;
}

Atm::Atm(){
    tens=6;
    twenties=6;
}
Atm:: Atm(int ten, int twen){
    twenties= twen;
    tens= ten;
}
