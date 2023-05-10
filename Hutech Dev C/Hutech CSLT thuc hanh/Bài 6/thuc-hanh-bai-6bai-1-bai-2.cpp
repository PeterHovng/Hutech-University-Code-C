#include <stdio.h>
#define MAX 100
struct PhanSo
{
    int tu, mau;
};

void nhapPs(PhanSo &ps)
{
    printf("Nhap tu so: "); scanf("%d", &ps.tu);
    do {
        printf("Nhap mau so: "); scanf("%d", &ps.mau);
        if(ps.mau == 0)
            printf("Mau so phai khac 0. vui long nhap lai.\n");
        else break;
    }while(true);

    if(ps.mau < 0) {
        ps.mau = -ps.mau;
        ps.tu = -ps.tu;
    }
}

void xuatPs(PhanSo ps)
{
    printf("%d/%d\n", ps.tu, ps.mau);
}

int timUCLN(int a, int b)
{
    while(a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
        return a;
}

void rutGonPs(PhanSo &ps)
{
    if(ps.tu != 0) {
        while(timUCLN(ps.tu, ps.mau) != 1) {
            int UC = timUCLN(ps.tu, ps.mau);
            ps.tu /= UC;
            ps.mau /= UC;
        }
    }
}

PhanSo tongHaiPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo tong;
    tong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    tong.mau = ps1.mau * ps2.mau;
    rutGonPs(tong);
    return tong;
}

int soSanh(PhanSo ps1, PhanSo ps2)
{
   return ps1.tu*ps2.mau-ps2.tu*ps1.mau;
}

void nhapSoPhanTu(int &n){
	do{
		printf("\nNhap so luong phan so (1-100): ");
		scanf("%d",&n);
	}while(n<=0 || n>100);
}
void nhapMangPS(PhanSo ps[],int n){
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan so thu %d = \n",i);
		nhapPs(ps[i]);
	}
}

void xuatMangPS(PhanSo ps[],int n){
	for(int i=0;i<n;i++)
	 xuatPs(ps[i]);
}

PhanSo tongDayPS(PhanSo ps[],int n){
	PhanSo tong=ps[0];
	for(int i=1;i<n;i++)
	  tong=tongHaiPhanSo(tong , ps[i]);
	rutGonPs(tong);
	return tong;
}

PhanSo psMax(PhanSo ps[],int n){
	PhanSo max=ps[0];
	for(int i=1;i<n;i++)
	 if(soSanh(max,ps[i])<0) max=ps[i];
	return max;
}

void doiCho(PhanSo &a, PhanSo &b){
	PhanSo t=a;
	a=b;
	b=t;
}

void sortTang(PhanSo ps[],int n){
	for(int i=0;i<n-1;i++)
	     for(int k=i+1;k<n;k++)
	          if( soSanh(ps[i],ps[k])>0)
	             doiCho(ps[i],ps[k]);
}

int main()
{
    PhanSo ps1, ps2;
    nhapPs(ps1);
    printf("Phan so la: ");
    xuatPs(ps1);
    rutGonPs(ps1);
    printf("Phan so sau khi rut gon la: ");
    xuatPs(ps1);
    printf("Nhap 2 phan so.\nPhan so dau tien.\n");
    nhapPs(ps1);
    printf("Phan so thu hai.\n");
    nhapPs(ps2);
    PhanSo tog=tongHaiPhanSo(ps1, ps2);
    printf("Tong hai phan so la: ");
    xuatPs(tog);
    int so=soSanh(ps1, ps2);
    if(so==0) printf("\nHai phan so tren bang nhau.");
    else
       if(so>0) printf("\n Phan So 1 > Phan so 2");
       else     printf("\n Phan So 1 < Phan so 2");
    PhanSo a[MAX];
    int n;
    nhapSoPhanTu(n);
    nhapMangPS(a,n);
    printf("\nMang moi nhap: ");
    xuatMangPS(a,n);
    PhanSo tong=tongDayPS(a,n);
    printf("\nTong day PS tren = ");
    xuatPs(tong);
    PhanSo max=psMax(a,n);
    printf("\nPhan so lon nhat = ");
    xuatPs(max);
    sortTang(a,n);
    printf("\nMang sau khi sap xep tang dan: ");
    xuatMangPS(a,n);
}