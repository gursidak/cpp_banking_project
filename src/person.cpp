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

void person::create_acc(){

     ofstream xl("acc_info.csv" , ios::app );
         cout<<"ENTER FIRST NAME\n";
     getline(cin,firstname);

     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);

     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,lastname);  

     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,fname);  

     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,email_id);

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,pan_no);

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,address);  
                     
     cout<<"ENTER YOUR MOBILE NUMBER: "<<endl;
     getline(cin, mobile_no);

    acc_no = to_string(910000000000 + stol(mobile_no, nullptr, 10)); //generating acc no;

    crn = to_string(int(stol(acc_no)/100000)); //generating crn;
     string repswrd;
     bool z;
    cin.ignore();

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,password);    

     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);

     if(!(password.compare(repswrd))){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           z = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          z = false;
               }

         }while(!z);

      cout<<"\n\nAccount created successfully\n\n";

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
           << endl << endl;
    
     xl<<crn<<","
      << acc_no<< ","
     << firstname << "," 
     << middlename << "," 
     << lastname<< ","
     << mobile_no<< ","
     <<email_id<<","
     << address<< ","
     <<pan_no<<","
     <<balance << ","
     << password<<"," << endl;

     xl.close();

     cout<<endl;  

     }

void person::login()
{
	bool d=0;
    ifstream fin("acc_info.csv" , ios::in);

      cout<<endl;
      std::cout<< "ENTER YOUR CRN ";
      getline(cin, usr);
      
      std::cout<< "ENTER YOUR PASSWORD ";
      getline(cin, pswd);
   
      while (fin >> temp){
            getline(fin, line);

             stringstream s(line);

	   row.clear();
        
          while (getline(s, word, ','))	{
          	  row.reserve(8);
          		  //add all the column data of row to a vector;
         	  row.push_back(word);				
		}

		      if(usr==row[6]){
					if(pswd==row[7])
					{      
                                    d=1;
                                     break;
                               }


                         }
        } 

                  if(d==1){
			      cout<<"login successful\n"<<endl;
                        }

                   else{
        	            cout<<"sorry, wrong username or password\n"<<endl;
                        login();
                        }
}

void person::welcome(){
   //MAIN MENU
   int ch = 0;
   do{
         cout<<endl; 
      
         cout<<"\t\t\t🌸  𝙒 𝙀 𝙇 𝘾 𝙊 𝙈 𝙀   𝙏 𝙊  🅖 🅤 🅡 🅤  🅝 🅐 🅝 🅐 🅚  🅑 🅐 🅝 🅚   𝙊 𝙁  𝙄 𝙉 𝘿 𝙄 𝘼  🌸\n";
         cout<<"\t\t\t≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n\n\n\n";

         cout << "How can we help you?: "<< endl;
         cout << "1.Accounts\n"
            << "2.Deposit\n"
            << "3.Cards\n"
            << "4.Loans\n"
            << "5.Insurance\n"
            << "6.Investments\n"
            << "7.Exit\n";
            
            cout<<"≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n";
            cout<< "Enter your choice( 0 to quit): ";
            cin >> ch;
            cin.ignore();
         
            if(ch > 7 || ch < 0)
               cout << "\nEntered a wrong choice.. Enter again..\n";
            else
               after_user_choice(ch);  
   }while(ch!=7);   
}

void person:: after_user_choice(int c){
   switch (c){
   case 7: cout << "\nHope to see you soon again :)\n"; 
           break;
      
   case 1: accounts() ;
      break;
   
   case 2: deposit();
      break;
   
   case 3: cards();
      break;

   case 4: loans();
      break;

   case 5: insurance();
      break;

   case 6: investments();
      break;      

   default: cout<< "\n\nWrong Choice Entered!!! Enter gain: \n\n";
            welcome();
      break;
   }
} 

void person:: accounts(){
   class accounts a;
   a.ac();
}

void person:: deposit(){
          deposits dobj;
}

void person:: cards(){

}

void person:: loans(){
   class loans lobj;

}

void person:: insurance(){


}

void person:: investments(){

}

person ::~person(){

}

int person::check(int upperLim, int lowerLim, int choice){
     if(choice<lowerLim || choice>upperLim)
            {   
                cout<<"eror choose an appropriate option"<<endl;
                cin>>choice;
                check(upperLim, lowerLim,choice);
            }
     else
            {
                return choice;
            }
}
