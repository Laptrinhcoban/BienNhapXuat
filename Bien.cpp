#include<stdio.h>
#include<math.h>

main ()
{
 int a=0,b=0;
 Nhap("%d/a=");
 Nhap("%d/b=");
 a=b+a;
 b=b+a;
 b=b+b;
 a=b+a;
 printf("Ket qua: a= ,b= ",a,b);
 return 0; 
}
