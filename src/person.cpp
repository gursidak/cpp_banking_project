#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<string>

#include"person.hpp"
#include "accounts.hpp"
#include "deposits.hpp"
#include "insurance.hpp"
#include "investments.hpp"
#include "loans.hpp"
#include "debit_credit.hpp"

using namespace std;

void person::create_acc(){

     ofstream xl("acc_info.csv" , ios::app );
     cout<<"ENTER FIRST NAME\n";

     getline(cin,firstname);
     cin.ignore();

     cout<<endl; 
     cout<<endl;


     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);

     cout<<endl;     
     cin.ignore();          // scanf("%s",middlename);    
  
     


     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,lastname);  

     cin.ignore();             //scanf(" %s",lastname);    
     cout<<endl;


     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,fname);  

     cin.ignore();
     cout<<endl;

     
     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,email_id);

     cin.ignore();
     cout<<endl;

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,pan_no);

     cin.ignore();               //scanf(" %s",pan_no);    
     cout<<endl;

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,address);  
                       //scanf(" %s",address);    
     cin.ignore();
     cout<<endl;

     cout<<"ENTER YOUR MOBILE NUMBER: "<<endl;
     getline(cin, mobile_no);

     cin.ignore();
     cout<<endl;
     cout<<endl;

    acc_no = to_string(910000000000 + stoi(mobile_no)); //generating acc no;

    crn = to_string(stoi(acc_no)/5); //generating crn;

     string repswrd;
     bool z;
    cin.ignore();

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,password);    

     cin.ignore();
     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);


     if(password.compare(repswrd)){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           z = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          z = false;
               }

         }while(!z);

      cout<<"\naccount created successfully\n";

       cout<<"address " <<address<<endl;
       cout<<"pan: "<<pan_no<<endl;
       cout<<"email: "<<email_id<<endl;
       cout<<"First name: "<<firstname<<endl;
       cout<<"Last Name: "<<lastname<<endl;
       cout<<"Middle Name: "<<middlename<<endl;
       cout<<"Father's Name: "<<fname<<endl<< endl; 

      cout << "Customer Satisfaction is our main"
           << "priority, so we have deposited a "
           << "sum of Rs. 100 into your bank a/c"
           << endl;
    
     xl<<crn<<","
      << acc_no<< ","
     << firstname << "," 
     << middlename << "+" 
     << lastname<< ","
     << mobile_no<< ","
     <<email_id<<","
     << address<< ","
     <<pan_no<<","
     <<balance
     << password<<"," << endl;

     xl.close();

     cout<<endl;  

     }



               

            



