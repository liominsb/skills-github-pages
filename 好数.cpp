
#include<stdio.h>//������ָһ������ż��λ�ϵ����ֶ���ż��������λ�ϵ����ֶ���������
//���磬123456��һ����������Ϊż��λ�ϵ�����2��4��6����ż��������λ�ϵ�����1��3��5����������
int main(void)
{
    int h;
    scanf("%d",&h);
    int sz[10000];
    int j,k,n,n2,l,n1,c;
    c=0;
    
    for(n=1;n<=h;n++){
    l=0;
    int b=0;
    k=1;
    n2=n;
    n1=n;
 
    while(n2>0){
        n2=n2/10;
        b++;
    }
    for(j=1;j<b;j++){
        k*=10;
    }
    if(b%2==0){for(int i=1;i<=j;i++){
        sz[i]=n1/k;
        n1=n1%k;
        k/=10;
    }}else{
       for(;j>0;j--){
        sz[j]=n1/k;
        n1=n1%k;
        k/=10;
       }
    }
    
    if(b%2==1){for(j=1;j<=b;j++){
        if(j%2==0){
            if(sz[j]%2==0){l++;}
        }
        else {
            if(sz[j]%2==1){l++;}
        } 
    }
}
else{for(j=1;j<=b;j++){
        if(j%2==0){
            if(sz[j]%2==1){l++;}
        }
        else {if(sz[j]%2==0){l++;}}
       }
    }
       if(l==b){
        c++;
    }
       
}
printf("%d\n",c);
    return 0;
}


