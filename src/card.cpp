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

card::card(){
    
    login();

    cout<<"WE PROVIDE OUR COSTUMERS SOMETHING EXTRA\n";
    cout<<"PLEASE SELECT THE TYPE OF CARD YOU WANT"<<  endl;

    cout<<"Forex / Prepaid Cards"<<endl
        <<"Credit Card Services"<<endl
        <<"Debit Card Services"<<endl;
    
    



}

            

        

