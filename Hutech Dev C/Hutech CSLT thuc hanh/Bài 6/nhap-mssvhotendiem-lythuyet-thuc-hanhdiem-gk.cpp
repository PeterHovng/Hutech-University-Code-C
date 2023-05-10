#include <stdio.h>
struct ttSinhVien
{
	char mssv[11];
	char hoten[31];
	float diemGK;
	float diemTH;
	float diemLT;
};
typedef struct ttSinhVien SV;
void NhapSV(SV &sv){
	fflush(stdin);
	printf("Nhap mssv: "); gets(sv.mssv);
	printf("Nhap ho ten: "); gets(sv.hoten);
	printf("Nhap Diem GK: "); scanf("%f",&sv.diemGK);
	printf("Nhap Diem thuc hanh: "); scanf("%f",&sv.diemTH);	
	printf("Nhap Diem ly thuyet: "); scanf("%f",&sv.diemLT);
}
void XuatSV(SV a){
	printf("%s\t %s\t %.2f \t %.2f \t %.2f",a.mssv,a.hoten,a.diemGK,a.diemTH,a.diemLT);
}
float DiemTongKet(SV sv){
	return sv.diemGK*0.1+sv.diemTH*0.3+sv.diemLT*0.6;
}
void XuatMangSV(SV a[],int n){
	for(int i=0;i<n;i++)
	{
		XuatSV(a[i]);
		printf("\tdiem ket thuc mon %.2f",DiemTongKet(a[i]));
		printf("\n");
	}
}
int main(){
	SV sv;
	NhapSV(sv);
	XuatSV(sv);
	float kq=DiemTongKet(sv);
	printf("Diem tong ket: %.2f",kq);
}
