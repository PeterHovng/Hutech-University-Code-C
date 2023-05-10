#include <stdio.h>
#define MAX 100
void NhapSL(int &n){
	do{
		printf("Nhap so phan tu 0<sl<100: ");
		scanf("%d",&n);
		if(n<=0 || n>100)
		  printf("So luong phan tu khong hop le, xin vui long nhap lai");
	}while(n<=0 || n>100);
}
//Cau a: Nhap mang so nguyen gom n phan tu (0 < n < = 100)
void NhapMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu vi tri a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
//Cau b: Xuat mang so nguyen
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++){
	 printf("%d",a[i]);
    }
}
//Cau c: Tim vi tri phan tu duong dau tien. Xuat ra vi tri va gia tri phan tu duong dau tien tim duoc neu co
int ViTriDuongDT(int a[], int n)
{
	{
		for (int i=0; i<n; i++)
		if (a[i]>0)
		return i; 
	} 
	return -1;
}
//Cau d: Tim vi tri phan tu duong cuoi cung. Xuat ra vi tri va gia tri phan tu duong cuoi cung tim duoc neu co
int ViTriDuongCC(int a[], int n)
{
	{
     for (int i=n-1; i>=0; i--)
     if (a[i]>0)
     return i;
    }
    return -1;
}
//Cau e: Tim gia tri phan tu lon nhat
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
//Cau f: Dem so phan tu lon nhat
int DemMax(int a[],int n)
 {
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(TimMax(a,n)==a[i])
		    dem++;
	}
	return dem;
}
//Cau g: Xuat ra vi tri cua cac phan tu lon nhat
void VTCacMax(int a[],int n)
 {
	for(int i=0;i<n;i++)
	{
		if(TimMax(a,n)==a[i])
		    printf("%d\t",i);
	}
}
//Cau h: Them 1 phan tu moi vao dau mang
void ThemPhanTuDauMang(int a[],int &n,int x)
{
    printf("\nNhap x:");
    scanf("%d",&x);
	for(int i=n;i>0;i--){
	  a[i]=a[i-1];
    }
    a[0]=x;
    n++;
}
//Cau i: Them 1 phan tu moi vao  vi tri k trong mang (k do nguoi dung nhap, 0<k<=MAX, voi MAX la kich thuoc cap phat mang)
void ThemPhanTuViTriNhap(int a[],int &n,int x2,int k)
{
    printf("\nNhap phan tu them x':");scanf("%d",&x2);
    printf("Nhap vi tri duoc them k:");scanf("%d",&k);
	for(int i=n;i>k;i--)
	  a[i]=a[i-1];
	n++;
    a[k]=x2;
    printf("Mang sau khi them phan tu %d vao vi tri %d:\t",x2,k);
    for(int i=0;i<n;i++)
	 printf("%d",a[i]);
}
//Cau j: Xoa phan tu dau mang
void XoaPhanTuDauMang(int a[],int &n)
{
	for(int i=0;i<n-1;i++){
	  a[i]=a[i+1];
    }
    n--;
} 
//Cau k: Xoa phan tu tai vi tri k (k do nguoi dung nhap, 0<k<MAX, vo MAX la kich thuoc cap phat mang)
void XoaPhanTuViTriNhap(int a[],int &n,int k)
{
	int i;
    printf("\nNhap vi tri duoc xoa k:");scanf("%d",&k);
	for(i=k;i<n-1;i++){
	  a[i]=a[i+1];
    }
    n--;
    printf("Mang sau khi xoa phan tu %d o vi tri %d:\t",a[i],k);
    for(i=0;i<n;i++)
	 printf("%5d",a[i]);
}
//Cau l: Kiem tra mang co chua so le khong?
int KiemTraSoLe(int a[], int n)
{
	for( int i=0;i<n;i++)
		if(a[i]%2!=0)
		{
			return -1;
			break;
		}
	return 1;
}
int main(){
	int a[MAX],n,max,x,k,x2;
	NhapSL(n);
	NhapMang(a,n);
	 printf("Mang phan tu=");
	XuatMang(a,n);
	int DuongDauTien=ViTriDuongDT(a,n);
	if(DuongDauTien==-1)
	 printf("\nMang khong co phan tu duong");
	else
	 printf("\nPhan tu duong dau tien la %d,nam tai vi tri %d",a[DuongDauTien],DuongDauTien);
	 //
	int DuongCuoiCung=ViTriDuongCC(a,n);
	if(DuongCuoiCung==-1)
	 printf("\nMang khong co phan tu duong");
	else
	 printf("\nPhan tu duong cuoi cung la %d,nam tai vi tri %d",a[DuongCuoiCung],DuongCuoiCung);
	 printf("\nPhan tu lon nhat la %d",TimMax(a,n)); 
	 printf("\nSo luong phan tu lon nhat la %d",DemMax(a,n));
	 printf("\nVi tri cac phan tu lon nhat la\t");
	VTCacMax(a,n);
	ThemPhanTuDauMang(a,n,x);
	 printf("Mang sau khi them phan tu dau mang:\t");
	XuatMang(a,n);
    ThemPhanTuViTriNhap(a,n,x2,k);
    XoaPhanTuDauMang(a,n); 
     printf("\nMang sau khi xoa phan tu dau mang:\t");
    XuatMang(a,n);
    XoaPhanTuViTriNhap(a,n,k); 
    if( KiemTraSoLe(a,n)==-1)
		printf("\nMang co chua so le");
	else
		printf("\nMang khong co chua so le");
	KiemTraSoLe(a,n);
}