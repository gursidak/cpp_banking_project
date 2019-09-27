#include <iostream>
#include "person.hpp"
#include <string>
#include <fstream>
#include "debit_credit.hpp"
#include <iomanip>
#include <vector>
#include <cstdio>

using namespace std;

void debit_credit::login()
{

    fstream fin("acc_info.csv");
    string CRN;
    //int count=0;

   std::cout<< "ENTER YOUR CRN "<<endl;
    getline(cin, CRN);
    cin.ignore();

    vector<string> row;
    string line, word, temp;

    while (fin >> temp)
    {

        row.clear();
        //read entire row nd store it in string var;
        getline(fin, line);

        //used for breaking words;

        stringstream s(line);

        while (getline(s, word, ','))
        {

            //add all the column data of row t a vector;
            row.push_back(word);
          //  cout << word;  182179751287
        }


      //  if(row[2] == CRN){

           cout<<row[7]<<endl;

            }

       std::cout<<"sorry invalid username or password\n";

    }
    

