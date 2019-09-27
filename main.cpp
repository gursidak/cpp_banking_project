#include <iostream>
#include "person.hpp"
#include<string>
#include<fstream>


using namespace std;

int main()
 {
    ofstream xl1;
    xl1.open("acc_info.csv");
    xl1<<"NAME , ACC_NO , CRN , PASSWORD , MOBILE_NO , EMAIL_ID , RESIDENTIAL_ADDRESS "<<endl;
    xl1.close();

    person obj;

    obj.creater();

}