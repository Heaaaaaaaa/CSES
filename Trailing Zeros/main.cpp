//
//  main.cpp
//  CSES_10
//
//  Created by Hea Seng Jun on 25/08/2022.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    /*typedef unsigned long long ull;
    ull n,ans;
    cin >> n;
    ans=n/5;
    while(ans/5 >=1)
    {
        n=ans/5;
    }
    cout << ans;*/
    
    long long n,ans=0;
       cin>>n;
       for (long long i=1;pow(5,i)<=n;i++){
           ans+=n/pow(5,i);
       }
       cout<<ans;
    return 0;
}
