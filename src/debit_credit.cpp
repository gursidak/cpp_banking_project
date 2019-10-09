#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<string>

#include"person.hpp"
#include "accounts.hpp"
#include "deposits.hpp"
#include "insurance.hpp"
#include "investments.hpp"
#include "loans.hpp"
#include "debit_credit.hpp"

using namespace std;


    int debit_credit::check(int x , int y , int z){
            if(z<x || z>y)
            {	
                cout<<"eror choose an appropriate option"<<endl;
                cin>>z;
                check(x,y,z);
            }
            else
            {
                return z;
            }
            

        }



void debit_credit::login()
{
	bool d=false;
	int opt;

    ifstream fin("acc_info.csv");
    string CRN;


	std::cout<< "ENTER YOUR CRN "<<endl;
    getline(cin, usrname);
    cin.ignore();


    std::cout<< "ENTER YOUR PASSWORD "<<endl;
    getline(cin, pswrd);
    cin.ignore();
    

    vector<string> row;
    string line, word, temp;


    while (fin >> temp)
    {
        //read entire row nd store it in string var;
        getline(fin, line);

        //used for breaking words;
        stringstream s(line);

	   row.clear();
        
        while (getline(s, word, ','))	
		{
               // cout << "i m a word : "<<word<<endl;
          	  row.reserve(8);
          		  //add all the column data of row to a vector;
         	   row.push_back(word);				
				
		}

		if(usrname==row[6])
		{
					if(pswrd==row[7])
						d=1;
						//break;
		
		}

		
	
	}
		cout<<row[6]<<endl<<row[7]<<endl;
		if(d==1)
			cout<<"login successful"<<endl;
		else
		{
				cout<<"sorry, wrong username or password"<<endl;
		}

	//	cout<<"PRESS 1 FOR CREDIT "<<endl<<"PRESS 2 FOR DEBIT "<<endl;
	//	cin>>opt;
		//opt = check(1,2,opt);

    //    // switch (opt)
    //     {
    //     case 1:
    //         cout<<row[8]<<endl;
    //         break;
        
    //     default:
    //         break;
    //     }

		

}
