#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    float y = log2(x*x*x+3*x-1);
    cout<<y<<endl;
    return 0;
}
