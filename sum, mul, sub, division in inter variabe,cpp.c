#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, div, mul, sub;
    cin>>a>>b;
    sum = a+b;
    mul = a*b;
    if (a>b)
    {
        sub = a-b;
        div = a/b;
    }
    else
    {
        sub = b-a;
        div = b/a;
    }

    cout<<sum<<endl<<div<<endl<<mul<<endl<<sub<<endl;

    return 0;
}
