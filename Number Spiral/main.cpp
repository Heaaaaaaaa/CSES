//
//  main.cpp
//  CSES_6
//
//  Created by Hea Seng Jun on 01/09/2022.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    typedef unsigned long long ull;
    ull n,x,y,z;
    vector <ull> v;
    cin >> n;
    
    for(ull i=0;i<n;i++)
    {
        cin >> x >> y;
        if(x>=y)
        {
            if(x%2==0)
            {
                z=(x*x)-y+1;
                v.push_back(z);
            }
            else
            {
                z=((x-1)*(x-1))+y;
                v.push_back(z);
            }
        }
        else
        {
            if(y%2!=0)
            {
                z=(y*y)-x+1;
                v.push_back(z);
            }
            else
            {
                z=((y-1)*(y-1))+x;
                v.push_back(z);
            }
        }
    }
    for(ull k=0;k<v.size();k++)
    {
        cout << v[k] << endl;
    }
    
    return 0;
}
