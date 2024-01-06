#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n = 0;
    int pn;
    int k;
    int pn1, sum = 1, prod = 1, temp1 = 1, temp2 = 1,j;
    int t = pow(10, 9);
    int fact9 = 362880;
    // for(int i=0; i<2000; i++)
    // {
    //     pn=pow(2,i);
    //     int j=i+1;
    //     pn1=pow(2,j);
    //     if((t*pn)==(362880*pn1))
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }
    while (n <= 700)
    {
        n++;
        for (int i = 1; i <= n; i++)
        {
            prod = pow(2, i);
            j=i-1;
            sum =  pow(2, j);
            temp1 = temp1 * (prod - sum);
        }
        for (int i = 1; i <= n + 1; i++)
        {
            j=i-1;
            prod = pow(2, i);
            sum = pow(2, j);
            temp2 = temp2 * (prod - sum);
        }
    }
        int p9 = pow(10,9);
        if((p9*temp1)==(362880*temp2)){
            cout<<n;
        }
}