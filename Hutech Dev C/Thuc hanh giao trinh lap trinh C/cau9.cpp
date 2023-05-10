/*Chương trình S = 1+2+3...n*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	int n; 
	printf ("Nhap gia tri n: ");
	scanf ("%d", &n );
	int sum = 0;
	for (int i=1; i<=n; i++)
		sum += i;
		printf ("%d", sum);
	return 0;
}