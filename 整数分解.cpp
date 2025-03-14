#include <stdio.h>
int main(void)
{
    int n=0;
    int b;
    int a=1;
    int aad;
    int f;
    scanf("%d", &aad);

    n++;
    b=aad;
    b/=10;

    while (b>0) {
        b/=10;
        n++;
    }
    printf("??????%d\n", n);


    for(int i=1;i<n;i++){
        a*=10;
    }
    printf("%d\n",a);

    while(n>0){
        n--;
        f=aad/a;
        aad%=a;
        a/=10;
        if(n>0){printf("%d ",f);}
        else{printf("%d",f);}
    }

    return 0;
    
    
}