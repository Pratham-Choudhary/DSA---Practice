#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a=0,b=0,c=0,d,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d;    
        if(d>0)
            a++;
        else if(d<0)
            b++;
        else
            c++;
    }
    printf("%.3f\n",(float)a/n);
    printf("%.3f\n",(float)b/n);
    printf("%.3f",(float)c/n);   
    return 0;
}
