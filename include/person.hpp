using namespace std;


class person {

    public:
        void welcome();
        void after_user_choice(int);
        void create_acc();
        void login();
        void accounts();
        void deposit();
        void cards();
        void loans();
        void insurance();
        void investments();
        int check(int, int, int);
        
        ~person();
        
        
        int x=5;

    protected:
        void show_acc_info(const unsigned long int);


        string firstname , middlename , lastname , address  , pan_no , fname ;
        string password, mobile_no ;
        string acc_no, crn, balance= "100";
        string email_id;
         vector<string> row;
        string line, word, temp;
        
    private:
        string usr ; 
        string pswd;


};