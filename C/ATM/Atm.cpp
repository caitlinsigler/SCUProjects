//
//  Atm.cpp
//  ATM
//
//  Created by Caitlin Sigler on 1/26/17.
//  Copyright © 2017 Caitlin Sigler. All rights reserved.
//

#include "Atm.hpp"

BankAccount Atm:: get_cash(int amount, BankAccount b){
    int twens= amount/20;
    int ten= (amount-(20*twens))/10;
    if (amount>10 && twenties-twens>=0 && tens-ten>=0){
        twenties=twenties-twens;
        tens=tens-ten;
        b.withdraw(amount);
        std::cout<< "you will recieve "<< twens<< " twenties and "<< ten<< " tens\n";
    }
    else if (amount<10) {
        std::cout<< "invalid withdrawal amount";
    }
    else if (twenties-twens<0 && tens-ten<0){
        std:: cout<< "Not enough bills in ATM";
    }
    return b;
}

Atm Atm:: restock(int new10s, int new20s){
    tens+=new10s;
    twenties+=new20s;
    Atm a (tens, twenties);
    return a;
}

Atm Atm:: operator +=(Atm& rhs){
    tens+=rhs.get_tens();
    twenties+= rhs.get_twenties();
    rhs.tens=0;
    rhs.twenties=0;
    Atm a (tens, twenties);
    return a;
}

bool operator ==(Atm lhs, Atm rhs){
    if (lhs.get_twenties()==rhs.get_twenties()&& lhs.get_tens()==rhs.get_tens()){
        return true;
    }
    else{
        return false;
    }
}

std:: ostream& operator <<(std::ostream& out, Atm a){
    out<< "there are "<< a.get_tens()<<" tens and "<< a.get_twenties()<< " twenties\n";
    return out;
}
