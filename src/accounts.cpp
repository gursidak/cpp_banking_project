#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<string>

#include "person.hpp"
#include "accounts.hpp"
#include "deposits.hpp"
#include "insurance.hpp"
#include "investments.hpp"
#include "loans.hpp"
#include "card.hpp"

using namespace std;

void accounts::ac(){
    int ch;
    cout<< endl << endl << "Your financial goals are what drive you forward, and we understand how important it is for you to achieve them. That’s why, our savings and current accounts are specifically designed keeping your unique needs in mind." << endl << endl;



    cout << "1.Savings Account" << endl <<
            "2.Current Account" << endl << "(1 or 2)? Press -1 to exit, 0 for main menu" << endl;

    cin >> ch;

    switch(ch){
        case -1:
            break;

        case 0:
            break;

        case 1: savingsAccount();
            break;

        case 2: currentAccount();
            break;

        default: 
            break;
    }
        
}

void accounts::savingsAccount(){

}

void accounts:: currentAccount(){
    
}