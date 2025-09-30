//
//  main.cpp
//  TwoKnights
//
//  Created by Hea Seng Jun on 20/09/2022.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    typedef long long ll;
    ll n,valid,invalid,real;
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        valid=(pow(i,2)*(pow(i,2)-1))/2;
        invalid=2*(2*(i-1)*(i-2));
        real=valid-invalid;
        cout << real << endl;
    }
    return 0;
}
