#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
	int n,k,l,j;
	int sum=0;
	l=0;
	cin >> n;
	for(int m=0;m< n;m++)
	{
		l+=m+1;
	}
	//cout << l;
	for(int i=1;i<n;i++)
	{
		cin >> j;
		sum+=j;
		
	}
	//cout << sum;
	k=l-sum;
	cout << k;
 
	
	
}
