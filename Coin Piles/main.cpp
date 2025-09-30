//
//  main.cpp
//  CoinPiles
//
//  Created by Hea Seng Jun on 22/09/2022.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,x,y;
    vector <string> v;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        if(x==0 || y==0)
        {
            if(x==0 && y==0)
            {
                v.push_back("YES");
            }
            else
            {
                v.push_back("NO");
            }

        }
        else if(x>(2*y) || y>(x*2))
        {
            v.push_back("NO");
        }
        else
        {
            if((x+y)%3==0)
            {
                v.push_back("YES");
            }
            else
            {
                v.push_back("NO");
            }
        }
        
    }
    for(int j=0;j<v.size();j++)
    {
        cout << v[j] << endl;
    }
    return 0;
}

// 11 4
// 9 3 7 2 5 0
