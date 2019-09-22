
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


class person {

    public:
   
        person();

        void creater();

        void moneysaver();


        int x=5;

    protected:

        void show_acc_info(const unsigned long int);

        unsigned long  int acc_no=0 , crn=0 ;

        string firstname , middlename , lastname , address , email_id , pan_no , fname , password ;
       
        unsigned long  int mobile_no=0 ;

        


    private:

};