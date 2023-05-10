/*Viết chương trình máy bán nước tự động */
#include <stdio.h>
#include <math.h>
void nhap(int &n, int &k)
{
	printf("moi nhap vao so tien: ");
	scanf("%d",&n);
	printf("moi ban lua chon do uong: \n");
	printf("1.\t tra xanh		14.000d/1chai\n");
	printf("2.\t sting			12.000d/1chai\n");
	printf("3.\t pepsi			10.000d/1chai\n");
	printf("4.\t warrio			16.000d/1chai\n");
	printf("5.\t nuoc suoi		 6.000d/1chai\n");
	printf("6.\t sua tuoi		 8.000d/1chai\n");
	printf("hay lua chon: ");
	scanf("%d",&k);
}
void traxanh(int n)
{
	int soluong;
	if (n>=14000)
	{ 
		soluong=n/14000; 
		printf("tra xanh - %d chai - tien du %d \n",soluong,n-soluong*14000);
	}
	else printf("nhap sai");
}
void sting(int n)
{
	int soluong;
	if (n>=12000)
	{
		soluong=n/12000;
		printf("sting - %d chai - tien du %d \n",soluong,n-soluong*12000);
	}
	else printf("nhap sai");
}
void pepsi(int n)
{
	int soluong;
	if (n>=10000)
	{
		soluong=n/10000;
		printf("pepsi - %d chai - tien du %d \n",soluong,n-soluong*10000);
	}
	else printf("nhap sai");
}
void warrio (int n)
{
	int soluong;
	if (n>=16000)
	{
		soluong=n/16000;
		printf("warrio - %d chai - tien du %d \n",soluong,n-soluong*16000);
	}
	else printf("nhap sai");
}
void nuocsuoi(int n)
{
	int soluong;
	if (n>=6000)
	{
		soluong=n/6000;
		printf("nuoc suoi - %d chai - tien du %d \n",soluong,n-soluong*6000);
	}
	else printf("nhap sai");
}
void suatuoi(int n)
{
	int soluong;
	if (n>=8000)
	{
		soluong=n/8000;
		printf("suatuoi - %d chai - tien du %d \n",soluong,n-soluong*8000);
	}
	else printf("nhap sai");
}
void Nhap(int &n)
{
	do
	{
		printf("nhap so nguyen duong n: ");	scanf("%d",&n);
	}while (n<0);
}
void tong(int n)
{
	float s=0;
	for (int i=1;i<=n;i++)
		s=s+(i+1)/pow(i,1/3.);
	printf("tong la : %f",s);
}
void nhapab(int &a, int &b)
{
	do
	{
		printf("nhap so a: ");	scanf("%d",&a);
		printf("nhap so b: ");	scanf("%d",&b);
	}while ((a<=0)||(b<=0));
}
void ucln(int a, int b)
{
	int x=a;
	int y=b;
	while (x!=y)
	{
		if (x>y) x=x-y;
		else y=y-x;
	}
	printf("uoc so chung lon nhat cua 2 so %d va %d la: %d \n",a,b,x);
}
void soban(int a, int b)
{
	int s1=0; int s2=0;
	for (int i=1;i<a;i++)
		if (a%i==0) s1+=i;
	for (int i=1;i<b;i++)
		if (b%i==0) s2+=i;
	if ((s1==b)&&(s2=a)) printf("%d va %d la cap so ban",a,b);
	else printf("%d va %d ko la cap so ban",a,b);
}
int main ()
{
	int n,k,t,a,b;
	printf("lua chon cong viec: \n");
	printf("1: may ban nuoc\n");
	printf("2: tinh tong bieu thuc\n");
	printf("3: cap so ban\n");
	scanf("%d",&t);
	switch (t)
	{
		case 1:
			nhap(n,k);
			if (n%2000==0)
			{
				switch (k)
				{
					case 1:	traxanh(n);	break;
					case 2:	sting(n);	break;
					case 3:	pepsi(n);	break;
					case 4: warrio(n);	break;
					case 5:	nuocsuoi(n);	break;
					case 6: suatuoi(n);	break;
					default: printf("nhap sai");
				}
			}
			else printf("nhap sai");
			break;
		case 2: 
			Nhap(n);
			tong(n);
			break;
		case 3:
			nhapab(a,b);
			ucln(a,b);
			soban(a,b);
			break;
		default: printf("nhap sai");
	}
	
}
			
