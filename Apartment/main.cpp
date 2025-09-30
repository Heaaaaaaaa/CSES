//
//  main.cpp
//  Apartments
//
//  Created by Hea Seng Jun on 29/09/2022.
//

#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define hea ios_base::sync_with_stdio(false);cin.tie(NULL);

bool range(ll i,ll k,ll o)
{
    return(i<=o+k&&i>=k-o)
        ?true
        :false;
}

int main(int argc, const char * argv[]) {
    hea
    ll app,apa,diff,counter=0;
    vector <ll> v;
    vector <ll> t;
    cin >> app >> apa >> diff;
    for(ll i=0;i<app;i++)
    {
        ll des;
        cin >> des;
        v.push_back(des);
    }
    for(ll i=0;i<apa;i++)
    {
        ll real;
        cin >> real;
        t.push_back(real);
    }
    for(ll i=0;i<v.size();i++)
    {
        for(ll k=0;k<t.size();k++)
        {
            if(range(v[i],t[k],diff)==1)
            {
                //cout << v[i] << ' ' << t[k] << "\n";
                counter+=1;
                v.erase(v.begin()+i);
                t.erase(t.begin()+k);
                i--;
                k--;
            }
        }
    }
    cout << counter;
    
    return 0;
}
