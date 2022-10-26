#include <iostream>
using namespace std;
int main ()
{
    int arr[50], i,n, sum=0;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<sum<<endl;


    return 0;
}
