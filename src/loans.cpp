#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<string>

#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/person.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/accounts.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/deposits.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/insurance.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/investments.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/loans.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/debit_credit.hpp"

using namespace std;


loans::loans(){

   // login();
    
    double cal;
    double salary;
    cout<<"PLEASE ENTER YOUR SALARY/PROFIT PER ANUM"<<endl;
    cin>>salary;
    
    cal=salary*0.6;

    cout<<"YOU ARE ELIGIBLE FOR THE LOAN OF : ₹"<<cal<<endl;
    cout<<"FOR  FURTHUR PROCEDURE CONSULT TO THE MANAGER OF YOUR NEQAREST BRANCH"<<endl;    


    


}