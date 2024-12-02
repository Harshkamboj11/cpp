//HOLLOW DIAMOND

#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    //upper part
    for (int i=1;i<=n;i++){
        for (int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for (int k=1;k<=(2*i-1);k++){
            if (k==1 || k==(2*i-1)){
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //lower part
    for (int i=1;i<=(n-1);i++){
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int k=1;k<=(2*(n-i)-1);k++){
            if(k==1 || k==(2*(n-i)-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}