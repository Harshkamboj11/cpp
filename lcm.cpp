#include<iostream>
using namespace std;
int main(){
    int a,b,gcd,lcm;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    for (int i = 1;i<=a && i<=b;i++){
        if (a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
        lcm = (a*b)/gcd;

        cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
}