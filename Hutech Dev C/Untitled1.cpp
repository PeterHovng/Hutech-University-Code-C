//Bài struct mặt hàng
#include<stdio.h>
#include<conio.h>
#include<math.h>
typedef struct MatHang(){
	char [];
	char [];
	int dongia;
}MH;
void nhap(MH &a){
	fflush (stdin);
	printf ("Ma so: ");
	gets (a.maso);
	printf ("Ten mat hang: ");
	gets (a.mathang);
	printf ("don gia: ");
	scanf ("%d", a.dongia);
	
}
void xuat (MH a){
	printf ("Maso: %s \tTen mat hang: %s \tdongia: %d", a.maso, a.mathang, a.donggia);
}
int main (){
	MH (a)
	printf ("Nhap thong tin don hang: ");
	nhap (a);
	printf ("Cac thong tin don hang: ");
	xuat (a);
	return 0;
}
