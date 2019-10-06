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

void debit_credit::login()
{

    ifstream fin("acc_info.csv" , ios::in);
    string CRN;
    //int count=0;

    std::cout<< "ENTER YOUR CRN "<<endl;
    getline(cin, CRN);
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
        
        while (getline(s, word, ','))
        {
           cout<<word<<endl;
            //add all the column data of row to a vector;
            row.push_back(word);
          //  cout << word;  182179751287
        }
                 //  cout<<row[7]<<endl;



       // if(row[6] == CRN){

       //for(auto i = row.begin() ; i!= row.end(); i++)
          //  cout<<*i<<endl;
           // }
         //  cout<<row[7]<<endl;

     //  std::cout<<"sorry invalid username or password\n";
       // }
    }
    
}
