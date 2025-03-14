#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    int b;
    int a=1;
    int aad;
    int f;
    int sum=0;


    printf("位数:");
    scanf("%d", &n);
    printf("请稍等");

    
    for(int i=1;i<n;i++){//求次方
        a*=10;
    }
    aad=a;
    
    while(aad<a*10){
        int d=n;
        b=aad;
        sum=0;
        int e=a;
        
    
    while(d>0){//求各位数
        d--;
        f=b/e;
        b%=e;
        e/=10;

            sum+=pow(f,n);

        
    }
     if(sum==aad){
            printf("\n%d是水仙花数\n",aad);

        }
        aad++;
}
printf("已结束");
       
    return 0;
    
    
}