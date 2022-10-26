#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
    float x;
    cin>>x;
    float result = log2(pow(x,3) + 3*x -1);
    cout<<"Result is : "<<result<<endl;

    return 0;
}
