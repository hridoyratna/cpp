// Optimized-Approach 
// Linear Time complexity : O(n)


#include<iostream>
using namespace std;
int main(){

    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(int);

    int max_value = INT8_MIN, current_sum = 0;

    for (int start = 0; start < size; start++)
    {
        current_sum += arr[start];
        max_value = max(current_sum,max_value);

        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    
    cout<<"Maximum sub-array sum : "<< max_value <<endl;

    return 0;
}