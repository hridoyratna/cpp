#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,15,38,1,15,-24};
    int size = sizeof(arr)/sizeof(int);

    int smallNumIndex = -1;

    int smallest = INT8_MAX;

    for (int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallNumIndex = i;
        }
       
        /*
            Built in function for finding small number
            smallest = min(arr[i],smallest);
        */
    }

    cout<<"Smallest number : "<< smallest<<endl;
    cout<<"Index of smallest number : "<<smallNumIndex<<endl<<endl;

    return 0;
}