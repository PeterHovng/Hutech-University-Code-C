#include <stdio.h>
int main ()
{
	int n,d,tong;
	//caua
	do{
	printf("nhap n: "); 
	scanf("%d",&n);
	}while ((n<0) && (n>=100));
	//caub
	for (int i=1;i<=n;i++)
		if (n%i==0) d++;
	if (d==2) printf("%d la so nguyen to",n);
	else printf("%d ko la so nguyen to",n);
	//cauc
	tong=0;
	for (int i=1;i<n;i++)
		if (n%i==0) tong+=i;
	if (tong==n) printf("\n%d la so hoan hao",n);
	else printf("\n%d ko la so hoan hao",n);
	return 0;
}