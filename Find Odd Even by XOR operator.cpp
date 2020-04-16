#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n ^ 1) < n ){
        cout<<"Given number is Odd\n";
    }
    else{
        cout<<"Given number is Even\n";
    }

    return 0;
}
