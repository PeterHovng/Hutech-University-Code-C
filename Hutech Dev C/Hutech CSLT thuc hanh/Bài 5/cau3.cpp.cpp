#include <stdio.h> 
void NhapSL( int &n)
{
	do
	{
		printf("\n Nhap so phan tu cua mang 0< n <100: ");
		scanf("%d", &n);
		if(n<=0||n>100)
			printf("\n Nhap sai dieu kien vui long nhap lai: ");
	}while(n<=0||n>100);
}
void Nhapmang(float a[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\nPhan tu thu %d: ", i);
		scanf("%f", &a[i]);
	}
}
void Xuatmang(float a[],int n)
{
	printf("\nMang gom cac phan tu la\n : ");
	for(int i=0;i<n;i++)
	{
		printf("%.2f\t",a[i]);
	}
}
int main()
{
    int n;
    float a[100];
    NhapSL(n);
    Nhapmang(a,n);
    Xuatmang(a,n);
	return 0;
}

