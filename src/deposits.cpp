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

deposits::deposits()
{  
    cout << endl << "Save for the future, the way you want to, with our range of Deposits" << endl;
}

deposits::~deposits()
{
}

void deposits::depositMenu(){
    cout << "";
}

