// ODD NUMBER PYRAMID

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        int num=1;
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=i;k++){
            cout<<num<<" ";
            num += 2;
        }
        cout<<endl;
    }
}