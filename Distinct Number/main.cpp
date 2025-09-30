#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> set;
    int a;
    cin>>a;
    //cout<<a;
    int b;
    for (int i=0; i<a;i++)
    {
        cin>>b;
        set.insert(b);
    }
    
    cout<<set.size();
    
    
    
}
