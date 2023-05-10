#include <stdio.h>
#define MAX 100
//Cau a: Nhap vao mang A gom n phan tu, trong qua trinh nhap kiem tra cac phan tu nhap vao khong duoc trung, neu trung thong bao va yeu cau nap lai.
void NhapKiemTraMang(int a[],int n,int j)
{
for(int i=1;i<n;i++)
    {
	 printf("Nhap phan tu vi tri a[%d]= ",i);
	scanf ("%d",&a[i]);
for(int j=0;j<i;j++)
     {
        while (a[i]==a[j])
        {
         printf ("Nhap lai gia tri a[%d]= ",i);scanf ("%d",&a[i]);
        }
     }
    }
}
//Cau b: Xuat mang.
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	 printf("%d",a[i]);
    }
}
//Cau c.1: Xat ra man hinh cac phan tu la so chinh phuong nam tai nhung vi tri le trong mang.
int ChinhPhuong(int n) 
{
  for(int i=1; i<=n; i++)
  if(i*i ==n) 
{
    return 1;
}
  return 0;
}
//Cau c.2: So chinh phuong nam tai nhung vi tri le trong mang.
void ChinhPhuongLe(int a[],int n) 
{
  printf("\nCac so chinh phuong thoa man:");
  for(int i=0; i<n; i++) 
  {
  if(ChinhPhuong(a[i]) && (i%2!=0)) 
     printf("\t%d",a[i]);
  }
}
//Cau d: Xuat ra vi tri cua cac phan tu co gia tri lon nhat.
int TimMax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		    max=a[i];
    }
	return max;	
}
//Cau e.1: Tim phan tu am lon nhat
void VTCacMax(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(TimMax(a,n)==a[i])
		    printf("%d\t",i);
    }
}
//Cau e.2: Tim phan tu am nho nhat
int ViTriAmDT(int a[], int n)
{
        {
		for (int i=0; i<n; i++)
		if (a[i]<0)
		return i;
		}
		 return -1;
}

int TimAmMax(int a[],int n)
{
    {
	int Amax=ViTriAmDT(a,n);
	    if(Amax!=-1)
	{
	for(int i=Amax;i<n;i++)
	{
		if(a[Amax]<a[i] && a[i]<0)
		    Amax=i;		 		    
	}
    return Amax;
	}
	} 
	return -1;
}
int ViTriDuongDT(int a[], int n)
{
    {
    for (int i=0; i<n; i++)
		if (a[i]>0)
		return i;
	}
		return -1;
}
int TimDuongMin(int a[],int n)
{
    {
	int Dmin=ViTriDuongDT(a,n);
	    if(Dmin!=-1)
		{
	for(int i=Dmin;i<n;i++)
	{
		if(a[Dmin]>a[i] && a[i]>0)
		    Dmin=i;		 		    
	}
	return Dmin;
	    }
	}
	return -1;
}
//Cau f: Tinh tong cac phan tu nam o vi tri cham trong mang
int TongVTPTChan(int a[], int n)
{
    {
	int tong=0;
	for(int i=0; i<n; i++)
		if(i%2==0)
		{		
			tong = tong + a[i];		   
		}
		return tong;
    }
	return -1;
} 
void HoanVi(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
//Cau g: Viet ham sap xep mang theo thu tu tang dan.
void SapXep(int a[],int n)
{
	printf("\nMang sau khi sap xep theo thu tu tang dan la: ");
	for(int i=0;i<n-1;i++)
	   for(int j=i+1;j<n;j++)
	     if(a[i]>a[j])
	       HoanVi(a[i],a[j]);
    for(int i=0;i<n;i++)
	 printf("%d\t",a[i]);
}
int main(){
  int a[100],i,j,n;
  printf ("Nhap vao so phan tu cua mang:");
  scanf("%d",&n);
  printf ("Nhap phan tu vi tri a[0]= ");
  scanf ("%d",&a[0]);
  NhapKiemTraMang(a,n,j);
  XuatMang(a,n);
  ChinhPhuongLe(a,n);
  printf("\nVi tri cac phan tu lon nhat la\t");
  VTCacMax(a,n); 
int AmMax=TimAmMax(a,n);
  if(AmMax==-1)
     printf("\nMang khong co phan tu am");
  else
	 printf("\nPhan tu am lon nhat la %d",a[AmMax]);
int DuongMin=TimDuongMin(a,n);
  if(DuongMin==-1)
     printf("\nMang khong co phan tu duong");
  else
	 printf("\nPhan tu duong nho nhat la %d",a[DuongMin]);
int TongChan=TongVTPTChan(a,n);
     printf("\nTong cac vi tri phan tu chan co trong mang la:%d",TongChan);
     SapXep(a,n); 
}