#include <iostream>
using namespace std;
int main ()
{
    int A, B,C;
    cin>>A>>B>>C;
    int d = A&&(B||C);
    printf("%d\n", d);


    return 0;
}
