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
    cout<< endl << endl 
        <<  "Your financial goals are what drive you forward, and we understand how important it is for you to achieve them. That’s why, our savings and current accounts are specifically designed keeping your unique needs in mind." << endl << endl;

char opt = 'y';

   do{                
        cout << "1.Savings Account" << endl << "2.Current Account" << endl << "(1 or 2)? Press -1 to exit, 0 for main menu" << endl;

        cin >> ch;

    
        switch(ch){
            case -1: //return true;
                    opt = 'n';
                    break;

            case 0: //::start();
                    opt = 'n';
                    break;

            case 1: savingsAccount();
                    //return false;
                    opt = 'n';
                    break;

            case 2: currentAccount();
                    //return false;
                     opt = 'n';
                    break;

            default: cout << endl<<
                    "Wrong choice entered.. Enter again?? (y/n): ";
                    cin >> opt;
                    cin.ignore();
                    break;
        }
    }while(opt == 'y' || opt == 'Y');

}

void accounts::savingsAccount(){
        int ch;
        char Sch = 'y';
        
        cout << endl << "Welcome to the savings bank section" << endl;
        
        do{
                cout << "1.Open a new savings a/c\n" << "2.Log into your a/c\n" << "Enter a choice: ";
                cin >> ch;
                cin.ignore();
                switch (ch)
                {
                case 1:
                        createSavingsAccount();
                        Sch = 'n';
                        break;
                

                default:
                        cout << "You've entered a wrong choice.. Enter again??(y/ n) :";
                        cin >> Sch;
                        break;
                }
        }while(Sch == 'y' || Sch == 'Y');        

}

void accounts:: currentAccount(){

}

void accounts:: createSavingsAccount(){
        create_acc();
}
