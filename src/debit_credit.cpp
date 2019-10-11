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
#include "debit_credit.hpp"

using namespace std;


    int debit_credit::check(int x , int y , int z){
            if(z<x || z>y)
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

