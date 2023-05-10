#include <stdio.h>
int main ()
{
	//câu a
	int n,k;
	do{
	printf("nhap n dong:");	scanf("%d",&n);
	}while ((n<=0)&&(n>10));
	printf("moi dong co k dau *:");	scanf("%d",&k);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=k;j++)
			printf("*");
		printf("\n");	
	}
	return 0;
}
/*
#include <stdio.h>
int main ()
{
	int n;
	do{
		printf("nhap n:");
		scanf("%d",&n);
	}while ((n<=0)||(n>10));
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/