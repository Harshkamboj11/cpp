#include <iostream>
using namespace std;
int main(){
    int n,v1=0,v2=1,newterm;

    cout<<"Enter the interger: ";
    cin>>n;

    cout<<"fibonacci series: "<<v1<<","<<v2<<",";

    for (int i=3;i<n+1;i++){
        newterm = v1+v2;
        cout<<newterm<<",";

        v1=v2;
        v2=newterm;
    }

    return 0;
}