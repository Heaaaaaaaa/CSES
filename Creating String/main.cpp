//
//  main.cpp
//  CreatingStrings
//
//  Created by Hea Seng Jun on 23/09/2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string n;
    vector <string> v;
    cin >> n;
    sort(n.begin(),n.end());
    do
    {
        v.push_back(n);
    }while(next_permutation(n.begin(),n.end()));
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
