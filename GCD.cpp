#include <iostream>
using namespace std;
int main(){
    int num1,num2,num_temp;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    while (num2 != 0){
        num_temp = num1 % num2;
        num1 = num_temp%num2;
    }


}