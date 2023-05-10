#include <stdio.h>
#include <math.h>
void menu(int &chon)
{
	printf("\n\t ================== MENU ===============");
	printf("\n\t 1: Kiem tra n co phai so nguyen to hay khong ");
	printf("\n\t 2: Liet ke cac so nguyen to tu 1 toi n ");
	printf("\n\t 3: So luong so nguyen to tu 1 toi n ");
	printf("\n\t 4: Tong cac so nguyen to tu 1 toi n ");
	printf("\n\t 5: Trung binh cong cac so nguyen to tu 1 toi n ");
	printf("\n\t 0: Thoat [EXIT] " );
	printf("\n\t =====================================");
	printf("\n\t Hay chon cong viec: ");
	scanf("%d",&chon);
}
void Nhapsonguyen(int &n)
{
	do
	{

		printf("\n\t Nhap n: ");
		scanf("%d",&n);
		if(n<=0 || n>=100)
			printf("\n\t nhap sai vui long nhap lai: ");
	}while(n<=0 || n>=100);
}
// KIEM TRA SNT
int check(int n)
{
 	int dem=0;
 	if(n<2)
  		return 0;
	for (int i=1 ; i<=n ; i++)
	{
		if (n%i ==0 )
			dem++;
	}
 	if (dem==2)
  		return 1;
 	else
 		return 0;
}

//LIET KE SNT
void ngto(int n)
{
	printf("\n\t Cac so nguyen to tu 1 toi %d: ",n);
	for(int i=1;i<=n;i++)
	{
		if(check(i)==1)
			printf("%d ",i);
	}
}
//SO LUONG SNT
int demsnt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(check(i)==1)
			dem++;
	}
	return dem;
}
//TONG CAC SNT
int tongsnt(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(check(i)==1)
			s+=i;
	}
	return s;
}
//TRUNG BINH CAC SNT
float avr(int n)
{
	int dem=demsnt(n);
	float tb=(float)tongsnt(n)/dem;
	return tb;
}
int main()
{
	int n;
	
	int chon;
	Nhapsonguyen(n);
	do
	{
		menu(chon);
		switch(chon)
		{
			case 1:
				if(check(n)==1)
					printf("\n\t %d la so nguyen to ",n);
				else
					printf("\n\t %d khong la so nguyen to ",n);
				break;
			case 2:
				ngto(n);
				break;
			case 3:
				printf("\n\t so luong so nguyen to tu 1 toi %d : %d",n,demsnt(n));
				break;
			case 4:
				printf("\n\t tong cac so nguyen to tu 1 toi %d : %d",n,tongsnt(n));
				break;
			case 5 :
			printf("\n\t trung binh cong cac so nguyen to : %.2f",avr(n));
			break;
				
		}
	}while(chon!=0);
	
	printf("\n\n\n\n\n\n\n\n");
	return 0;
}
