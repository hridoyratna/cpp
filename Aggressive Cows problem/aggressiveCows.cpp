#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& arr, int N, int c,int minAllowedValue){
    int cows = 1, lastStallPosition = arr[0];

    for (int i = 0; i < N; i++)
    {
        if ((arr[i] - lastStallPosition) >= minAllowedValue)
        {
            cows++;
            lastStallPosition = arr[i];
        }

        if (cows == c)
        {
            return true;
        }
    }
    return false;
}

int minDistanceTwoCows(vector<int>  &arr, int N, int c){

    sort(arr.begin(), arr.end());
    int start = 0, end = arr[N-1] - arr[0], ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr,N,c,mid))  // Right search
        {
            ans = mid;
            start = mid + 1;
        }else{   //left search
            end = mid - 1;
        }
        
    }
    return ans;
    
}
int main(){
    int N = 7, c = 3;
    vector<int> vec = {1,15,2,8,4,9,12};

    cout<<"Minimum distance between two cows : "<<  minDistanceTwoCows(vec, N, c)<<endl;

    return 0;
}