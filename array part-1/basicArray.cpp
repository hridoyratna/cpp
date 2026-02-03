#include<iostream>
using namespace std;
int main(){
    // first technique to initialize array
    int marks[10] = {88,7,39,10,33,100,93,70,80,23};

    // second technique to initialize array (bad way)
    double price[70] = {350.0,499.0,500.0,238,9,344.6};

    int size = sizeof(price)/sizeof(double);

    // third technique to initialize array (best way)
    int arr[] = {23,45,87,50};
    int size1 = sizeof(arr)/sizeof(int);

    // take user input 
    int sz = 5;
    int arr1[sz];
    for(int i = 0; i < sz; i++){
        cin >> arr1[i];
    }cout<<endl;


    for(int i = 0; i < 10; i++){
        cout<< marks[i] << " " ;
    }cout<<endl<<endl;

    cout<<price[2]<<endl;

    for(int i = 0; i < size; i++){
        cout<< price[i] << " " ;
    }cout<<endl<<endl;   

    for(int i = 0; i < size1; i++){
        cout<< arr[i] << " " ;
    }cout<<endl<<"Size of arr : "<<size1<<endl<<endl;
    
    for(int i = 0; i < sz; i++){
        cout << arr1[i]<<" ";
    }cout<<endl;

}