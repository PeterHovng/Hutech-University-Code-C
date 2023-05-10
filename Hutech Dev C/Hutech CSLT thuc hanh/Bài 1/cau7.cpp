#include <stdio.h>
#include <math.h>
int main(){
	unsigned int n;
	printf("Nhap vao so nguyen duong co 3 chu so: ");
	scanf("%u", &n);
	int donvi = n%100%10;
	int chuc = n%100/10;
	int tram = n/100;
	printf("So dao nguoc la: %d%d%d", donvi, chuc, tram);
	return 0;
}