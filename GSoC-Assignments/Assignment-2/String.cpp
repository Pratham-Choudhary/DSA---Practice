#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string c,d,e;
    char b,a;
    int l1,l2; 
    cin>>c;
    cin>>d;
    l1=c.size();
    l2=d.size();
    cout<<l2;
    cout<<" "<<l2;
    e=c+d;
    cout<<"\n"<<e;
    
    a=d[0];
    b=c[0];        
    c[0]=a;
    d[0]=b;
    cout<<"\n";
    cout<<c;
    cout<<" "<<d;
    return 0;
}
