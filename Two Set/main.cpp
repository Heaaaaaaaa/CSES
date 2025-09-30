//
//  main.cpp
//  CSES_8
//
//  Created by Hea Seng Jun on 13/09/2022.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;
typedef long long ll;

void print(vector <ll> v)
{
    for(ll i=0;i<v.size();i++)
    {
        cout << v[i] << ' ';
    }
}

int main(int argc, const char * argv[]) {
    ll test,test_1,fn,cn,fn_1,cn_1,res_1,res_2;
    ll mid,ceil_mid,res_3,mid_1,ceil_mid1;
    double n,sum,test_2,test_3;
    vector <ll> v;
    vector <ll> t;
    cin >> n;
    sum=(n/2.0)*(1+n);
    test=sum;
    test_1=n;
    if(sum/2.0==test/2)
    {
        if(test_1%2!=0)
        {
            test_2=floor(n/2);
            test_3=ceil(n/2);
            fn=test_2;
            cn=test_3;
            fn_1=fn-1;
            cn_1=cn+1;
            res_1=cn;
            res_2=fn;
            t.push_back(test_1);
            for(ll k=0;k<res_1/2;k++)
            {
                v.push_back(fn);
                v.push_back(cn);
                fn -= 2;
                cn += 2;
            }
            for(ll j=0;j<(res_2-1)/2;j++)
            {
                t.push_back(fn_1);
                t.push_back(cn_1);
                fn_1 -= 2;
                cn_1 += 2;
            }
            cout << "YES" << endl;
            cout << v.size() << endl;
            print(v);
            cout << endl << t.size() << endl;
            print(t);
        }
        else
        {
            mid=test_1/2;
            ceil_mid=mid+1;
            mid_1=mid-1;
            ceil_mid1=ceil_mid+1;
            res_3=mid;
            for(ll s=0;s<res_3/2;s++)
            {
                v.push_back(mid);
                v.push_back(ceil_mid);
                mid -= 2;
                ceil_mid +=2;
            }
            for(ll e=0;e<res_3/2;e++)
            {
                t.push_back(mid_1);
                t.push_back(ceil_mid1);
                mid_1 -= 2;
                ceil_mid1 +=2;
            }
            cout << "YES" << endl;
            cout << v.size() << endl;
            print(v);
            cout << endl << t.size() << endl;
            print(t);
        }
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}

// 1 2 3 4 5 6 7
// 3 4 1 6
// 2 5 7
