#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float b,a, c, k;
    cin>>a>>b>>c;


    float result = (-b + sqrt((b*b)- (4*a*c)))/(2*a);
    cout<<result<<endl;

    return 0;
}
