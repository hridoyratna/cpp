#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,15,38,1,15,-24};
    int size = sizeof(arr)/sizeof(int);

    int largeNumIndex = -1;

    int largest = INT8_MIN;

    for (int i = 0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largeNumIndex = i;
        }
       
        /*
            Built in function for finding large number
            largest = max(arr[i],largest);
        */
    }

    cout<<"largest number : "<< largest<<endl;
    cout<<"Index of largest number : "<<largeNumIndex<<endl<<endl;

    return 0;
}