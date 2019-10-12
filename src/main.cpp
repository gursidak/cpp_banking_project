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

void welcome();
void after_user_choice(int);
void accounts();
void deposit();
void cards();
void loans();
void insurance();
void investments();

int main()
{  
   cout << "Welcome to bank_name " << endl;
   cout << "tag_line " << endl;
   cout << "How can we help you?: "<< endl;
   welcome();
   return 0;
}

void welcome(){
   int ch = 0;
      cout << "1.Accounts\n"
           << "2.Deposit\n"
           << "3.Cards\n"
           << "4.Loans\n"
           << "5.Insurance\n"
           << "6.Investments\n";
      
      cout<< "Enter your choice( 0 to quit): ";
      cin >> ch;

   after_user_choice(ch);
}


void after_user_choice(int c){
   
   switch (c)
   {
   case 0: break;
      

   case 1: accounts() ;
      break;
   
   case 2: deposit() ;
      
      break;
   
   case 3: cards();
      break;

   case 4: loans();
      break;

   case 5: insurance();
      break;

   case 6: investments();
      break;      

   default: cout<< "\n\nWrong choice entered!!! Enter again: \n\n";
            welcome();
      break;
   }

}

void accounts(){
   person p;
}

void deposit(){
   card dobj;
   dobj.login();
}

void cards(){

   card dc;
   dc.login();
   
}

void loans(){
   loan l;

}

void insurance(){
   insurance_ ins;

}

void investments(){
   investment inv;

}