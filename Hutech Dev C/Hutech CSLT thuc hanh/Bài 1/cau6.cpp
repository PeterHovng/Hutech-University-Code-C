#include <stdio.h>
#include <math.h>
int main()
{
 float cv, p, s;
 unsigned int a, b, c;
 printf("Nhap ba so nguyen duong: ");
 scanf("%u%u%u", &a, &b, &c);
 if(a+b>c && a+c>b && b+c>a)
 { printf("LA TAM GIAC\n");
  cv=a+b+c;
  printf("Chu vi cua tam giac la %f\n", cv);
  p=cv/2;
  s=sqrt(p*(p-a)*(p-b)*(p-c));
  printf("Dien tich tam giac la %f\n", s);
 }
 else printf("KHONG LA TAM GIAC");
 return 0;
}