//1.By Arithmetic Operators
#include<stdio.h>
#include<math.h>
int main()
{
 int a1,a2;
 printf("Enter the two numbers u want to swap:");
 scanf("%d%d",&a1,&a2);
 a1=a1+a2;
 a2=a1-a2;
 a1=a1-a2;

 printf("The first number after swaping is:%d\nThe second number after swaping is:%d",a1,a2);
return 0;
}

//2.XOR bitwise operator
#include<stdio.h>
#include<math.h>
int main()
{
 int a1,a2;
 printf("Enter the two numbers u want to swap:");
 scanf("%d%d",&a1,&a2);
 a1=a1^a2;
 a2=a1^a2;
 a1=a1^a2;

 printf("The first number after swaping is:%d\nThe second number after swaping is:%d",a1,a2); 
return 0;
}

//3.By third Variable
#include<stdio.h>
#include<math.h>
int main()
{
 int a1,a2,a3;
 printf("Enter the two numbers u want to swap:");
 scanf("%d%d",&a1,&a2);
 a3=a1;
 a1=a2;
 a2=a3;

 printf("The first number after swaping is:%d\nThe second number after swaping is:%d",a1,a2);
return 0;
}
