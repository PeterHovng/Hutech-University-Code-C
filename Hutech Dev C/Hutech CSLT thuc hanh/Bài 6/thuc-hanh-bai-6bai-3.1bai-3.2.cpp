#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct SinhVien
{
    char mssv[11];
    char ten[101];
    int day,month,year;
    char gt[4];
    char lop[8];
    float toan,ly,tinhoc;
    float DTB;
}sv;
void NhapSV(sv &a)
{
	int mssv;
    printf("Nhap Sinh Vien\n");
	printf("Nhap MSSV: ");
    fflush(stdin);
    gets(a.mssv);
    printf("Nhap Ten SV : ");
    fflush(stdin);
    gets(a.ten);
    printf("Nhap ngay/thang/nam sinh : ");
    scanf("%2d/%2d/%4d",&a.day,&a.month,&a.year);
    printf("Nhap gioi tinh (Nam/Nu) : ");
    fflush(stdin);
    gets(a.gt);
    printf("Nhap Lop : ");
    fflush(stdin);
    gets(a.lop);
    printf("Nhap diem Toan : ");
    scanf("%f",&a.toan);
    printf("Nhap diem Ly : ");
    scanf("%f",&a.ly);
    printf("Nhap diem Tin hoc : ");
    scanf("%f",&a.tinhoc);
    a.DTB=(a.toan+a.ly+a.tinhoc)/3;
}
void XuatSV(sv a)
{
    printf("\n-------------Xuat Sinh Vien-------------");
    printf("\nMSSV : %s",a.mssv);
    printf("\nTen SV : %s",a.ten);
    printf("\nNgay/thang/nam sinh : %d/%d/%2d",a.day,a.month,a.year);
    printf("\nGioi tinh (Nam/Nu) : %s",a.gt);
    printf("\nLop : %s",a.lop);
    printf("\nToan : %.2f",a.toan);
    printf("\nLy : %.2f",a.ly);
    printf("\nTin hoc : %.2f",a.tinhoc);
    printf("\nDiem trung binh: %.2f",a.DTB);
    printf("\n----------------------------------------");
}
int main()
{
    sv a,b[100];
    int n;
    NhapSV(a);
    XuatSV(a);
    return 0;
}