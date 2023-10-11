#include <iostream>
#include <cmath>
#include <string>

using namespace std;
double tinhDienTichHCN(double chieuDai, double chieuRong)
{
    return chieuDai * chieuRong;
}
double tinhChuViHCN(double chieuDai, double chieuRong)
{
    return 2 * (chieuDai + chieuRong);
}

double tinhDienTichHinhTamGiac(double canhA, double canhB, double canhC)
{
    double p = (canhA + canhB + canhC) / 2;
    return sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
}

double tinhChuViHinhTamGiac(double canhA, double canhB, double canhC)
{
    return canhA + canhB + canhC;
}

double tinhDienTichHinhVuong(double canh)
{
    return canh * canh;
}

double tinhChuViHinhVuong(double canh)
{
    return 4 * canh;
}

double tinhDienTichEllipse(double banTrucLon, double banTrucNho)
{
    return M_PI * banTrucLon * banTrucNho;
}

double tinhChuViEllipse(double banTrucLon, double banTrucNho)
{
    return 2 * M_PI * sqrt((banTrucLon * banTrucLon + banTrucNho * banTrucNho) / 2);
}

double tinhDienTichHon(double banKinhDay, double chieuCao)
{
    return M_PI * banKinhDay * (banKinhDay + sqrt(chieuCao * chieuCao + banKinhDay * banKinhDay));
}

double tinhTheTichHon(double banKinhDay, double chieuCao)
{
    return (1/3.0) * M_PI * banKinhDay * banKinhDay * chieuCao;
}

int main()
{
    int luaChon;
    double a, b, c;
    cout<<"Chuong trinh tren duoc viet theo ngon ngu lap trinh C++.\n";
    cout<<"Produced by HieuPC7A3\n";
    cout<<"Phan mem nay khi chia thuong se lam tron so the nen la thuong dung thuong se khac so voi tinh binh thuong\n";
    do{
    cout << "Chon mot trong cac lua chon sau:\n";
    cout << "1. Cong\n";
    cout << "2. Tru\n";
    cout << "3. Nhan\n";
    cout << "4. Chia\n";
    cout << "5. Tinh dien tich hinh chu nhat\n";
    cout << "6. Tinh chu vi hinh chu nhat\n";
    cout << "7. Tinh dien tich hinh tam giac\n";
    cout << "8. Tinh chu vi hinh tam giac\n";
    cout << "9. Tinh dien tich hinh vuong\n";
    cout << "10. Tinh chu vi hinh vuong\n";
    cout << "11. Tinh dien tich ellipse\n";
    cout << "12. Tinh chu vi ellipse\n";
    cout << "13. Tinh dien tich hinh non\n";
    cout << "14. Tinh the tich hinh non\n";
    cout << "15. Thoat chuong trinh\n";
    cout << "Lua chon cua ban: ";
    cin >> luaChon;

    switch (luaChon)
    {
        case 1:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;
            cout << "***Ket qua****: " << a + b << endl;
            break;
        case 2:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;
            cout << "***Ket qua***: " << a - b << endl;
            break;
        case 3:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;
            cout << "***Ket qua***: " << a * b << endl;
            break;
        case 4:
            cout << "Nhap so bi chia: ";
            cin >> a;
            cout << "Nhap so chia: ";
            cin >> b;
            if (b == 0)
            {
                cout << "Khong the chia cho 0!" << endl;
            }
            else
            {
                cout << "***Ket qua***: " << a / b << endl;
            }
            break;
        case 5:
            cout << "Nhap chieu dai hinh chu nhat: ";
            cin >> a;
            cout << "Nhap chieu rong hinh chu nhat: ";
            cin >> b;
            cout << "***Dien tich hinh chu nhat***: " << tinhDienTichHCN(a, b) << endl;
            break;
        case 6:
            cout << "Nhap chieu dai hinh chu nhat: ";
            cin >> a;
            cout << "Nhap chieu rong hinh chu nhat: ";
            cin >> b;
            cout << "***Chu vi hinh chu nhat***: " << tinhChuViHCN(a, b) << endl;
            break;
        case 7:
            cout << "Nhap canh thu nhat cua tam giac: ";
            cin >> a;
            cout << "Nhap canh thu hai cua tam giac: ";
            cin >> b;
            cout << "Nhap canh thu ba cua tam giac: ";
            cin >> c;
            cout << "***Dien tich hinh tam giac***: " << tinhDienTichHinhTamGiac(a, b, c) << endl;
            break;
        case 8:
            cout << "Nhap canh thu nhat cua tam giac: ";
            cin >> a;
            cout << "Nhap canh thu hai cua tam giac: ";
            cin >> b;
            cout << "Nhap canh thu ba cua tam giac: ";
            cin >> c;
            cout << "***Chu vi hinh tam giac***: " << tinhChuViHinhTamGiac(a, b, c) << endl;
            break;
        case 9:
            cout << "Nhap canh cua hinh vuong: ";
            cin >> a;
            cout << "Dien tich hinh vuong: " << tinhDienTichHinhVuong(a) << endl;
            break;
        case 10:
            cout << "Nhap canh cua hinh vuong: ";
            cin >> a;
            cout << "***Chu vi hinh vuong***: " << tinhChuViHinhVuong(a) << endl;
            break;
        case 11:
            cout << "Nhap ban truc lon cua ellipse: ";
            cin >> a;
            cout << "Nhap ban truc nho cua ellipse: ";
            cin >> b;
            cout << "***Dien tich ellipse***: " << tinhDienTichEllipse(a, b) << endl;
            break;
        case 12:
            cout << "Nhap ban truc lon cua ellipse: ";
            cin >> a;
            cout << "Nhap ban truc nho cua ellipse: ";
            cin >> b;
            cout << "***Chu vi ellipse***: " << tinhChuViEllipse(a, b) << endl;
            break;
        case 13:
            cout << "Nhap ban kinh day cua hinh non: ";
            cin >> a;
            cout << "Nhap chieu cao cua hinh non: ";
            cin >> b;
            cout << "***Dien tich hinh non***: " << tinhDienTichHon(a, b) << endl;
            break;
        case 14:
            cout << "Nhap ban kinh day cua hinh non: ";
            cin >> a;
            cout << "Nhap chieu cao cua hinh non: ";
            cin >> b;
            cout << "***The tich hinh non***: " << tinhTheTichHon(a, b) << endl;
            break;
         case 15:
            return 0;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
        
   }while (luaChon != 0);
    return 0;
}
