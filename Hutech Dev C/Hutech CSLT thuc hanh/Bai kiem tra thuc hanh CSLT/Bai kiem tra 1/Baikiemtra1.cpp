#include <stdio.h>
#include <math.h>
int main ()
{
	int K,KV1,KV2,KV3;
	float a,b,c,n,S;
	printf ("Diem Toan a: ");
	scanf ("%f",&a);
	printf ("Diem Ly b: ");
	scanf ("%f",&b);
	printf ("Diem Hoa c: ");
	scanf ("%f",&c);
	printf ("Khu Vuc K:");
	scanf ("%d%f",&K);
	n = a+b+c;
	if (K==KV1 || K==KV2)
		S=n+5;
		else if (K==KV3)
			S=n+3;
	else 
		(S = n);
	if (S>=24)
		printf ("Gioi");
	 else if (S>=21 && S<24)
	 	 printf ("Kha");
			else if (S>=15 && S<21)
				printf ("Trung Binh");
	else
		printf ("Yeu");	
	printf ("\nTong Diem: %.1f",S);			
	return 0;
					
}