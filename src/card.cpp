#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<string>

<<<<<<< HEAD:src/debit_credit.cpp
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/person.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/accounts.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/deposits.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/insurance.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/investments.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/loans.hpp"
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/debit_credit.hpp"
=======
#include "person.hpp"
#include "accounts.hpp"
#include "deposits.hpp"
#include "insurance.hpp"
#include "investments.hpp"
#include "loans.hpp"
#include "card.hpp"
>>>>>>> 198550e49aa88ba8ae166b77add96552f763589f:src/card.cpp

using namespace std;


<<<<<<< HEAD:src/debit_credit.cpp
    

    int debit_credit::check(int x , int y , int z){
            if(z<x || z>y)
=======
int card:: check(int x, int y, int z){
     if(z<x || z>y)
>>>>>>> 198550e49aa88ba8ae166b77add96552f763589f:src/card.cpp
            {	
                cout<<"eror choose an appropriate option"<<endl;
                cin>>z;
                check(x,y,z);
            }
            else
            {
                return z;
            }
            

        }

