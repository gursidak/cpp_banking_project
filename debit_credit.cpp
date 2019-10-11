#include <iostream>
#include "person.hpp"
#include <string>
#include <fstream>
#include "debit_credit.hpp"
#include <iomanip>
#include <vector>
#include <cstdio>
#include <bits/stdc++.h> 


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
	bool d=0;
	int opt;

    ifstream fin("acc_info.csv" , ios::in);
    string CRN;
    int count=0;


	std::cout<< "ENTER YOUR CRN "<<endl;
    getline(cin, usrname);
    cin.ignore();


    std::cout<< "ENTER YOUR PASSWORD "<<endl;
    getline(cin, pswrd);
    

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
				//count++;
				
				
		}

		if(usrname==row[6])
		{
					if(pswrd==row[7])
						d=1;
                     //   cout<<"before"<<endl;
						break;
		
		}

                               // cout<<"after"<<endl;


		
	
	}
		if(d==1)
			cout<<"login successful"<<endl;
		else
        	cout<<"sorry, wrong username or password"<<endl;
		
}

void debit_credit::credit_debit(){
        
        fstream fin;
        fin.open("acc_info.csv" , ios::in);
        vector <string> row;
        string line , word , temp;
        double amt = 0.0;

    	cout<<"PRESS 1 FOR CREDIT "<<endl<<"PRESS 2 FOR DEBIT "<<endl;
		cin>>opt;
		opt = check(1,2,opt);


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
				//count++;
		}

        if(usrname==row[6]){
            switch (opt)
            {
            case 1:
                cout<<"ENTER THE AMOUNT YOU WANT TO CREDIT : " ;
                cin>>add;
                amt = (stoi(row[8] ) + add);
                row[8] = to_string(amt);
                break;

            case 2:
                cout<<"ENTER THE AMOUNT YOU WANT TO CREDIT : " ;
                cin>>add;
                amt = (stoi(row[8] ) - add);
                row[8] = to_string(amt);
                break;

            default:
                break;
            }
            

            cout<<"amount:: "<<row[8]<<endl;
        } 


    }
}

