#include <stdio.h>
struct ttDiem{
 int x;
 int y;
};
typedef struct ttDiem Diem;
void NhapDiem(Diem &a){
	printf("Nhap hoanh do: "); scanf("%d",&a.x);
	printf("Nhap tung do: "); scanf("%d",&a.y);
}
void XuatDiem(Diem a){
	printf("(%d,%d)",a.x,a.y);
}
Diem tinhTong(Diem a,Diem b)
{
	Diem kq;
	kq.x=a.x+b.x;
	kq.y=a.y+b.y;
	return kq;
}
int main(){
	Diem a,b,kq;
	printf("nhap diem A: \n");
	NhapDiem(a);
	printf("nhap diem B: \n");
	NhapDiem(b);
	kq=tinhTong(a,b);
	XuatDiem(a);
	XuatDiem(b);
	printf("a+b la: ");
	XuatDiem(kq);
}