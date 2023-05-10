#include <stdio.h>
#include <math.h>
void menu(int &chon)
{
	printf("\n\t ================== MENU ==================");
	printf("\n\t 1: Kiem tra trung");
	printf("\n\t 2: Xuat mang");
	printf("\n\t 3: So chinh phuong trong mang");
	printf("\n\t 4: Vi tri max trong mang");
	printf("\n\t 5: Tinh tong phan tu chan trong mang");
	printf("\n\t 6: Sap xep mang tang dan");
	printf("\n\t 0: Thoat [EXIT] " );
	printf("\n\t =====================================");
	printf("\n\t Hay chon cong viec : ");
	scanf("%d", &chon);
}
void NhapN(int &n)
{
	do{
		printf ("Nhap n: ");
		scanf ("%d",&n);
		if (n<=0)
			printf ("Nhap sai, nhap lai: ");	
	}while (n<=0);
}
void NhapMang(int a[], int &n)
{
	for(int i=0; i<n; i++)
	{
		printf("\nPhan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}
int Kttrung(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
	for (int j=0;j<i;j++)
	{
		if (a[i]==a[j])
			return 0; //saii
	}
	}
	return 1;//dung
}
//2.Xuat mang
void XuatMang(int a[],int n) 
{
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}
//3.So chinh phuong o vi tri le
int KTSCP(int n)
{
	int i;
	i=sqrt(n);
	if (i*i==n)
			return 1;
	return 0;
}
int XuatSoChinhPhuong(int a[], int n)
{
	int i;
	printf("\nSo chinh phuong la: ");
	for(int i=0; i<n; i++)	
	   if(KTSCP(a[i])==1 && i%2!=0)
	      printf( " \t%d",a[i]);
	   	 
}
//4.Vi tri max
int TimVTmax(int a[], int n)
{	int VTMax =0;
		for (int i=1;i<n;i++)
			if (a[VTMax]<a[i])
				VTMax = i;
		return VTMax;
}
//5.Tinh tong phan tu chan
int Tinhtongchan(int a[], int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			s=s+a[i];
			printf ("\t Cac phan tu chan trong mang la: %d\n",a[i]);
			}
	}
	return s;
}
//6.Sap xep tang dan
void Xepmang(int a[], int n)
{
	int tg;
  	for(int i=0;i<n-1;i++)
       for(int j=i+1; j<n; j++)
       {
        if(a[i]>a[j])
          {
            tg=a[i];
             a[i]=a[j];
              a[j]=tg;
           } 
       }
    printf("\nDay so sau khi sap xep la: ");
       for(int i=0;i<n;i++)
       {
          printf("%6d",a[i]);
    }
}
int main()
{
	int i,x,n;
	int a[100];
	int chon;
	NhapN(n);
	NhapMang(a,n);
	do{
		menu(chon);
		switch(chon)
		{
			case 1:
				{
				int ktTrung= Kttrung(a,n);
				if ((ktTrung)==0)
			{
				printf("\n\t Nhap trung, nhap lai:\t ");
				scanf("%d", &n);
				NhapMang(a,n);
				}
				else
					printf ("\tHop le! ");
				break;
			}
			case 2:
				printf("\n\t Cac phan tu trong mang:\t ");
				XuatMang(a,n);
				break;
			case 3:
				{
				XuatSoChinhPhuong(a,n);
				break;
				}
			case 4:
				{
				int vtmax= TimVTmax(a,n);
				printf("\n\t Vi tri lon nhat trong mang: %d", vtmax);
				break;
				}
			case 5:
			{
				int kq = Tinhtongchan(a,n);
				printf("\n\t Tong cac phan tu chan trong mang: %d", kq);
				break;
			}
			case 6:
				printf("\n\t Sap xep theo thu tu tang dan: ");
				Xepmang(a,n);
				break;			
		}
	}while(chon!=0);
	
	printf("\n\n\n\n\n\n\n\n");
	return 0;
} 




