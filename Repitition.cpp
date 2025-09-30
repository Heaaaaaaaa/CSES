//
//  main.cpp
//  CSES_3
//
//  Created by Hea on 07/08/2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int counter=1;
    vector <int> v;
    cin >> s;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            counter+=1;
            v.push_back(counter);
        }
        else
        {
            counter=1;
            v.push_back(counter);
        }
    }
    /*for(int k=0;k<v.size();k++)
    {
        cout << v[k] << endl;
    }*/
    sort(v.begin(), v.end());
    cout << v[v.size()-1];
    
    return 0;
}

