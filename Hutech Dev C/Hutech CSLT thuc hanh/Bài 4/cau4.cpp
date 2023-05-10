#include <stdio.h>
#include <math.h>
#include <conio.h>
bool KTGio(int a)
{
		if(a>=6 && a<=18)
		return 0; 
	    return 1; 
			}
int TienLuong(int &a,int &b)
	{
	int kq;
	if(b<=12)
		kq=(b-a)*6000;
	else
	if(a>=12)
		kq=(b-a)*7500;
	else
		kq=((12-a)*6000)+((b-12)*7500);
	return	kq;
}
int main()
{
int a,b ;
	printf ("Nhap vao gio vao ca: ");
	scanf ("%d", &a);
	printf ("Nhap vao gio ra ca: ");
	scanf ("%d", &b);
	int kq=TienLuong(a,b);
	printf ("Tong so gio %d ",(b-a)) ;
	if(KTGio(a)==1 || KTGio(b)==1)
		printf("Nhap sai gio de nghi nhap lai: ");
	else
		printf("So Tien Nhan Duoc La %d:  ", kq);
	return 0;
}
