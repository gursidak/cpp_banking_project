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

void start(){
  //bool first = true;
   cout << "Welcome to bank_name " << endl;
   cout << "tag_line " << endl;
   cout << "How can we help you?: "<< endl;
   person p;
   p.welcome();
   p.~person();
   
}

int main()
{  
   start();
   return 0;
}