#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int a,b,c;
    printf("nhap a: ");
    scanf("%u",&a);
    printf("nhap b: ");
    scanf("%u",&b);
    printf("nhap c: ");
    scanf("%u",&c);
   	if (a+b<c || a+c<b || b+c<a)
   		printf ("Khong Phai Tam Giac");
	else if (a==b || b==c || c==a)
		printf ("Tam giac can");
	else if (a == b == c)
		printf ("Tam giac deu");
	else if (((a*a)==(b*b)+(c*c)) || ((b*b)==(a*a)+(c*c)) || ((c*c)==(a*a)+(b*b)))
		printf ("Tam giac vuong");
	else 
		printf ("Hinh Tam Giac");
   	return 0;
}