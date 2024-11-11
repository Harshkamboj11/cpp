#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    
    for(int i=1;i<=n;i++){
        int num = 1;
        for (int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        if(i%2==0){
            for (int j=1;j<=i;j++){
                cout<<num-1<<" ";
                num+=1;
            }
        }else{
                cout<<num<<" ";
                num+=1;
            }
        cout<<endl;
    }
}