#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxAllocation){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllocation)
        {
            return false;
        }
        
        if(pageSum + arr[i] <= maxAllocation){
            pageSum += arr[i];
        }else{
            studentCount ++;
            pageSum = arr[i];
        }
    }
    return studentCount > m ? false : true;
}
int allocateBooks(vector<int>& books, int n, int m){
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += books[i];
    }

    int start = 0, end = sum;  //range of possible ans
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        bool isValid = isPossible(books,n,m,mid);
        if (isValid)  //left
        {
            ans = mid;
            end = mid - 1;
        }else{    // right
            start = mid + 1;
        }
        
    }
    return ans;
}
int main(){

    vector<int> books = {15,17,20};
    int n = books.size();
    int m = 2;   // student number

    cout << allocateBooks(books,n,m) <<endl;
    
    return 0;
}