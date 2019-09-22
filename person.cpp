#include "person.hpp"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;



     person::person(){  }


     void person::creater(){


          ofstream xl("acc_info.cpp" , ios_base::app );


     cout<<"ENTER FIRST NAME "<<endl;
      getline(cin.ignore(),firstname); 
      xl<<firstname;
      cout<<endl;


     cout<<"ENTER MIDDLE NAME "<<endl;
        getline(cin.ignore(),middlename);
        cout<<endl;         


     cout<<"ENTER LAST NAME "<<endl;
      getline(cin.ignore(),lastname); 
      cout<<endl;

     cout<<"ENTER FATHER'S NAME "<<endl;
      getline(cin.ignore(),fname);
      cout<<endl;

     

     cout<<"ENTER EMAIL-ID "<<endl;
      getline(cin.ignore(),email_id);
      cout<<endl;

     cout<<"ENTER PAN CARD NUMBER"<<endl;
      getline(cin,pan_no);
      cout<<endl;

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS"<<endl;
      getline(cin,address);
      cout<<endl;

      cout<<"ENTER YOUR MOBILE NUMBER "<<endl;
     cin>> mobile_no;
     cout<<endl;
      cout<<endl;

    acc_no = 910000000000 + mobile_no;
    crn = (acc_no/5);

     cout<<"YOUR ACCOUNT CREATED SUCCESSFULLY "<<endl<<"YOUR ACC_NO IS : "<<acc_no<<endl;

     cout<<"YOUR CRN IS : "<< crn<<endl;

     string repswrd;
     bool z;
    
    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin.ignore(), password);
     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin.ignore(), repswrd);

     z = (password == repswrd);
     if(!z){
          cout<<"passwords didn't match : ENTER PASSWORD AGAIN"<<endl;
               }
     else{
          cout<< "Passwords matched succesfully."<<endl<< endl;
          }

         }while(!z);
    
    

     xl<< firstname+middlename+lastname<< ","<< acc_no<<","<< crn<<","<< password<< ","<< mobile_no<< ","<< email_id<< ","<< address<< endl;
     xl.close();



     cout<<endl;
     cout<<endl;    

     //xl<<firstname+middlename+lastname , crn , password
}
 
 //    xl1<<"NAME , ACC_NO , CRN , PASSWORD , MOBILE_NO , EMAIL_ID , RESIDENTIAL_ADDRESS "<<endl;




void person::moneysaver(){

            cout<<"ENTER YOUR ACC_NO"<<endl;

            

        }



