#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int x, result;
    cin>>x;

    result = pow(x, 5) - 3*pow(x, 4)- 7*pow(x,3)+ 13*pow(x,2)+3742;
    cout<<"Result is : " <<result<<endl;


    return 0;
}
