#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int a = 100, b = 200;
	printf ("Moi ban nhap kitu: ");
	char kitu; scanf ("%c", &kitu);
	switch (kitu){
		case '+':
			printf ("%d", a+b);
			break;
		case '-':
			printf ("%d", a-b);
			break;
		case '*':
			printf ("%d", a*b);
			break;
		case '/':
			printf ("%d", a/b);
			break;
		case '%':
			printf ("%d", a%b);
		default: printf ("kitu ban vua nhap khong hop le!");
	}
	return 0;
}