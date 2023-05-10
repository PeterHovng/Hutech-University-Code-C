#include <stdio.h>
#include <string.h>

struct SinhVien{
    char masinhvien[10];
    char hovaten[100];
    char ngaysinh[10];
    char gioitinh[5];
    char lop[10];
    double toan, ly, tin;
};

typedef SinhVien SinhVien;

void nhap (SinhVien &x){
    printf("Ma sinh vien: ");
    gets(x.masinhvien);
    printf("Ho va ten: ");
    gets(x.hovaten);
    printf("Ngay sinh: ");
    gets(x.ngaysinh);
    printf("Gioi tinh: ");
    gets(x.gioitinh);
    printf("Lop: ");
    gets(x.lop);
    printf("Diem toan: ");
    scanf("%lf", &x.toan);
    printf("Diem ly: ");
    scanf("%lf", &x.ly);
    printf("Diem tin hoc: ");
    scanf("%lf", &x.tin);
    getchar();
}

double tinhdiemtrungbinh (SinhVien x){
    return (x.toan + x.ly + x.tin) / 3;
}

void xuat (SinhVien x){
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Ma sinh vien", "Ho va ten", "Ngay sinh", "Gioi tinh", "Lop", "Toan", "Ly", "Tin", "Diem trung binh");
    printf("%-10s %-20s %-10s %-10s %-10s %-10.2lf %-10.2lf %-10.2lf %-10.2lf\n", x.masinhvien, x.hovaten, x.ngaysinh, x.gioitinh, x.lop, x.toan, x.ly, x.tin, tinhdiemtrungbinh(x));
}

void xuat2 (SinhVien x){
    printf("%-10s %-20s %-10s %-10s %-10s %-10.2lf %-10.2lf %-10.2lf %-10.2lf\n", x.masinhvien, x.hovaten, x.ngaysinh, x.gioitinh, x.lop, x.toan, x.ly, x.tin, tinhdiemtrungbinh(x));
}

void nhapdanhsachsinhvien (SinhVien a[], int n){
    for (int i = 0; i < n; ++i){
        printf("Nhap thong tin cho sinh vien thu: %d\n", i + 1);
        nhap(a[i]);
    }
}

void xuatdanhsachsinhvien (SinhVien a[], int n){
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Ma sinh vien", "Ho va ten", "Ngay sinh", "Gioi tinh", "Lop", "Toan", "Ly", "Tin", "Diem trung binh");
    for (int i = 0; i < n; ++i){
        xuat2(a[i]);
    }
}

double max (double a, double b){
    if (a > b) return a;
    return b;
}

void timkiem (SinhVien a[], int n){
    double avg = 0;
    for (int i = 0; i < n; ++i){
        avg = max(avg, tinhdiemtrungbinh(a[i]));
    }
    printf("Diem trung binh lon nhat la: %.2lf\n", avg);
    printf("Thong tin nhung sinh vien co diem trung binh lon nhat la:\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Ma sinh vien", "Ho va ten", "Ngay sinh", "Gioi tinh", "Lop", "Toan", "Ly", "Tin", "Diem trung binh");
    for (int i = 0; i < n; ++i){
        if (tinhdiemtrungbinh(a[i]) == avg) xuat2(a[i]);
    }
}

int dem (SinhVien a[], int n){
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        if (tinhdiemtrungbinh(a[i]) < 5) ++cnt;
    }
    return cnt;
}

void dssinhviennu (SinhVien a[], int n){
    printf("Thong tin danh sach sinh vien co gioi tinh la Nu la:\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Ma sinh vien", "Ho va ten", "Ngay sinh", "Gioi tinh", "Lop", "Toan", "Ly", "Tin", "Diem trung binh");
    for (int i = 0; i < n; ++i){
        if (strcmp(a[i].gioitinh, "Nu") == 0) xuat2(a[i]);
    }
}

void sapxep (SinhVien a[], int n){
    for (int i = 0; i < n - 1; ++i){
        for (int j = i + 1; j < n; ++j){
            if (tinhdiemtrungbinh(a[i]) > tinhdiemtrungbinh(a[j])){
                SinhVien tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(){
    while (1){
        printf("MENU\n");
        printf("1. Nhap va xuat 1 sinh vien.\n");
        printf("2. Nhap va xuat ra 1 danh sach sinh vien.\n");
        printf("3. Tim sinh vien co diem trung binh lon nhat.\n");
        printf("4. Dem so luong sinh vien co diem trung binh < 5.\n");
        printf("5. Xuat ra danh sach sinh vien co gioi tinh la Nu.\n");
        printf("6. Sap xep danh sach sinh vien theo diem trung binh tang dan\n");
        printf("0. Thoat.\n");
        int lc;
        printf("Nhap vao lua chon: ");
        scanf("%d", &lc);
        getchar();
        if (lc == 1){
            SinhVien x;
            printf("Nhap vao thong tin sinh vien:\n");
            nhap(x);
            printf("Thong tin sinh vien vua nhap la:\n");
            xuat(x);
        }else if (lc == 2){
            int n;
            printf("Nhap vao so luong sinh vien: ");
            scanf("%d", &n);
            getchar();
            SinhVien a[n];
            printf("Nhap danh sach sinh vien:\n");
            nhapdanhsachsinhvien(a, n);
            printf("Thong tin danh sach sinh vien la:\n");
            xuatdanhsachsinhvien(a, n);
        }else if (lc == 3){
            int n;
            printf("Nhap vao so luong sinh vien: ");
            scanf("%d", &n);
            getchar();
            SinhVien a[n];
            printf("Nhap danh sach sinh vien:\n");
            nhapdanhsachsinhvien(a, n);
            printf("Thong tin danh sach sinh vien la:\n");
            xuatdanhsachsinhvien(a, n);
            timkiem(a, n);
        }else if (lc == 4){
            int n;
            printf("Nhap vao so luong sinh vien: ");
            scanf("%d", &n);
            getchar();
            SinhVien a[n];
            printf("Nhap danh sach sinh vien:\n");
            nhapdanhsachsinhvien(a, n);
            printf("Thong tin danh sach sinh vien la:\n");
            xuatdanhsachsinhvien(a, n);
            printf("So luong sinh vien co diem trung binh < 5 la: %d\n", dem(a, n));
        }else if (lc == 5){
            int n;
            printf("Nhap vao so luong sinh vien: ");
            scanf("%d", &n);
            getchar();
            SinhVien a[n];
            printf("Nhap danh sach sinh vien:\n");
            nhapdanhsachsinhvien(a, n);
            printf("Thong tin danh sach sinh vien la:\n");
            xuatdanhsachsinhvien(a, n);
            dssinhviennu(a, n);
        }else if (lc == 6){
            int n;
            printf("Nhap vao so luong sinh vien: ");
            scanf("%d", &n);
            getchar();
            SinhVien a[n];
            printf("Nhap danh sach sinh vien:\n");
            nhapdanhsachsinhvien(a, n);
            printf("Danh sach sinh vien truoc khi sap xep la:\n");
            xuatdanhsachsinhvien(a, n);
            sapxep(a, n);
            printf("Danh sach sinh vien sau khi sap xep la:\n");
            xuatdanhsachsinhvien(a, n);
        }else break;
    }
    return 0;
}