#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(int);

    int target = 80;
    int index = linearSearch(arr,size,target);

    if(index != -1){
        cout<<"Target is found at index "<<index<<endl<<endl;
    }else{
        cout<<"Target is not found in array.."<<endl<<endl;
    }

    return 0;
}