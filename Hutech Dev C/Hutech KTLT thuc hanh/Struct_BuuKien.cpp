//BUU KIEN A
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

typedef struct BuuKien{
	int ma;
	char tgui[51];
	char tnhan[51];
	double tluong;
	struct NgayThang NT;
	char nd[101];
	int dgia;
}BK;

void Input(BK &x){
	scanf("%d", &x.ma);
	getchar();
	gets(x.tgui);
	gets(x.tnhan);
	scanf("%lf", &x.tluong);
	NhapNgayThang(x.NT);
	getchar();
	gets(x.nd);
	scanf("%d", &x.dgia);
}

void Output(BK x){
	printf("%d - ", x.ma);
	printf("%s - ", x.tgui);
	printf("%s - ", x.tnhan);
	printf("%.2lf - ", x.tluong);
	XuatNgayThang(x.NT);
	printf("%s - ", x.nd);
	printf("%d", x.dgia);
}

int main(){
	BK x;
	Input(x);
	Output(x);
}

//BUU KIEN B
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

typedef struct BuuKien{
	int ma;
	char tgui[51];
	char tnhan[51];
	double tluong;
	struct NgayThang NT;
	char nd[101];
	int dgia;
}BK;

void Input(BK &x){
	scanf("%d", &x.ma);
	getchar();
	gets(x.tgui);
	gets(x.tnhan);
	scanf("%lf", &x.tluong);
	NhapNgayThang(x.NT);
	getchar();
	gets(x.nd);
	scanf("%d", &x.dgia);
}

void Output(BK x){
	printf("%d - ", x.ma);
	printf("%s - ", x.tgui);
	printf("%s - ", x.tnhan);
	printf("%.2lf - ", x.tluong);
	XuatNgayThang(x.NT);
	printf("%s - ", x.nd);
	printf("%d", x.dgia);
}

int main(){
	int n; scanf("%d", &n);
	BK *a = (BK *)malloc(n * sizeof(BK));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
		printf("\n");
	}
}

//BUU KIEN C
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

typedef struct BuuKien{
	int ma;
	char tgui[51];
	char tnhan[51];
	double tluong;
	struct NgayThang NT;
	char nd[101];
	int dgia;
}BK;

void Input(BK &x){
	scanf("%d", &x.ma);
	getchar();
	gets(x.tgui);
	gets(x.tnhan);
	scanf("%lf", &x.tluong);
	NhapNgayThang(x.NT);
	getchar();
	gets(x.nd);
	scanf("%d", &x.dgia);
}

void Output(BK x){
	printf("%d - ", x.ma);
	printf("%s - ", x.tgui);
	printf("%s - ", x.tnhan);
	printf("%.2lf - ", x.tluong);
	XuatNgayThang(x.NT);
	printf("%s - ", x.nd);
	printf("%d", x.dgia);
}

int main(){
	int n; scanf("%d", &n);
	BK *a = (BK *)malloc(n * sizeof(BK));
	for(int i = 0; i < n; i++){
		Input(a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j].ma > a[j + 1].ma){
				BK tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
		printf("\n");
	}
	return 0;
}

//BUU KIEN D
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

typedef struct BuuKien{
	int ma;
	char tgui[51];
	char tnhan[51];
	double tluong;
	struct NgayThang NT;
	char nd[101];
	int dgia;
	double giatri;
}BK;

void Input(BK &x){
	scanf("%d", &x.ma); //ma bk
	getchar();
	gets(x.tgui); //ng gui
	gets(x.tnhan); //ng nhan
	scanf("%lf", &x.tluong); //trong luong
	NhapNgayThang(x.NT); //ngay gui
	getchar(); 
	gets(x.nd); //noi dung
	scanf("%d", &x.dgia); //don gia
}

void giatri(BK &x){
	x.giatri = x.tluong * x.dgia;
}

void Output(BK x){
	printf("%d - %d", x.ma, (int)x.giatri);
}

int main(){
	int n; scanf("%d", &n);
	BK *a = (BK *)malloc(n * sizeof(BK));
	for(int i = 0; i < n; i++){
		Input(a[i]);
		giatri(a[i]);
	}
	for(int i = 0; i < n; i++){
		Output(a[i]);
		printf("\n");
	}
	return 0;
}

//BUU KIEN E
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang{
    int ngay, thang, nam;
} NT;

void NhapNgayThang(NT &x){
    scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x){
    printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct BuuKien{
    int ma;
    char tgui[51];
    char tnhan[51];
    double tluong;
    struct NgayThang NT;
    char nd[101];
    int dgia;
    double giatri;
}BK;

void Input(BK &x){
    scanf("%d", &x.ma); //ma bk
    getchar();
    fgets(x.tgui, sizeof(x.tgui), stdin); //ng gui
    fgets(x.tnhan, sizeof(x.tnhan), stdin); //ng nhan
    scanf("%lf", &x.tluong); //trong luong
    NhapNgayThang(x.NT); //ngay gui
    getchar();
    fgets(x.nd, sizeof(x.nd), stdin); //noi dung
    scanf("%d", &x.dgia); //don gia
}

int main(){
    int n;
    scanf("%d", &n);
    BK *a = (BK *)malloc(n * sizeof(BK));
    double max = -1e9;
    for (int i = 0; i < n; i++) {
        Input(a[i]);
        max = fmax(max, a[i].tluong);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].tluong == max) {
            ++cnt;
        }
    }
    printf("%d", cnt);
    free(a);
    return 0;
}
//BUU KIEN F
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NgayThang{
	int ngay, thang, nam;
}NT;

void NhapNgayThang(NT *x){
	scanf("%d%d%d", &(x->ngay), &(x->thang), &(x->nam));
}

typedef struct BuuKien{
	int ma;
	char tengui[51];
	char tennhan[51];
	double trongluong;
	struct NgayThang NT;
	char noidung[101];
	int dongia;
}BK;

void Input(BK *x){
    scanf("%d", &x->ma);
    getchar();
    fgets(x->tengui, sizeof(x->tengui), stdin);
    fgets(x->tennhan, sizeof(x->tennhan), stdin);
    scanf("%lf", &(x->trongluong));
    NhapNgayThang(&(x->NT));
    getchar();
    fgets(x->noidung, sizeof(x->noidung), stdin);
    scanf("%d", &x->dongia);
}

int main(){
	int n;
	scanf("%d", &n);
	BK *a = (BK *)malloc(n * sizeof(BK));
	for(int i = 0; i < n; i++){
		Input(&a[i]);
	}
	char check[51];
	getchar();
	fgets(check, sizeof(check), stdin);
	int ok = 1;
	for(int i = 0; i < n; i++){
		if(strstr(a[i].tengui, check) != 0){
			printf("%d\n", a[i].ma);
			ok = 0;
			break;
		}
	}
	if(ok){
		printf("Not Found\n");
		return 0;
	}
	free(a);
	return 0;
}
//BUU KIEN G
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct NgayThang{
    int ngay, thang, nam;
} NT;

void NhapNgayThang(NT &x) {
    scanf("%d%d%d", &x.ngay, &x.thang, &x.nam);
}

void XuatNgayThang(NT x){
    printf("%d/%d/%d - ", x.ngay, x.thang, x.nam);
}

typedef struct BuuKien{
    int ma;
    char tgui[51];
    char tnhan[51];
    double tluong;
    struct NgayThang NT;
    char nd[101];
    int dgia;
} BK;

void Input(BK &x){
    scanf("%d", &x.ma);  // ma bk
    getchar();
    gets(x.tgui);  // ng gui
    gets(x.tnhan);  // ng nhan
    scanf("%lf", &x.tluong);  // trong luong
    NhapNgayThang(x.NT);  // ngay gui
    getchar();
    gets(x.nd);  // noi dung
    scanf("%d", &x.dgia);  // don gia
}

void Output(BK x){
	printf("%d - ", x.ma);
	printf("%s - %s - ", x.tgui, x.tnhan);
	printf("%.2lf - ", x.tluong);
	XuatNgayThang(x.NT);
	printf("%s - ", x.nd);
	printf("%d", x.dgia);
}

int main(){
    int n;
    scanf("%d", &n);
    BK *a = (BK *)malloc(n * sizeof(BK));
    for (int i = 0; i < n; i++){
    	getchar();
        Input(a[i]);
    }
    int check = 0;
    for(int i = 0; i < n; i++){
    	if(a[i].NT.thang == 1 && a[i].NT.nam == 2023){
    		Output(a[i]);
    		check = 1;
    		printf("\n");
		}
    }
    if(check == 0) printf("Not Found\n");
    free(a);
    return 0;
}

