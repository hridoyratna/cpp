// maximun sub-array = n*(n+1)/2
// Time complexity = O(n^3)


#include<iostream>
using namespace std;
int main(){

    int arr[] = {2,5,0,3,6};
    int size = sizeof(arr)/sizeof(int);

    for (int start = 0; start < size; start++)
    {
        for ( int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout<< arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}