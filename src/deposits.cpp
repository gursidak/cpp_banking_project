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


 deposits::deposits(){

        cout<<"\n-------WELCOME TO DEPOSIT SECTION---------\n";

        cout<<"\nPRESS 1 FOR FIXED-DEPOSIT(FD)\nPRESS 2 FOR RECURRING-DEPOSIT\n";
        cin>>choose;
        
   repeat:
        switch (choose)
        {
        case 1:

        cout<< "Take control of your savings by investing in Fixed Deposit. Enjoy Fixed Deposit interest rates as high as 6.60%* with us. Happy Investing!" <<endl;
        cout<<"What are the benefits of Fixed Deposits?\n"
            <<"Fixed Deposit possesses a number of advantages over any other investment schemes that tags it as one of the safest investment options to opt for. When you avail a Fixed Deposit, you actually bag a number of perks such as:"<<endl;
        
         cout<<"\n\npress 1 for applying now !!1\n\n"<<endl;

        int z;
        cin>>z;


            
            break;
        case 2:
              cout<<"A small investment every month can get you one step closer to your dreams. "<<endl;
            break;      
        

       
       
        default:

            choose = person::check(1,2,choose);
            goto repeat; //control shifts start of switch;
            }
    
                         }//end_of_ctor;

   






