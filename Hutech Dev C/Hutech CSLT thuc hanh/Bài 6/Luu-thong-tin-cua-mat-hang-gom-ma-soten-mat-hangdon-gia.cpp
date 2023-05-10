#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Mathang{
	char Maso[9];
	char Tenmathang[21];
	int Dongia;
}MH;
void Nhap (MH &a){
    fflush(stdin);
	printf("Nhap ma so: ");
	gets(a.Maso);
	printf("Nhap ten mat hang: ");
	gets(a.Tenmathang);
	printf("Nhap don gia: "); scanf("%d",&a.Dongia);
}
void Xuat (MH a){
	printf("Ma so:%s \t Ten mat hang:%s \t Don gia:%d",a.Maso,a.Tenmathang,a.Dongia);
}
int main()
{
	MH a;
	printf("Nhap thong tin cua mat hang:\n");
	Nhap(a);
	printf("\nCac thong tin cua mat hang:\n ");
	Xuat(a);
	return 0;
}