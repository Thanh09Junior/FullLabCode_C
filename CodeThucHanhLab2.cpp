#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*Bai 1:
int main()
{
	int canh = 0;
	cout << "Hay nhap canh: "; cin >> canh;
	cout << "Dien tich hinh vuong la: " << canh * canh << endl; //Cách 1
	int DT = canh * canh;
	cout << "Dien tich hinh vuong la: " << DT << endl; //Cách 2
	system("pause"); 
	return 0;
}
*/


/*Bai 2:
int main()
{
	int CD = 0, CR = 0;
	cout << "Hay nhap chieu dai: "; cin >> CD;
	cout << "Hay nhap chieu rong: "; cin >> CR;
	cout << "Dien tich HCN la: " << CD * CR << endl;

	system("pause"); 
	return 0;
}
*/

/*Bai 3:
int main()
{
	int SoNgayLamViec = 0, TienCong = 0; //Có thể khai báo kiểu dữ liệu kiểu này
	string ten;
	cout << "Hay nhap ten: "; getline(cin, ten); //Vì trước đó không có cin nào nên không cần cin.ignore();
	cout << "Hay nhap so ngay lam viec: "; cin >> SoNgayLamViec;
	cout << "Hay nhap tien cong: "; cin >> TienCong;
	cout << "Ho ten: " << ten << ", so ngay lam viec: " << SoNgayLamViec << ", Luong: " << SoNgayLamViec * TienCong << endl;

	system("pause");
	return 0;
}
*/

/*Bai 4:
int main()
{
	double r = 0;
	const double PI = 3.141593; //Định nghĩa hằng số PI là dùng const kiểu dữ liệu "tên";
	cout << "Hay nhap ban kinh r: "; cin >> r;
	cout << "Dien tich: " << PI * r * r << ", Chu vi: " << 2 * PI * r << endl;

	system("pause");
	return 0;
}
*/

/*Bai 5:
int main()
{
	int a = 0, b = 0, c = 0;
	double Heron = 0.0, p = 0.0;
	cout << "Hay nhap chieu dai canh a,b,c: "; cin >> a >> b >> c; //Có thể ghi liền cin kiểu này (lưu ý space để chuyển đổi);
	p = ((a + b + c)*1.0) / 2.0;
	Heron = sqrt(p * (p - a*1.0) * (p - b*1.0) * (p - c*1.0)); //Nhân 1.0 để chuyển đổi int sang double
	cout << "Dien tich tam giac la: " << Heron << endl;


	system("pause");
	return 0;
}
*/


/*Bai 6:
int main()
{
	int songuyen = 0;
	cout << "Hay nhap so nguyen [3 chu so]: "; cin >> songuyen;
	cout << "Tong 3 chu so la: " << (songuyen / 100) + (songuyen % 10) + ((songuyen / 10) % 10) << endl;
	cout << "So dao nguoc la: " << (songuyen % 10) << ((songuyen / 10) % 10) << (songuyen / 100) << endl;
	system("pause");
	return 0;
}
*/



/*Bai 7:
int main()
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	cout << "Hay nhap toa do diem 1 [x,y]: "; cin >> x1 >> y1;
	cout << "Hay nhap toa do diem 2 [x,y]: "; cin >> x2 >> y2;
	double d = sqrt(pow((x2 - x1)*1.0, 2)+ pow((y2 - y1)*1.0, 2));
	cout << "Khoang cach giua 2 diem la: " << d << endl;

	system("pause");
	return 0;
}
*/


/*Bai 8:
int main()
{
	int giamua = 0;
	cout << "Hay nhap gia mua: "; cin >> giamua;
	cout << "Gia ban cua mat hang la: " << giamua * 1.0 + (giamua * 1.0 * (60 * 1.0 / 100 * 1.0)) << endl;


	system("pause");
	return 0;
}
*/

/*Bai 9:
int main()
{
	int TongSach = 0, TongTien = 0;
	double Thue = 0.0;
	int TienVanChuyen = 0;
	cout << "Hay nhap tong so sach: "; cin >> TongSach;
	cout << "Hay nhap vao tong tien: "; cin >> TongTien;
	Thue = TongTien * 1.0 * (7.5 / 100.0);
	TienVanChuyen = 2000 * TongSach;
	cout << "Tong tri gia hoa don: " << TongTien*1.0 + Thue + TienVanChuyen*1.0 << endl;


	system("pause");
	return 0;
}*/

/*Bai 10:
int main()
{
	char kitu = ' ';
	int songuyen = 0;
	cout << "Hay nhap ki tu: "; cin >> kitu;
	cout << "Ma ASCII cua ki tu do la: " << int(kitu) << endl;
	cout << "Hay nhap so nguyen: "; cin >> songuyen;
	cout << "Ky tu tuong ung so nguyen la: " << char(songuyen) << endl;


	system("pause");
	return 0;
}
*/

/*Bai 11:
int main()
{
	double x = 0.0;
	const double PI = 3.1457;
	cout << "Hay nhap x: "; cin >> x;
	cout << "Sin x: " << sin(x * PI / 180.0) << endl;
	cout << "Cos x: " << cos(x * PI / 180.0) << endl;
	cout << "Tan x: " << tan(x * PI / 180.0) << endl;

	system("pause");
	return 0;
}
*/

//Bai 12:
int main()
{
	string chuoi = "";
	cout << "Hay nhap chuoi: "; getline(cin, chuoi);
	cout << "Chieu dai cua chuoi la: " << chuoi.length() << endl;

	system("pause");
	return 0;
}

