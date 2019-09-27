using namespace std;


class person {

    public:
   

        void creater();
        int x=5;

    protected:

        void show_acc_info(const unsigned long int);

        unsigned long  int acc_no=0 , crn=0 ;

        string firstname , middlename , lastname , address  , pan_no , fname ;
        string password ;
       
        unsigned long  int mobile_no=0 ;
        double balance=0.0;

        string email_id;

        


    private:

};