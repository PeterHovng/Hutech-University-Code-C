#include <stdio.h>

void xuatmenu(int &chon)
{
	printf("\n\t ============== MENU ===============");
	printf("\n\t 1: Giai phuong trinh bac 1");
	printf("\n\t 2: Kiem tra so hoan thien ");
	printf("\n\t 3: Liet ke so hoan thien tu 1 toi n ");
	printf("\n\t 4: Uoc chung lon nhat cua 2 so nguyen ");
	printf("\n\t 0: Thoat");
	printf("\n\t ===================================");
	printf("\n\t Hay chon cong viec : ");
	scanf("%d",&chon);
}

void ptb1(int a,int b)
{
	if(a==0)
	{
		if(b==0)
			printf("\n\t Phuong trinh vo so nghiem ");
		else
			printf("\n\t Phuong trinh vo nghiem ");
	}
	else
	{
		float x=-(float)b/a;
		printf("\n\t Nghiem cua phuong trinh %dx+%d=0 la",a,b);
		printf("\n\t x = %.2f",x);
	}
}

int sohoanthien(int n)
{
	int s2=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			s2+=i;
	}
	if(s2==n)
		return 1;
	else
		return 0;
}
void hoanthien(int m)
{
	for(int j=1;j<=m;j++)
	{
		if(sohoanthien(j)==1)
			printf("%d ",j);
	}
}

void UCLN(int c,int d)
{
	if(c==0 && d==0)
		printf("\n\t Khong co UCLN");
	else if(c==0 || d==0)
		printf("\n\t UCLN la %d",c+d);
	else
	{
		while(c!=d)
		{
			if(c>d)
				c-=d;
			else
				d-=c;
		}
		printf("\n\t UCLN la %d",c);
	}
}



int main()
{
	int chon;
	do
	{
		xuatmenu(chon);
		
		switch(chon)
		{
			case 1:
				int a,b;
				printf("\n\t Nhap a , b :");
				scanf("%d%d",&a,&b);
				ptb1(a,b);
				break;
			case 2:
				int n;
				printf("\n\t Nhap so nguyen duong :");
				scanf("%d",&n);
				if(sohoanthien(n)==1)
					printf("\n\t %d la so hoan thien ",n);
				else
					printf("\n\t %d khong la so hoan thien ",n);
				break;
			case 3:
				int m;
				printf("\n\t Nhap so nguyen duong :");
				scanf("%d",&m);
				printf("\n\t Cac so hoan thien tu 1 toi %d : ",m);
				hoanthien(m);
				break;
  			case 4:
  				int c,d;
  				printf("\n\t Nhap 2 so nguyen duong : ");
  				scanf("%d%d",&c,&d);
  				UCLN(c,d);
  				break;
		}
	}while(chon!=0);

	printf("\n\n\n\n\n\n\n\n");
	return 0;
}
