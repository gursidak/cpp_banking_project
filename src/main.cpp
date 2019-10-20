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
   person p;
   p.welcome();
   return 0;
}
