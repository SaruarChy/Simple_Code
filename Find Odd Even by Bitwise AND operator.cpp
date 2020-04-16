#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n & 1){
        cout<<"Given number is Odd\n";
    }
    else
        cout<<"Given number is Even\n";


    /*
    2nd process find Odd even by Bitwise AND operator
    if((n & -1) == 1){
       cout<<"Given number is Odd\n";
    }
    else{
        cout<<"Given number is Even\n";
    }

    */

    return 0;
}
