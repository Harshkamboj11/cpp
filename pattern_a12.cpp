#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    int num=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<num;
        }
        cout<<endl;
        num+=1;
    }
}