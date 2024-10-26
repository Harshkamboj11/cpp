#include<iostream>
using namespace std;
int main(){
    int num,a,b,new_term;

    cout<<"Enter the number: ";
    cin>>num;

    for (int i = 1;i<=num;i++){
        new_term = a+b;
        a = b;
        b = new_term;
    }
}