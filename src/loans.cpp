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


loans::loans(){

    login();
    
    double cal;
    double salary;
    cout<<"PLEASE ENTER YOUR SALARY/PROFIT PER ANUM"<<endl;
    cin>>salary;
    
    cal=salary/0.6;

    cout<<"YOU ARE ELIGIBLE FOR THE LOAN OF : ₹"<<cal<<endl;
    cout<<"FOR  FURTHUR PROCEDURE CONSULT TO THE MANAGER OF YOUR NEQAREST BRANCH"<<endl;    


    


}