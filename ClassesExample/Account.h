//
// Created by james.bryant on 2/7/2019.
//

#ifndef UNTITLED_ACCOUNT_H
#define UNTITLED_ACCOUNT_H

#endif //UNTITLED_ACCOUNT_H

#include <string>

class Account {
public:

    //constructor initializes data member name with parameter accountName
    Account(std::string accountName, int initialBalance)
        : name{accountName} {   //member initializer

        //validate that the initial value is greater than 0
        if (initialBalance > 0){
            balance = initialBalance;   //assign it to data member balance
        }
    }
    //member function that sets the account name in the object
    void setName(std::string accountName) {
        name = accountName;     //store the account name
    }

    //member function that retrieves the account name
    std::string getName() const {
        return name;    //return name's value to this function
    }

    //function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount){
        if (depositAmount >0){
            balance = balance + depositAmount;
        }
    }

    //function returns the account balance
    int getBalance() const{
        return balance;
    }

private:
    std::string name;   //data member containing account name
    int balance{0};     //data member with default initial value
};  //end class Account