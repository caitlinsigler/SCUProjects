//
//  Atm.hpp
//  cs 60 Hw 2 ATM
//
//  Created by Caitlin Sigler on 1/26/17.
//  Copyright © 2017 Caitlin Sigler. All rights reserved.
//

#ifndef Atm_hpp
#define Atm_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "bankaccount.hpp"

class Atm {
private:
    int twenties;
    int tens;
public:
    Atm();
    Atm(int ten, int twen);
    int get_twenties() {return twenties;}
    int get_tens() {return tens;}
    Atm operator +=(Atm& rhs);
    Atm restock(int new20s, int new10s);
    BankAccount get_cash(int amount, BankAccount b);
};

bool operator ==(Atm lhs, Atm rhs);

std:: ostream& operator <<(std::ostream& out, Atm a);

#endif /* Atm_hpp */
