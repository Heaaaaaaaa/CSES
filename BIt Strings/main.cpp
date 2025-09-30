//
//  main.cpp
//  BitStrings
//
//  Created by Hea Seng Jun on 20/09/2022.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll n,ans=1;
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        ans=(ans%1000000007)*2;
    }
    ans=ans%1000000007;
    cout << ans;
}
