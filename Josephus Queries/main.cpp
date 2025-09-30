#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define wtf ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef unsigned long long ull;
typedef long long ll;

int main() 
{
	ll n,num1,num2,count=0;
	vector <ll> v;
	vector <ll> v1;
	cin >> n;
	for(ll i=0;i<n;i++)
	{
		cin >> num1 >> num2;
		v.clear();
		v1.clear();
		for(ll i=1;i<=num1;i++)
		{
			v.push_back(i);
		}
		while(v.size()!=0)
		{
			count=(count+1)%v.size();
			v1.push_back(v[count]);
			v.erase(v.begin()+count);
		}
		/*for(auto i:v1)
		{
			cout << i << ' ';
		}
		cout << endl;*/
		cout << v1[num2-1] << "\n";
	}
}

// 1 2 3 4 5 6 7   count=1
// 1 3 4 5 6 7	   count=2
// 1 3 5 6 7       count=3
// 1 3 5 7	       count=4
// 3 5 7		       count=5
// 3 7			       count=6
// 7			         count=7

// 2 4 6 1 5 3 7

// 2+2=4

// 1 2
// 1

// 2 1

// 1 2 3 4 5
// 1 3 4 5
// 1 3 5
// 3 5
// 3

// 2 4 1 5 3

// 6/2=3
// 6-2-2-2=0
// 
