#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int res=(n >> 1) << 1; //Right shift (>>) by 1 bit then Left shift (<<) by 1 bit

    if(res==n){
        cout<<"Given number is Even\n";
    }
    else{
        cout<<"Given number is Odd\n";
    }

    /*
    //If we want to reduce (int res=(n >> 1) << 1;) this 8th number line of this code we will go like this
    if(((n >> 1) << 1) == n){
        cout<<"Given number is Even\n";
    }
    else{
        cout<<"Given number is Odd\n";
    }
    */

    return 0;
}
