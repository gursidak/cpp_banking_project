#include <iostream>
#include"/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/person.hpp"
#include<string>
#include<fstream>
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/debit_credit.hpp"
#include<iomanip>
#include<vector>
#include<cstdio>


using namespace std;


//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************



void person::creater(){


      ofstream xl("/Desktop/cpp_banking_proj_git/cpp_banking_project/acc_info.csv" , ios_base::app );

     cout<<"ENTER FIRST NAME\n";
     getline(cin,firstname);
      cin.ignore();
     //  getline(cin.ignore(),firstname); 
     cout<<endl; 
    // gets(firstname));    

     cout<<endl;


     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);
     cout<<endl;     
     cin.ignore();          // scanf("%s",middlename);    
  
     


     cout<<"ENTER LAST NAME "<<endl;
     getline(cin,lastname);  
     cin.ignore();             //scanf(" %s",lastname);    
     cout<<endl;


     cout<<"ENTER FATHER'S NAME "<<endl;
     getline(cin,fname);          //scanf(" %s",fname);    
     cin.ignore();
     cout<<endl;

     
cout<<"ENTER YOUR EMAIL_ID\n";
     getline(cin,email_id);
     cin.ignore();
     cout<<endl;

     cout<<"ENTER PAN CARD NUMBER"<<endl;
     getline(cin,pan_no);
     cin.ignore();               //scanf(" %s",pan_no);    
     cout<<endl;

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS"<<endl;
     getline(cin,address);                    //scanf(" %s",address);    
     cin.ignore();
     cout<<endl;

     cout<<"ENTER YOUR MOBILE NUMBER "<<endl;
     cin>> mobile_no;
     cin.ignore();
     cout<<endl;
      cout<<endl;

    acc_no = 910000000000 + mobile_no; //generating acc no;
    crn = (acc_no/5);                  //generating crn;

     cout<<"YOUR ACCOUNT CREATED SUCCESSFULLY "<<endl<<"YOUR ACC_NO IS : "<<acc_no<<endl;

     cout<<"YOUR CRN IS : "<<crn<<endl;

     string repswrd;
     bool z;
    cin.ignore();
    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC):";
     getline(cin,password);    

     cin.ignore();
     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);


     if(password == repswrd){
               
           cout<<"Passwords matched succesfully"<<endl<<endl;
           z=0;
           }
     else{
          
          cout<<"passwords didn't match : ENTER PASSWORD AGAIN"<<endl;
          z=1;
               }

         }while(z);

     //  cout<<"address " <<address<<endl;
     //  cout<<"pan: "<<pan_no<<endl;
     //  cout<<"email "<<email_id<<endl;
     //  cout<<"first "<<firstname<<endl;
     //  cout<< "last "<<lastname<<endl;
     //  cout<<"middle"<<middlename<<endl;
     //  cout<<"fname "<<fname<<endl;
     //  cout<<"password "<<password<<endl; 
     cout<<"\naccount created successfully\n";


    
    

     xl<<crn<<","
     << password<<","
     << acc_no<< ","
     << firstname + " " + middlename + " " + lastname<< ","
     << mobile_no<< ","
     <<email_id<<","
     << address<< ","
     <<pan_no<<","
     <<balance<<endl;
     xl.close();


 
     cout<<endl;
     cout<<endl;    

     }



               

            




