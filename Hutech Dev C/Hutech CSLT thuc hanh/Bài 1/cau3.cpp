#include <stdio.h>
#include <math.h>
int main (){
	//cau a
	int a; printf ("Moi nhap 1 so nguyen: "); 
	scanf ("%d", &a);
	printf ("\nSo nguyen da nhap la %d", a);
	//cau b
	float b; printf ("\nMoi nhap 1 so thuc: "); 
	scanf("%f", &b);
	printf ("\nSo thuc da nhap la %f", b);
	//cau c
	char c; printf ("\nMoi nhap 1 ki tu: ");
	fflush(stdin); //xóa bộ nhớ đệm
	scanf ("%c",&c);
	printf ("\nKi tu da nhap la %c", c);
	//cau d
	int x, y, s, g, h, k, t;
	printf ("\nMoi nhap hai so nguyen de cong: ");
	scanf ("%d%d", &x, &y);
	s = x + y;
	printf ("\nTong hai so la: %d\n", s);
	
	printf ("\nMoi nhap hai so nguyen de tru: ");
	scanf ("%d%d", &x, &y);
	h = x - y;
	printf ("\nHieu hai so la: %d\n", x-y);
	
	printf ("\nMoi nhap hai so nguyen de nhan: ");
	scanf ("%d%d", &x, &y);
	k = x * y;
	printf ("\nTich hai so la: %d\n", x*y);
	
	printf ("\nMoi nhap hai so nguyen de chia: ");
	scanf ("%d%d", &x, &y);
	t = x / y;
	printf ("\nThuong hai so la: %d\n", x/y);
	
	printf ("\nMoi nhap hai so nguyen de chia du: ");
	scanf ("%d%d", &x, &y);
	t = x % y;
	printf ("\nChia du hai so la: %d\n", x%y);
	return 0;
}