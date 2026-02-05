// Brute-Force-Approach 
// Time complexity : O(n^2)


#include<iostream>
using namespace std;
int main(){

    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(int);

    int max_value = INT8_MIN;

    for (int start = 0; start < size; start++)
    {
        int current_sum = 0;
        for ( int end = start; end < size; end++)
        {
            current_sum += arr[end];
            max_value = max(current_sum,max_value);
        }
    }
    
    cout<<"Maximum sub-array sum : "<< max_value <<endl;

    return 0;
}