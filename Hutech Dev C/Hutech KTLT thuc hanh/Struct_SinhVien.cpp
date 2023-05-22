//SINH VIEN A
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
}NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}

int main(){
	NS x;
	NhapNgaySinh(x);
	XuatNgaySinh(x);
}
//SINH VIEN B
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}

typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x') 
		printf("Nam - ");
	else if(x.GT == 'y') 
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf", x.Lop, x.DTB);
	return 0;
}

int main(){
	SV x;
	Input(x);
	Output(x);
	return 0;
}
//SINH VIEN C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x') 
		printf("Nam - ");
	else if(x.GT == 'y') 
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
	int n;
	scanf("%d", &n);
	SV *a = (SV *)malloc(n * sizeof(SV));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
	}
	free(a);
	return 0;
}
//SINH VIEN D
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x') 
		printf("Nam - ");
	else if(x.GT == 'y') 
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
	int n;
	scanf("%d", &n);
	SV *a = (SV *)malloc(n * sizeof(SV));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i].DTB > 5.00){
			Output(a[i]);
		}
	}
	free(a);
	return 0;
}
//SINH VIEN E
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[100];
	char HoTen[100];
	char GT;
	struct NgaySinh NS;
	char Lop[100];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x') 
		printf("Nam - ");
	else if(x.GT == 'y') 
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
	int n;
	scanf("%d", &n);
	SV *a = (SV *)malloc(n * sizeof(SV));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n; i++){
		if(strstr(a[i].Lop, "DTH") != NULL){
			Output(a[i]);
		}
		if(strstr(a[i].Lop, "CTH") != NULL){
			Output(a[i]);
		}
	}
	free(a);
	return 0;
}

//SINH VIEN F
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x') 
		printf("Nam - ");
	else if(x.GT == 'y') 
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	SV *a = (SV *)malloc(n * sizeof(SV));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i].GT == 'y'){
			++cnt;
		}
	}
	printf("%d", cnt);
	free(a);
	return 0;
}

//SINH VIEN G
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x') 
		printf("Nam - ");
	else if(x.GT == 'y') 
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
	int n;
	scanf("%d", &n);
	double max = -1e9;
	SV *a = (SV *)malloc(n * sizeof(SV));
	for(int i = 0; i < n; i++){
		Input(a[i]);
		max = fmax(max, a[i].DTB);
	}
	for(int i = 0; i < n; i++){
		if(a[i].DTB == max){
			Output(a[i]);
		}
	}
	free(a);
	return 0;
}
//SINH VIEN H
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Them sinh vien vao cuoi danh sach

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x')
		printf("Nam - ");
	else if(x.GT == 'y')
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
    int n;
    scanf("%d", &n);
    SV* a = (SV*)malloc(n * sizeof(SV));
    for(int i = 0; i < n; i++){
        Input(a[i]);
    }
    ++n;
    a = (SV*)realloc(a, n * sizeof(SV));
    Input(a[n - 1]);
    for(int i = 0; i < n; i++){
        Output(a[i]);
    }
    free(a);
    return 0;
}
//SINH VIEN H
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Them sinh vien vao cuoi danh sach

typedef struct NgaySinh{
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x){
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x){
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien{
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x){
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x){
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x')
		printf("Nam - ");
	else if(x.GT == 'y')
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main(){
    int n;
    scanf("%d", &n);
    SV* a = (SV*)malloc(n * sizeof(SV));
    for(int i = 0; i < n; i++){
        Input(a[i]);
    }
    ++n;
    a = (SV*)realloc(a, n * sizeof(SV));
    Input(a[n - 1]);
    for(int i = 0; i < n; i++){
        Output(a[i]);
    }
    free(a);
    return 0;
}
//SINH VIEN I
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh {
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x) {
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x) {
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien {
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x) {
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x) {
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x')
		printf("Nam - ");
	else if(x.GT == 'y')
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main() {
	int n;
	scanf("%d", &n);
	SV *a = (SV *)malloc(n * sizeof(SV));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	char x[11];
	scanf("%s", x);
	int index = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].MSSV, x) == 0){
			index = i;
			break;
		}
	}
	if(index != -1){
		for(int i = index; i < n - 1; i++){
			a[i] = a[i + 1];
		}
		n--;
	}
	else{
		printf("NOT FOUND\n", x);
		return 0;
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
	}
	free(a);
	return 0;
}
//SINH VIEN J
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgaySinh {
	int Ngay, Thang, Nam;
} NS;

void NhapNgaySinh(NS &x) {
	scanf("%d%d%d", &x.Ngay, &x.Thang, &x.Nam);
}

void XuatNgaySinh(NS x) {
	printf("%d/%d/%d", x.Ngay, x.Thang, x.Nam);
}
//---------------------------------
typedef struct Sinhvien {
	char MSSV[11];
	char HoTen[51];
	char GT;
	struct NgaySinh NS;
	char Lop[11];
	double DTB;
} SV;

void Input(SV &x) {
	scanf("%s", x.MSSV);
	getchar();
	gets(x.HoTen);
	scanf("%c", &x.GT);
	NhapNgaySinh(x.NS);
	scanf("%s", x.Lop);
	scanf("%lf", &x.DTB);
}

int Output(SV x) {
	printf("%s - %s - ", x.MSSV, x.HoTen);
	if(x.GT == 'x')
		printf("Nam - ");
	else if(x.GT == 'y')
		printf("Nu - ");
	XuatNgaySinh(x.NS);
	printf(" - %s - %.2lf\n", x.Lop, x.DTB);
	return 0;
}
//---------------------------------
int main() {
	int n;
	scanf("%d", &n);
	SV *a = (SV *)malloc(n * sizeof(SV));
	int max = -1e9;
	for(int i = 0; i < n; i++){
		Input(a[i]);
		max = fmax(max, a[i].DTB);
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j].DTB < a[j + 1].DTB){
				SV tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
	}
	free(a);
	return 0;
}