

using namespace std;

class debit_credit : public person{


    public:
        void login();



    private:
        string usrname , pswrd;


    protected:
        int check(int x , int y , int z);
        int choosen;
        int opt;
};