#include<iostream>
using namespace std;
int main(){
    int w[3]={2,3,3};
    int p[3]={1,2,3};
    int cap = 6;
    int sum=0;
    int c[4][7];
    for(int i=0; i<4; i++){
        for(int j=0; j<cap+1; j++){
            c[i][j]=0;
        }
    }

    for(int i=1; i<=3; i++){
        for(int W=1; W<=cap; W++){
            if(w[i]<cap){
                int a = p[i];
                int b = w[i];
                if(a+c[i-1, cap-b] > c[i-1, cap]){
                    c[i][W] = a+c[i-1][cap-b];
                }
                else{
                    c[i][W] = c[i-1][cap];
                }
            }
            else{
                c[i][W] = c[i-1][W];
            }

        }

    }
    for(int i=0; i<4; i++){
        for(int j=0; j<7; j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }

}