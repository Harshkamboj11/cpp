//MAJORITY ELEMENT IN A GIVEN ARRAY(UNSORTED)

#include<iostream>
#include<vector>
using namespace std;

//making an algorithm to get the majority element
int majorityelement(vector<int> nums){
    int n=nums.size();

    for (int val : nums){
        int frequency = 0;
        for (int element : nums){
            if (element == val){
                frequency++;
            }
        }
        if (frequency > (n/2)){
            return val;
        }
    }
}

int main(){
    vector<int> nums={1,2,2,1,1,2,2};

    int ans = majorityelement(nums);

    cout<<"The majority element in the given vector/array is = "<<ans<<endl;
}