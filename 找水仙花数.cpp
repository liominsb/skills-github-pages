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


    printf("λ��:");
    scanf("%d", &n);
    printf("���Ե�");

    
    for(int i=1;i<n;i++){//��η�
        a*=10;
    }
    aad=a;
    
    while(aad<a*10){
        int d=n;
        b=aad;
        sum=0;
        int e=a;
        
    
    while(d>0){//���λ��
        d--;
        f=b/e;
        b%=e;
        e/=10;

            sum+=pow(f,n);

        
    }
     if(sum==aad){
            printf("\n%d��ˮ�ɻ���\n",aad);

        }
        aad++;
}
printf("�ѽ���");
       
    return 0;
    
    
}