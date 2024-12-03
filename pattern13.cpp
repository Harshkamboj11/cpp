//PASCAL'S TRIANGLE 

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            if (j==1 || j==i){
                cout<<1<<" ";
            }
            else{
                cout<<i-1<<" ";
            }
        }
        cout<<endl;
    }
}