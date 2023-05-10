#include<stdio.h>
struct Sach{
	char TenSach[31];
	char TenNhaXuatBan[21];
	int DonGia; 
}; 
typedef struct Sach SA;
void NhapTT1QS(SA &a){
	printf("Nhap ten sach: ");
	gets(a.TenSach);
	printf("Nhap ten nha xuat ban: ");
	gets(a.TenNhaXuatBan);
	fflush(stdin);
	printf("Nhap don gia: ");
	scanf("%d",&a.DonGia);
}
void XuatTT1QS(SA a){
	printf("%s\t%s\t%d",a.TenSach,a.TenNhaXuatBan,a.DonGia);
}
int main(){
	SA a;
	NhapTT1QS(a);
	XuatTT1QS(a);
}