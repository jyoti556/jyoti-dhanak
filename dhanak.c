#include<stdio.h>
#include<conio.h>
void main(){
    int n,sum1,sum2;
    printf("enter a no.");
    scanf("%d",&n);
    sum1=0,sum2=0;
    for(int i=0;i<=n;i++){
     if(i%2==0){
      sum1=sum1+i;
    }
    else 
    sum2=sum2+i;
    }
    printf("%d",sum1);
    printf("\n");
    printf("%d",sum2);
}  
    
    