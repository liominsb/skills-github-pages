#include<stdio.h>
int main(void)
{
    int n;
    int a,b;
    a=1;
    scanf("%d",&n);

    while(a<=n){
        b=1;
        while(b<=a){
            printf("%d*%d=%d",b,a,a*b);
            if(a*b<10){
                printf("   ");
            }
            if(a*b>=10){
                printf("  ");
            }
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}