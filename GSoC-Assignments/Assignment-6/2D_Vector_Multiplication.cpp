#include<bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cout<<"Enter the no of rows and column for matrics: ";
    cin>>r>>c;
    
    vector<int>A(r);
    vector<vector<int>>A1(c,A);
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cin>>A1[i][j];
       }
    }
    
    cout<<"\nMatrix 1: "<<"\n";
    
    for(int j=0;j<r;j++){
        for(int i=0;i<c;i++){
            cout<<A1[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    vector<int>B(r);
    vector<vector<int>>B1(c,A);
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cin>>B1[i][j];
       }
    }
    
    cout<<"\nMatrix 2: "<<"\n";
    
    for(int j=0;j<r;j++){
        for(int i=0;i<c;i++){
            cout<<B1[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    vector<int>M(r);
    vector<vector<int>>mul(c,M);
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            mul[i][j] = A1[i][j] * B1[i][j];
        }
    }
    cout << "\n\nMultiplication of matrix 1 & 2 is : \n";
 
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cout<<mul[i][j] << "  ";
        }
 
        cout<<"\n";
    }
}
