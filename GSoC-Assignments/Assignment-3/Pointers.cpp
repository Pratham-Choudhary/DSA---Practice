#include<bits/stdc++.h>
using namespace std;

void update(int *a, int *b){
    int x,y;
    x= *a + *b;
    y= *a - *b;
    *a = x;
    *b = abs(y);
}
int main(){
    int a,b;
    int *m = &a, *n = &b;
    cin>>a>>b;
    update(m,n);
    cout<<a<<"\n"<<b;
}
