/*Chương trình nhập vào bán kính hình tròn tính diện tích*/
#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main (){
	float R;
	printf ("Moi nhap ban kinh: ");
	scanf ("%f", &R);
	printf ("Dien tich cua hinh tron la: %.2f", 2*PI*R);
	return 0;
}