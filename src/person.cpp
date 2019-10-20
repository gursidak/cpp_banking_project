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
/* ______________________________________________________ create_acc() ______________________________________________________________________________________________________________*/
void person::create_acc(){

     ofstream xl("acc_info.csv" , ios::app );
     cout<<"ENTER FIRST NAME\n";

     getline(cin,firstname);
     cin.ignore();

     cout<<endl; 
     cout<<endl;


     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);

     cout<<endl;     
     cin.ignore();          // scanf("%s",middlename);    
  
     


     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,lastname);  

     cin.ignore();             //scanf(" %s",lastname);    
     cout<<endl;


     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,fname);  

     cin.ignore();
     cout<<endl;

     
     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,email_id);

     cin.ignore();
     cout<<endl;

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,pan_no);

     cin.ignore();               //scanf(" %s",pan_no);    
     cout<<endl;

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,address);  
                       //scanf(" %s",address);    
     cin.ignore();
     cout<<endl;

     cout<<"ENTER YOUR MOBILE NUMBER: "<<endl;
     getline(cin, mobile_no);

     cin.ignore();
     cout<<endl;
     cout<<endl;

    acc_no = to_string(910000000000 + stoi(mobile_no)); //generating acc no;

    crn = to_string(stoi(acc_no)/5); //generating crn;

     string repswrd;
     bool z;
    cin.ignore();

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,password);    

     cin.ignore();
     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);


     if(password.compare(repswrd)){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           z = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          z = false;
               }

         }while(!z);

      cout<<"\nAccount created successfully\n";

       cout<<"address " <<address<<endl;
       cout<<"pan: "<<pan_no<<endl;
       cout<<"email: "<<email_id<<endl;
       cout<<"First name: "<<firstname<<endl;
       cout<<"Last Name: "<<lastname<<endl;
       cout<<"Middle Name: "<<middlename<<endl;
       cout<<"Father's Name: "<<fname<<endl<< endl; 

      cout << "Customer Satisfaction is our main"
           << "priority, so we have deposited a "
           << "sum of Rs. 100 into your bank a/c"
           << endl;
    
     xl<<crn<<","
      << acc_no<< ","
     << firstname << "," 
     << middlename << "+" 
     << lastname<< ","
     << mobile_no<< ","
     <<email_id<<","
     << address<< ","
     <<pan_no<<","
     <<balance
     << password<<"," << endl;

     xl.close();

     cout<<endl;  

     }
/*//////////////////////////////////////////////////////////  LOGIN()  ////////////////////////////////////////////////////////////////////////////////*/


void person::login()
{
	bool d=0;
	//int opt;

    ifstream fin("acc_info.csv" , ios::in);
   // string CRN;
  //  int count=0;


      std::cout<< "ENTER YOUR CRN "<<endl;
      cin>>usr;
      cin.ignore();


      std::cout<< "ENTER YOUR PASSWORD "<<endl;
      getline(cin, pswd);
      cin.ignore();
    

      vector<string> row;
      string line, word, temp;


      while (fin >> temp)
      {
        //read entire row nd store it in string var;
            getline(fin, line);

        //cout<<"line is containing : "<<line<<endl;
        //used for breaking words;

             stringstream s(line);
       // cout<<"printing words\n";

	   row.clear();
        
        while (getline(s, word, ','))	
		{
          	  row.reserve(8);
          		  //add all the column data of row to a vector;
         	  row.push_back(word);
				
				
		}

          

       
        //    cout<<"usrname : "<<usr<<endl;
       //     cout<<"pass : "<<pswd<<endl;


		if(usr==row[6]){
					if(pswd==row[7])
					{      
                                    d=1;
                                     break;
                               }


                         }
    
		
	
	

      } 

                  if(d==1){
			      cout<<"login successful"<<endl;
                        }

                   else{
        	            cout<<"sorry, wrong username or password"<<endl;
                        login();
                        }

}

void person::welcome(){
   int ch = 0;
      cout << "1.Accounts\n"
           << "2.Deposit\n"
           << "3.Cards\n"
           << "4.Loans\n"
           << "5.Insurance\n"
           << "6.Investments\n";
      
      cout<< "Enter your choice( 0 to quit): ";
      cin >> ch;

   after_user_choice(ch);      
}

void person:: after_user_choice(int c){
   switch (c){
   case 0: break;
      
   case 1: accounts() ;
      break;
   
   case 2: deposit() ;
      
      break;
   
   case 3: cards();
      break;

   case 4: loans();
      break;

   case 5: insurance();
      break;

   case 6: investments();
      break;      

   default: cout<< "\n\nWrong choice entered!!! Enter again: \n\n";
            welcome();
      break;
   }
}

void person:: accounts(){
     
}

void person:: deposit(){

}

void person:: cards(){

}

void person:: loans(){

}

void person:: insurance(){

}

void person:: investments(){

}
