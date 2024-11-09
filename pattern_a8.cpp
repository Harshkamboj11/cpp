// ALPHABET SQUARE PATTERN

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        char alphabet ='A';
        for (int j=0;j<n;j++){
            cout<<alphabet<<" ";
            alphabet+=1;
        }
        cout<<endl;
    }
}