//
//  main.cpp
//  CSES_4
//
//  Created by Hea on 09/08/2022.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned long long n,sum=0,x;
    unsigned long long j;
    vector <unsigned long long> v;
    cin >> n;
    //cout << n << endl;
    for(unsigned long long m=0;m<n;m++)
    {
        //cout << m << "k" << endl;
        cin >> j;
        v.push_back(j);
    }
    //cout << v.size() << endl;
    for(unsigned long long k=1;k<v.size();k++)
    {
        //cout << v[k] << ' ' << v[k-1] << "---------" << endl;
        x=0;
        if(v[k]>v[k-1])
        {
            continue;
        }
        else
        {
            //cout << v[k-1] << ' ' << v[k] << endl;
            x=v[k-1]-v[k];
            v[k]+=x;
            //cout << x << endl;
            sum+=x;
        }
    }
    cout << sum;
    return 0;
}
