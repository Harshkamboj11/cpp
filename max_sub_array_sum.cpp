//FINDING SUM OF THE MAXIMUM SUBARRAY SUM(kadane's algorithm)


//by normal method
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    
    int maxsum = 0;
    for (int start=0;start<n;start++){
        int arrsum = 0;
        for (int end=start;end<n;end++){
            arrsum += arr[end];
            maxsum = max(arrsum,maxsum);
        }
    }
    cout<<maxsum<<endl;


    //by kadane's algorithm
    int n2=9;
    int arr2[n2]={-2,1,-3,4,-1,2,1,-5,4};
    int maxnum=INT_MIN,arrsum=0;
    for (int i=0;i<n2;i++){
        arrsum += arr2[i];
        maxsum = max(arrsum,maxnum);
        if (arrsum<0){
            arrsum = 0;
        }
    }
    cout<<maxnum<<endl;

}