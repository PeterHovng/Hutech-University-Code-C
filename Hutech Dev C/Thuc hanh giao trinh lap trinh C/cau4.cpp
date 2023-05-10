/*Chương trình kiểm tra số nhập trên bàn phím có phải là số chẵn in ra màn hình*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	int a;
	printf ("Moi nhap so: ");
	scanf ("%d", &a);
	if ((a%2)==0)
	{
		printf (" So %d ban vua nhap la so chan/n ", a);
	}
	else{
	printf ("So %d ban vua nhap khong phai la so chan/n ", a);
}
	return 0;
}