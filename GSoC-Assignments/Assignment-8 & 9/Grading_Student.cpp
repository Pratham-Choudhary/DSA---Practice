#include<bits/stdc++.h>
using namespace std;
void Grade(){
    int mark,n;
    cin>>mark;
    for(int i=0; i<mark; i++){
        cin>>n;
        if(n>=36 and n%5>=3){
            while(n%5!=0){
                n++;
            }
        }
        cout<<n<<'\n';
    }
}
int main(){
    Grade();
    return 0;
}
