#include<stdio.h>
int sum(int a,int b);
int subs(int a,int b);
int multi(int a,int b);
int div(int a,int b);
int modulo(int a,int b);
int main()
{ int a,b,add,sub,mult,divi,modul;

printf("ENTER a:");
scanf("%d",&a);
printf("ENTER b:");
scanf("%d",&b);

   add=sum(a,b);
    sub=subs(a,b);
    mult=multi(a,b);
    divi=div(a,b);
    modul=modulo(a,b);
    return 0;
}
int sum(int a,int b){
    printf("The sum is:%d\n",a+b);
    return 0;
}
int modulo(int a,int b){
    printf("The modulo is:%d\n",a%b);
    return 0;
}
int div(int a,int b){
    printf("The division is:%d\n",a/b);
    return 0;
}
int multi(int a,int b){
    printf("The multiplication is:%d\n",a*b);
    return 0;
}
int subs(int a,int b){
    printf("The substraction is:%d\n",a-b);
    return 0;
}
