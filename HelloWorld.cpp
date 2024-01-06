#include<iostream>
using namespace std;
int main(){
    int num=0;
    int div, rem,sum=0;
    while(num<1000){
        if(num%3==0 || num%5==0)
        {
            sum=sum+num;
        }
        num++;
    }
    cout<<sum;
    return 0;
}