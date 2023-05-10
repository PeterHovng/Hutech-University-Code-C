/*Chương trình nhập tháng in số ngày tương ứng bằng if...else if*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	int n;
	printf ("Nhap thang: ");
	scanf ("%d", &n);
	if((n==1)||(n==3)||(n==5)||(n==7)||(n==8)||(n==10)||(n==12)){
		printf ("co 31 ngay");
	}
	else if (n==2){
		printf ("co 28 ngay");
	}
	else if ((n==4)||(n==6)||(n==9)||(n==11)){
		printf ("co 30 ngay");
	}
	else{
		printf (" So thang ban vua nhap khong hop le!");
	}
	return 0;
}

