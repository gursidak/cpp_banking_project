

using namespace std;

class debit_credit : public person{


    public:
        void login();
        void credit_debit();



    private:
        string usrname , pswrd;


    protected:
        int check(int x , int y , int z);
    
        int choosen;
        int opt;
        double add;
};