//Thue bao A
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang{
	int ngay, thang, nam;	
}NT;

void NhapNgayThang(NT &x){
	scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x){
	printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct ThueBao{
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
}TB;

void Input(TB &x){
	scanf("%s", x.tbao);
	getchar();
	gets(x.hoten);
	NhapNgayThang(x.NT);
	scanf("%d", &x.sdt);
	getchar();
	scanf("%s", x.loai);
	scanf("%d", &x.noimang);
	scanf("%d", &x.ngoaimang);
	getchar();
}

void Output(TB x){
	printf("%s - %s - ", x.tbao, x.hoten);
	XuatNgayThang(x.NT);
	printf("0%d - ", x.sdt);
	if(strcmp(x.loai, "TT") == 0)
    	printf("Tra Truoc - ");
 	else if(strcmp(x.loai, "TS") == 0)
    	printf("Tra Sau - ");
	printf("%d - %d", x.noimang, x.ngoaimang);
}

int main(){
	TB x;
	Input(x);
	Output(x);
	return 0;
}

//Thue bao B
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang{
	int ngay, thang, nam;	
}NT;

void NhapNgayThang(NT &x){
	scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x){
	printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct ThueBao{
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
}TB;

void Input(TB &x){
	scanf("%s", x.tbao);
	getchar();
	gets(x.hoten);
	NhapNgayThang(x.NT);
	scanf("%d", &x.sdt);
	getchar();
	scanf("%s", x.loai);
	scanf("%d", &x.noimang);
	scanf("%d", &x.ngoaimang);
	getchar();
}

void Output(TB x){
	printf("%s - %s - ", x.tbao, x.hoten);
	XuatNgayThang(x.NT);
	printf("0%d - ", x.sdt);
	if(strcmp(x.loai, "TT") == 0)
    	printf("Tra Truoc - ");
 	else if(strcmp(x.loai, "TS") == 0)
    	printf("Tra Sau - ");
	printf("%d - %d", x.noimang, x.ngoaimang);
}

int main(){
	int n; scanf("%d", &n);
	TB *a = (TB*)malloc(n * sizeof(TB));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
		printf("\n");
	}
	return 0;
}

//Thue bao C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang {
	int ngay, thang, nam;
} NT;

void NhapNgayThang(NT &x) {
	scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x) {
	printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct ThueBao {
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
} TB;

void Input(TB &x) {
	scanf("%s", x.tbao);
	getchar();
	gets(x.hoten);
	NhapNgayThang(x.NT);
	scanf("%d", &x.sdt);
	getchar();
	scanf("%s", x.loai);
	scanf("%d", &x.noimang);
	scanf("%d", &x.ngoaimang);
	getchar();
}

void Output(TB x) {
	printf("%s - %s - ", x.tbao, x.hoten);
	XuatNgayThang(x.NT);
	printf("0%d - ", x.sdt);
	if(strcmp(x.loai, "TT") == 0)
		printf("Tra Truoc - ");
	else if(strcmp(x.loai, "TS") == 0)
		printf("Tra Sau - ");
	printf("%d - %d", x.noimang, x.ngoaimang);
}

int main() {
	int n;
	scanf("%d", &n);
	TB *a = (TB*)malloc((n + 1) * sizeof(TB));
	for(int i = 0; i < n; i++) {
		Input(a[i]);
	}
	for(int i = n; i > 0; i--) {
		a[i] = a[i - 1];
	}
	Input(a[0]);
	++n;
	for(int i = 0; i < n; i++) {
		Output(a[i]);
		printf("\n");
	}
	free(a);
	return 0;
}

//Thue bao D
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang {
	int ngay, thang, nam;
} NT;

void NhapNgayThang(NT &x) {
	scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x) {
	printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct ThueBao {
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
} TB;

void Input(TB &x) {
	scanf("%s", x.tbao);
	getchar();
	gets(x.hoten);
	NhapNgayThang(x.NT);
	scanf("%d", &x.sdt);
	getchar();
	scanf("%s", x.loai);
	scanf("%d", &x.noimang);
	scanf("%d", &x.ngoaimang);
	getchar();
}

void Output(TB x) {
	printf("%s - %s - ", x.tbao, x.hoten);
	XuatNgayThang(x.NT);
	printf("0%d - ", x.sdt);
	if(strcmp(x.loai, "TT") == 0)
		printf("Tra Truoc - ");
	else if(strcmp(x.loai, "TS") == 0)
		printf("Tra Sau - ");
	printf("%d - %d", x.noimang, x.ngoaimang);
}

int main() {
	int n;
	scanf("%d", &n);
	TB *a = (TB*)malloc((n + 1) * sizeof(TB));
	for(int i = 0; i < n; i++) {
		Input(a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(strcmp(a[j].tbao, a[j + 1].tbao) > 0){
				TB tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
		printf("\n");
	}
	free(a);
	return 0;
}

//Thue bao E
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang {
	int ngay, thang, nam;
} NT;

void NhapNgayThang(NT &x) {
	scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x) {
	printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct ThueBao {
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
} TB;

void Input(TB &x) {
	scanf("%s", x.tbao);
	getchar();
	gets(x.hoten);
	NhapNgayThang(x.NT);
	scanf("%d", &x.sdt);
	getchar();
	scanf("%s", x.loai);
	scanf("%d", &x.noimang);
	scanf("%d", &x.ngoaimang);
	getchar();
}

void Output(TB x) {
	printf("%s - %s - ", x.tbao, x.hoten);
	XuatNgayThang(x.NT);
	printf("0%d - ", x.sdt);
	if(strcmp(x.loai, "TT") == 0)
		printf("Tra Truoc - ");
	else if(strcmp(x.loai, "TS") == 0)
		printf("Tra Sau - ");
	printf("%d - %d", x.noimang, x.ngoaimang);
}

int main(){
	int n;
	scanf("%d", &n);
	TB *a = (TB*)malloc((n + 1) * sizeof(TB));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	char check[12];
	scanf("%s", check);
	for(int i = 0; i < n; i++) 
		if(strcmp(check, "TT") == 0 && strcmp(a[i].loai, "TT") == 0){
			Output(a[i]);
			printf("\n");
		}
		else if(strcmp(check, "TS") == 0 && strcmp(a[i].loai, "TS") == 0){
			Output(a[i]);
			printf("\n");
		}
	free(a);
	return 0;
}

//Thue bao F
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang{
	int ngay, thang, nam;
} NT;

void NhapNgayThang(NT *x){
	scanf("%d%d%d", &x->ngay, &x->thang, &x->nam);
}

void XuatNgayThang(NT x){
	printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct ThueBao{
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
} TB;

void Input(TB *x){
	scanf("%s", x->tbao);
	getchar();
	gets(x->hoten);
	NhapNgayThang(&x->NT);
	scanf("%d", &x->sdt);
	getchar();
	scanf("%s", x->loai);
	scanf("%d", &x->noimang);
	scanf("%d", &x->ngoaimang);
	getchar();
}

void Output(TB x){
	printf("%s - %s - ", x.tbao, x.hoten);
	XuatNgayThang(x.NT);
	printf("0%d - ", x.sdt);
	if(strcmp(x.loai, "TT") == 0)
		printf("Tra Truoc - ");
	else if(strcmp(x.loai, "TS") == 0)
		printf("Tra Sau - ");
	printf("%d - %d", x.noimang, x.ngoaimang);
}

int main(){
	int n;
	scanf("%d", &n);
	TB *a = (TB*)malloc(n * sizeof(TB));
	for(int i = 0; i < n; i++){
		Input(&a[i]);
	}
	int check; scanf("%d", &check);
	int ok = 1;
	for(int i = 0; i < n; i++){
		if(check < a[i].NT.nam){
			Output(a[i]);
			printf("\n");
			ok = 0;
		}
	}
	if(ok) printf("Not Found\n");
	free(a);
	return 0;
}

//Thue bao G
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long

typedef struct NgayThang {
    int ngay, thang, nam;
} NT;

void NhapNgayThang(NT* x) {
    scanf("%d%d%d", &x->ngay, &x->thang, &x->nam);
}

typedef struct ThueBao {
    char tbao[12];
    char hoten[51];
    struct NgayThang NT;
    int sdt;
    char loai[3];
    int ngoaimang;
    int noimang;
    int tiencuoc;
} TB;

void Input(TB* x) {
    gets(x->tbao);
    gets(x->hoten);
    NhapNgayThang(&x->NT);
    scanf("%d", &x->sdt);
    getchar();
    scanf("%s", x->loai);
    scanf("%d", &x->noimang);
    scanf("%d", &x->ngoaimang);
    getchar();
}

void Output(TB x) {
    int tiencuoc = (x.noimang * 3000) + (x.ngoaimang * 1500);
    printf("%s - %d\n", x.tbao, tiencuoc);
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    TB* a = (TB*)malloc(n * sizeof(TB));
    for (int i = 0; i < n; i++) {
        Input(&a[i]);
    }
    for (int i = 0; i < n; i++) {
        Output(a[i]);
    }
    free(a);
    return 0;
}

//Thue bao H
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang{
	int ngay, thang, nam;
} NT;

void NhapNgayThang(NT *x){
	scanf("%d%d%d", &x->ngay, &x->thang, &x->nam);
}

typedef struct ThueBao{
	char tbao[12];
	char hoten[51];
	struct NgayThang NT;
	int sdt;
	char loai[3];
	int ngoaimang;
	int noimang;
	int tiencuoc;
} TB;

void Input(TB* x){
    gets(x->tbao);
    gets(x->hoten);
    NhapNgayThang(&x->NT);
    scanf("%d", &x->sdt);
    getchar();
    scanf("%s", x->loai);
    scanf("%d", &x->noimang);
    scanf("%d", &x->ngoaimang);
    getchar();
}

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	TB *a = (TB*)malloc(n * sizeof(TB));
	for(int i = 0; i < n; i++){
		Input(&a[i]);
	}
	int cnt_tt = 0, cnt_ts = 0;
	for(int i = 0; i < n; i++){
		if(strstr(a[i].loai, "TT") != NULL)
			++cnt_tt;
		else if(strstr(a[i].loai, "TS") != NULL)
			++cnt_ts;
	}
	printf("%d\n%d", cnt_tt, cnt_ts);
	free(a);
	return 0;
}
