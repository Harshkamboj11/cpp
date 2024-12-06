#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number fo rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        for (int k=(n-i);k>=1;k--){
            cout<<" ";
        }
        for (int l=(n-i);l>=1;l--){
            cout<<" ";
        }
        for (int m=1;m<=i;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1;i<=n;i++){
        for (int j=(n-i)+1;j>=1;j--){
            cout<<"*";
        }
        for (int j=2;j<=i;j++){
            cout<<" ";
        }
        for (int j=2;j<=i;j++){
            cout<<" ";
        }
        for (int j=(n-i)+1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;   
}