//HOURGLASS PATTERN

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=2;j<=i;j++){
            cout<<" ";
        }
        for (int j=(n-i)+1;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for(int i=2;i<=n;i++){
        for (int j=(n-i);j>=1;j--){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}