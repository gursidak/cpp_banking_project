#include <iostream>
#include"/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/person.hpp"
#include<string>
#include<fstream>
#include "/home/sid/Desktop/cpp_banking_proj_git/cpp_banking_project/include/debit_credit.hpp"
#include<iomanip>
#include<vector>
#include<cstdio>

using namespace std;

int main()
 {
   
    // ofstream xl1;
    // // xl1.open("acc_info.csv");
    // xl1<<"NAME , ACC_NO , CRN , PASSWORD , MOBILE_NO , EMAIL_ID , RESIDENTIAL_ADDRESS "<<endl;
    // xl1.close();

     //person obj;

     //obj.creater();

     debit_credit dcobj;

     dcobj.login();

      dcobj.credit_debit();

    


}