#include <stdio.h>
#define MAX3(X,Y,Z) ((X)>(Y)?((X)>(Z)?(X):(Z)):((Y)>(Z)?(Y):(Z)))

int main(){
int num1,num2,num3,a;
    printf("ingrese num1:");
    scanf("%d",&num1);
    printf("\ningrese num2:");
    scanf("%d",&num2);
    printf("\ningrese num3:");
    scanf("%d",&num3);
if (num1==num2 && num2==num3)
{
    printf("\ntodos son iguales\n");
    return 0;
}if(num1==num2 || num2==num3 || num1==num3){
    printf("\nhay dos iguales\n");
}
    a=MAX3(num1,num2,num3);
if (a==num1)
{
    printf("\n%d es mayor\n",num1);
}
if (a==num2)
{
    printf("\n%d es mayor\n",num2);
}
if (a==num3)
{
    printf("\n%d es mayor\n",num3);
}
    return 0;
}