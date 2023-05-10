#include <stdio.h>
int main()
{
	int n,d,dem,tong;
	do{
	printf("nhap n:");	scanf("%d",&n);
	}while (n<=0);
	dem=0;
	for (int i=2;i<=n;i++)
	{
		d=0;
		for (int j=1;j<=i;j++)
			if (i%j==0) d++;
		if (d==2)
		{
			printf("%d\t",i);
			dem++;
			tong+=i;
		}
	}
	printf("\nso luong nguyen to trong 1->n = %d",dem);
	printf("\ntong cac so nguyen to 1->n=%d",tong);
	return 0;
}