#include <iostream>
#include"person.hpp"
#include<string>
#include<fstream>
#include "debit_credit.hpp"
#include<iomanip>
#include<vector>
#include<cstdio>

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

   return 0;
}

void welcome(){
   int ch= 1;
   cout << "Welcome to bank_name " << endl;
   cout << " tag_line " << endl;
   cout << "How we can help you?: "<< endl;

   do{
      cout << "1.Accounts\n "
           << "2.Deposit\n"
           << "3.Cards\n"
           << "4.Loans\n"
           << "5.Insurance\n"
           << "6.Investments\n";
      
      cout<< "Enter your choice( 0 to quit): ";
      cin >> ch;

   }while(ch);

   after_user_choice(ch);
}

void after_user_choice(){
   

}