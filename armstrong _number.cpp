#include <iostream>
using namespace std;
int main(){

    int num,sum=0,digit,original_num;

    cout<<"Enter the number: ";
    cin>>num;

    original_num = num;

    while (num>0){
        digit = num%10;
        sum += (digit*digit*digit);
        num /= 10;
    }
    if (sum == original_num){
        cout<<"The given number is an Armstrong number.....";
    }
    else{
        cout<<"The given number is not an Armastrong number.....";
    }

    return 0;
}