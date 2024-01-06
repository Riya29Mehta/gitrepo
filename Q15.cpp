#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x[100];
    int y[100];
    for(int i=0; i<100; i++)
    {
        x[i]=i+1;
    }
    for(int i=0; i<100; i++){
        for(int j=0; j<100; i++){
            if((x[i]+x[j])%7!=0)
            {
                y[i]=i+1;
            }
        }
    }
    
}