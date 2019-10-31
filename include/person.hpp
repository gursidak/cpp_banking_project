using namespace std;

class person {

    public:
        void create_acc();
        void login();
        
        int x=5;

    protected:
        void show_acc_info(const unsigned long int);


        string firstname , middlename , lastname , address  , pan_no , fname ;
        string password, mobile_no ;
        string acc_no, crn, balance= "100";
        string email_id;
///////////////////////////////////////////////////// FILE HANDELING /////////////////////////////////////////////////////////////////////////////////////////
         vector<string> row;
         string line, word, temp;


       
//////////////////////////////////////////////////////////////////// METHODS //////////////////////////////////////////////////////////////////////////////////
        int check(int upperLim , int lowerLim , int choice);
       // int choosen;
       // int opt;
        
    private:
        string usr ; 
        string pswd;


};