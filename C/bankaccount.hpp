//
//  bankaccount.hpp
//  cs 60 Hw 2 ATM
//
//  Created by Caitlin Sigler on 1/26/17.
//  Copyright © 2017 Caitlin Sigler. All rights reserved.
//

#ifndef bankaccount_hpp
#define bankaccount_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <cassert>

class BankAccount{
private:
    int account_num;
    double balance;
    int ssn;
    std::string name;
public:
    BankAccount();
    BankAccount(int ba, double bal, int s, std::string n);
    double withdraw(double amount);
    double deposit(double amount);
    double get_balance(){return balance;}
    int get_account_num(){return account_num;}
    int get_ssn(){return ssn;}
    std:: string get_name(){return name;}
    void print_client();
};

bool operator ==(BankAccount lhs, BankAccount rhs);
bool operator <(BankAccount lhs, BankAccount rhs);
bool operator >(BankAccount lhs, BankAccount rhs);
std::ostream& operator <<(std::ostream& out, BankAccount b);

#endif /* bankaccount_hpp */
