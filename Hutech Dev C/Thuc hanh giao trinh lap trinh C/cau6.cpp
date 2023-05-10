/*Chương trình nhập tháng có bao nhiêu ngày bằng switch...case*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	int n;
	printf ("Nhap so thang: ");
	scanf ("%d", &n);
	switch(n){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf ("co 31 ngay");
			break;
		case 4: case 6 : case 9: case 11:
			printf ("co 30 ngay");
			break;
		case 2:
			printf ("co 28 ngay");
			break;
		default:
			printf ("so thang ban vua nhap khong hop le!");
	}
	return 0;
}