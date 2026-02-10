#include<iostream>
using namespace std;
int DecimalToBinary(int decimalValue){
    int ans = 0, pow = 1;

    while(decimalValue > 0){
        int rem = decimalValue % 2;
        ans += (rem * pow);
        pow *= 10;
        decimalValue /= 2;
    }
    return ans;
}
int main(){

    int n ;
    cout<<"Enter Decimal number : ";
    cin >> n;

    int binary_value = DecimalToBinary(n);

    cout<<endl<<"Decimal to Binary of "<<n<<" is "<<binary_value<<endl;

    return 0;
}