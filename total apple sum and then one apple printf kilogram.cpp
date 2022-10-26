#include <iostream>
using namespace std;
int main ()
{
    int n, i, sum =0;
    cin>>n;
    int arr[n], k[500];
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
        arr[i] =arr[i] * 0.001;
        cout<<arr[i]<< " ";
    }

    return 0;
}
