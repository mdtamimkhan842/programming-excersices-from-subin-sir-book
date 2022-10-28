#include <iostream>
using namespace std;
int main ()
{
    int cut_grass, buy_net, buy_saree;
    cin>>cut_grass>>buy_net;
    buy_saree = cut_grass && buy_net;
    printf("%d\n", buy_saree);

    return 0;
}
