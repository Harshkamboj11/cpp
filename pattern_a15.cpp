#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    
    
    for (int i=1;i<=n;i++){
        char alphabet = 'A';
        int num = 1;
        for (int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for (int k=1;k<=i;k++){
            if (i%2==0){
                cout<<alphabet<<" ";
                alphabet += 1;
                
            }
            else{
                cout<<num<<" ";
                num+=1;
            }
        }
        cout<<endl;
    }
}