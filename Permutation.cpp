//
//  main.cpp
//  CSES_5
//
//  Created by Hea on 10/08/2022.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    unsigned long long n;
    cin >> n;
    vector <unsigned long long> v;
    v.push_back(n-1);
    if(n==1)
    {
        cout << 1;
    }
    else if(n>=4)
    {
        if(v[v.size()-1]%2==0)
        {
            while(v[v.size()-1] != 2)
            {
                v.push_back((v[v.size()-1])-2);
            }
            v.push_back(n);
            while(v[v.size()-1] != 1)
            {
                v.push_back((v[v.size()-1])-2);
            }
        }
        else
        {
            while(v[v.size()-1] != 1)
            {
                v.push_back((v[v.size()-1])-2);
            }
            v.push_back(n);
            while(v[v.size()-1] != 2)
            {
                v.push_back((v[v.size()-1])-2);
            }
        }
        for(unsigned long long k=0;k<v.size();k++)
        {
            cout << v[k] << ' ';
        }
        
    }
    else
    {
        cout << "NO SOLUTION";
    }
    return 0;
}
