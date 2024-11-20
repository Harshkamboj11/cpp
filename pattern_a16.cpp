// DOUBLE PYRAMID

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=1;i<=n;i++){
        for (int k=1;k<=i;k++){
            cout<<" ";
        }
        for (int l=n-1;l>=i;l--){
            cout<<"* ";
        }
        cout<<endl;
    }
}