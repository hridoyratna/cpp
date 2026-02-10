#include<iostream>
using namespace std;
int BinaryToDecimal(int binaryValue){
    int ans = 0, pow = 1;

    while(binaryValue > 0){
        int rem = binaryValue % 10;
        ans += (rem * pow);
        pow *= 2;
        binaryValue /= 10;
    }
    return ans;
}
int main(){

    int n ;
    cout<<"Enter Binary number : ";
    cin >> n;

    int decimal_value = BinaryToDecimal(n);

    cout<<endl<<"Binary to Decimal of "<<n<<" is "<<decimal_value<<endl;

    return 0;
}