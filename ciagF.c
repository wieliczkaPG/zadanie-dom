include<stdio.h>
int main()
{
        printf("\n Ciag Fibonacciego\n");
        puts("");
        printf("Ktory element ciagu obliczyc?\n");
        int n;
        scanf("%d",&n);
 
#include<cstdio>
int main(){
 
printf("ktory element ciagu obliczyc?\n");
int n;
scanf("%d",&n);
 
if(n<=2) printf("%d elementem ciagu Fibonacciego jest 1\n",n);
else{
int f1=1; //wartość pierwszego elementu
int f2=1; //wartość drugiego elementu
int temp; //zmienna pomocnicza
for(int i=3;i<=n;i++){
temp=f1+f2;
f1=f2;
f2=temp;
/*dwa przykładowe obiegi pętli:
temp=1+1=2;
f1=f2=1;
f2=temp=2;
 
temp=1+2=3;
f1=f2=2;
f2=temp=3 ;
*/
}
printf("%d elementem ciagu Fibonacciego jest %d\n",n,f2);
}
return 0;
        if (n==0)
        printf("0 elemet Ciagu Fibonacciego rowna sie 0\n");
        else if(n<=2) 
        printf("%d elementem Ciagu Fibonacciego =  1\n",n);
        else
        {
        int f1=1; //wartość pierwszego elementu
        int f2=1; //wartość drugiego elementu
        int temp; //zmienna pomocnicza
        for(int i=3;i<=n;i++)
                {
                temp=f1+f2;
                f1=f2;
                f2=temp;
                /*dwa przykładowe obiegi pętli:
                temp=1+1=2;
                f1=f2=1;
                f2=temp=2;
                temp=1+2=3;
                f1=f2=2;
                f2=temp=3 ;
                */
                }
        printf("%d elementem Ciagu Fibonacciego = %d\n",n,f2);
        }
       return 0;
 }
