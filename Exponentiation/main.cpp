//
//  main.cpp
//  Exponentiation
//
//  Created by Hea Seng Jun on 29/09/2022.
//
 
#include <iostream>
#include <vector>
using namespace std;
#define N 1000000007
typedef unsigned long long ull;

ull exp(ull i,ull k)
{
    if(k==0)
    {
        return 1;
    }
    if(k==1)
    {
        return i%N;
    }
    ull t=exp(i,k/2);
    t=(t*t)%N;
    return(k%2==0)
        ?t
        :(i*t)%N;
    return t;
}

int main(int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<ull>v;
    ull test,base,exponential,i;
    cin >> test;
    while(test--)
    {
        cin >> base >> exponential;
        i=exp(base,exponential);
        v.push_back(i);
    }
    for(auto k:v)
    {
        cout << k << endl;
    }
    return 0;
}
