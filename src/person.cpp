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

void person::create_acc(){

     ofstream xl("acc_info.dat" ,ios:: binary| ios::app );
     cout<<"ENTER FIRST NAME\n";
     getline(cin,firstname);

     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);

     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,lastname);  

     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,fname);  

     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,email_id);

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,pan_no);

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,address);  
                     
     cout<<"ENTER YOUR MOBILE NUMBER: "<<endl;
     getline(cin, mobile_no);

    acc_no = to_string(910000000000 + stol(mobile_no, nullptr, 10)); //generating acc no;

    crn = to_string(int(stol(acc_no)/100000)); //generating crn;

     string repswrd;
     bool z;

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,password);    

     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);

      if(!(password.compare(repswrd))){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           z = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          z = false;
               }

         }while(!z);

      cout<<"\nAccount created successfully\n";

      cout << "Customer Satisfaction is our main"
           << "priority, so we have deposited a "
           << "sum of Rs. 100 into your bank a/c"
           << endl << endl;
    
      xl.write(reinterpret_cast<char*>(this), sizeof(*this));

      xl.close();

     }
/*//////////////////////////////////////////////////////////  LOGIN()  ////////////////////////////////////////////////////////////////////////////////*/


void person::login()
{
	person ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("acc_info.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key..." << endl;
		return;
	}
   string an, pw;
   cout << "Enter account no. : ";
   getline(cin, an);

   cout << "Enter password : ";
   getline(cin, pw);
   cout << endl;

	//cout<<"\n\t\t\tBALANCE DETAILS\n";
    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(person))){
         if(ac.retacno() == an){
            cout << "Login successfull!" << endl;
            ac.show_account();
            flag=true;
         }
	}
    inFile.close();
	if(flag==false)
		cout<<"\n\n\t\t\tAccount number does not exist";
}

void person::show_account(){
   cout<<"address " <<address<<endl;
       cout<<"pan: "<<pan_no<<endl;
       cout<<"email: "<<email_id<<endl;
       cout<<"First name: "<<firstname<<endl;
       cout<<"Last Name: "<<lastname<<endl;
       cout<<"Middle Name: "<<middlename<<endl;
       cout<<"Father's Name: "<<fname<<endl<< endl; 
}

void person::welcome(){
         int ch = 0;

   do{   
      //MAIN MENU
         cout<<endl; 
      
         cout<<"\t\t\t🌸  𝙒 𝙀 𝙇 𝘾 𝙊 𝙈 𝙀   𝙏 𝙊  🅖 🅤 🅡 🅤  🅝 🅐 🅝 🅐 🅚  🅑 🅐 🅝 🅚   𝙊 𝙁  𝙄 𝙉 𝘿 𝙄 𝘼  🌸\n";
         cout<<"\t\t\t≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n\n\n\n";

         cout << "How can we help you?: "<< endl;
         cout << "1.Accounts\n"
            << "2.Deposit\n"
            << "3.Cards\n"
            << "4.Loans\n"
            << "5.Insurance\n"
            << "6.Investments\n"
            << "7.Exit\n";
            
            cout<<"≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n";
            cout<< "Enter your choice: ";
            cin >> ch;
   after_user_choice(ch);     

   }while(ch!=7);

}

void person:: after_user_choice(int c){
   char secondChance = 'y';
   do{
      switch (c){     
         case 1: accounts() ;
            break;
         
         case 2: deposit();
            break;
         
         case 3: cards();
            break;

         case 4: loans();
            break;

         case 5: insurance();
            break;

         case 6: investments();
            break;    

         case 7: cout << "\nHope to see you soon again :)\n";
            break;  

         default: cout<< "\n\nWrong Choice Entered!!! Enter again? (y/n): \n\n";
         cin >> secondChance;
            break;
      }
   }while(secondChance == 'y' || secondChance == 'Y');
} 

void person:: accounts(){
   class accounts a;
   a.ac();
}

void person:: deposit(){
      deposits dobj;
}

void person:: cards(){
   card c;
   c.cardMenu();
}

void person:: loans(){
   class loans lobj;

}

void person:: insurance(){


}

void person:: investments(){

}

person ::~person(){

}

int person::check(int upperLim, int lowerLim, int choice){
     if(choice<lowerLim || choice>upperLim)
            {   
                cout<<"eror choose an appropriate option"<<endl;
                cin>>choice;
                check(upperLim, lowerLim,choice);
            }
     else
            {
                return choice;
            }
}
