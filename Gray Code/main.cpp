//

//  main.cpp

//  Gray_Code

//

//  Created by Hea Seng Jun on 02/10/2022.

//

#include <iostream>

#include <vector>

using namespace std;

void gray(int i)

{

    vector <string> v;

    v={"0","1"};

    for(int n=0;n<i-1;n++)

    {

        for(long long i=v.size()-1;i>=0;i--)

        {

            v.push_back(v[i]);

        }

        for(long long i=0;i<(v.size()/2);i++)

        {

            v[i]="0"+v[i];

        }

        for(long long i=(v.size()/2);i<v.size();i++)

        {

            v[i]="1"+v[i];

        }

    }

    for(auto i:v)

    {

        cout << i << endl;

    }

}

int main(int argc, const char * argv[]) {

    int i;

    cin >> i;

    gray(i);

    

    return 0;

}

// {0,1}

// {1,0}

// {00,01}

// {11,10}

// 00 01 11 10 10 11 01 00

// 000 001 011 010 110 111 101 100

