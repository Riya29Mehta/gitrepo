#include<stdio.h>
#include<math.h>
int main(){
    // int a=3;
    // float b=4.1;
    // float c = pow(a,b);
    // printf("%f", c);
    int r;
    printf("enter row:");
    scanf("%d", &r);
    int flag=1;

    for(int i=1; i<=r; i++){
        flag=1;
        for(int j=1; j<=i; j++){
            if(i%2==0){

                if(flag==1){
                    printf("0");
                    flag=0;
                }
                
                else{
                    printf("1");
                    flag=1;
                }
            }
            else{
                if(flag==1){
                    printf("1");
                    flag=0;
                }
                else{
                    printf("0");
                    flag=1;
                }
            }
        }
        printf("\n");
    }



    // int count=1;

    // for(int i=1; i<=r;i++){
    //     for(int j=1; j<=i; j++){
    //         printf("%d",count++);
    //         // count++;
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for(int i=1; i<=r; i++){
    //     for(int j=1; j<=r-i; j++){
    //         printf(" ");
    //     }

    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
}