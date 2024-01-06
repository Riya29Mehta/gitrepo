#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int x,y,i,j,count=0;
    for(int i=-14; i<15; i++)
    {
        x=i;
        y=j;
        if(i<0)
        {
            x =i-(2*i);
        }
        for(int j=-14; j<15; j++)
        {
            if(j<0)
            {
                y = j-(2*j);
            }
            int p1 = pow(x,2);
            int p2 = pow(y,2);
            int sum = p1+p2;
            float root = sqrt(sum);
            if(root<15)
            {
                count++;
                count++;//new f1
            }
            
        }
    }
    cout<<count;
}