#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//&Selection đề nó cập nhật lại vào hàm Menu. (Liên quan đến con trỏ bên ktlt)

void ErrorInput(int &Selection) //Khi mà xuất hiện nhập chuỗi hoặc kí tự đối với kiểu dữ liệu int
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Khong the nhap ki tu, chuoi trong int!" << endl;
	cout << "Hay nhap lai lua chon:  "; cin >> Selection;
}

void DisplayPageNumber(int Number)
{
	cout << "\nDang hien bai " << Number << endl << endl;
}

int Bai1_dt()
{
	int chieudai = 0, chieurong = 0;
	cout << "Hay nhap chieu dai, chieu rong: "; cin >> chieudai >> chieurong;
	return chieudai * chieurong;
}

int Bai1_cv()
{
	int chieudai = 0, chieurong = 0;
	cout << "Hay nhap chieu dai, chieu rong: "; cin >> chieudai >> chieurong;
	return (chieudai + chieurong)*2;
}


int Bai2_HaiSo()
{
	int a = 0, b = 0;
	cout << "Hay nhap a,b: "; cin >> a >> b;
	if (a > b)
	{
		return a;
	}
	else
	{
		if (a == b)
		{
			return 0;
		}
		else
		{
			return b;
		}
	}
}

int Bai2_BaSo()
{
	int a = 0, b = 0, c = 0;
	cout << "Hay nhap a,b,c: "; cin >> a >> b >> c;
	if (c > a && c > b)
	{
		return c;
	}
	else
	{
		if (a > c  &&  a > b)
		{
			return a;
		}
		else
		{
			if (a == b && b == c)
				return 0;
			else
				return b;
		}
	}

}

double Bai3_luythua()
{
	double x = 0.0;
	int y = 0;
	cout << "Hay nhap x,y: "; cin >> x >> y;
	return pow(x, y);
}

int Bai4_Tong()
{
	int n = 0, tong = 0;
	cout << "Hay nhap n: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		tong += i;
	}
	return tong;
}

int Bai4_GiaiThua()
{
	int n = 0, giaithua = 1;
	cout << "Hay nhap n: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		giaithua *= i;
	}
	return giaithua;
}

void Bai5_HinhHCN()
{
	int n = 0;
	cout << "Hay nhap canh: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void Bai6_DaoNguoc()
{
	int n = 0;
	do
	{
		cout << "Hay nhap so nguyen n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Nhap so nguyen duong! " << endl;
		}
	} while (n <= 0);
	cout << "So dao nguoc: ";
	for (n; n != 0; n = n / 10)
	{
		cout << n % 10;
	}
	cout << endl;

}

bool Bai7_SoNguyenTo()
{
	int n = 0;
	bool kt = true;
	cout << "Hay nhap so nguyen n: "; cin >> n;
	if (n <= 1)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				kt = false;
			}
		}
		if (kt)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool Bai10_SoHoanThien()
{
	int n = 0, tong = 0;
	cout << "Hay nhap n: "; cin >> n;
	if (n <= 0)
	{
		return false;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				tong += i;
			}
			if (tong == n)
			{
				return true;
				break;
			}
			else
			{
				if (tong > n)
				{
					return false;
					break;
				}
			}
		}
	}
}


bool Bai11_Pandlidrome()
{
	int n = 0, n_temp = 0, n_temp2 = 0, demchuso = 0;
	cout << "Hay nhap n: "; cin >> n;
	n_temp = n;
	n_temp2 = n;
	for (n_temp; n_temp != 0; n_temp = n_temp / 10)
	{
		demchuso++;
	}
	demchuso--;
	n_temp = 0;
	for (n; n != 0; n = n / 10)
	{
		n_temp += (n%10) * pow(10, demchuso);
		demchuso--;
	}
	cout << n_temp << endl;
	if (n_temp == n_temp2)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void Menu()
{
	int Selection = -1;
	bool ErrorIp = false;
	do
	{
		cout << "------------- Menu -------------" << endl;
		for (int i = 1; i <= 11; i++)
		{
			cout << i << ". Bai " << i << endl;
		}
		cout << "0. Thoat" << endl;
		cout << "--------------------------------" << endl;
		cout << "Hay nhap lua chon [0-11]: "; cin >> Selection;
		if (cin.fail())
		{
			ErrorInput(Selection);
			ErrorIp = true;
		}
		switch (Selection)
		{
		case 0:
		{

			break;
		}
		case 1:
		{
			DisplayPageNumber(Selection);
			cout << "Dien tich: " << Bai1_dt() << endl;
			cout << "Chu vi: " << Bai1_cv() << endl;
			break;
		}
		case 2:
		{
			DisplayPageNumber(Selection);
			cout << "So lon nhat cua hai so: " << Bai2_HaiSo() << endl;
			cout << "So lon nhat cua ba so: " << Bai2_BaSo() << endl;
			break;
		}
		case 3:
		{
			DisplayPageNumber(Selection);
			cout << "Luy thua cua x, y la: " << Bai3_luythua() << endl;
			break;
		}
		case 4:
		{
			DisplayPageNumber(Selection);
			cout << "Tong: " << Bai4_Tong() << endl;
			cout << "Giai thua: " << Bai4_GiaiThua() << endl;
			break;
		}
		case 5:
		{
			DisplayPageNumber(Selection);
			Bai5_HinhHCN();
			break;
		}
		case 6:
		{
			DisplayPageNumber(Selection);
			Bai6_DaoNguoc();
			break;
		}
		case 7:
		{
			DisplayPageNumber(Selection);
			bool kt = Bai7_SoNguyenTo();
			if (kt)
			{
				cout << "n la so nguyen to" << endl;
			}
			else
			{
				cout << "n khong phai la so nguyen to" << endl;
			}
			break;
		}
		case 8:
		{
			DisplayPageNumber(Selection);
			//Hàm tự tạo của bài 8
			break;
		}
		case 9:
		{
			DisplayPageNumber(Selection);
			//Hàm tự tạo của bài 9
			break;
		}
		case 10:
		{
			DisplayPageNumber(Selection);
			bool kt = Bai10_SoHoanThien();
			if (kt)
			{
				cout << "n la so hoan thien!" << endl;
			}
			else
			{
				cout << "n khong phai la so hoan thien!" << endl;
			}
			break;
		}
		case 11:
		{
			DisplayPageNumber(Selection);
			bool kt = Bai11_Pandlidrome();
			if (kt)
			{
				cout << "n la so hoan thien!" << endl;
			}
			else
			{
				cout << "n khong phai la so hoan thien!" << endl;
			}
			break;
		}
		default:
		{
			if (ErrorIp)
			{
				ErrorIp = false;
			}
			else
			{
				cout << "So bai khong hop le!" << endl;
			}
		}
		}
	} while (Selection != 0);
}


int main()
{
	Menu();

	system("pause");
	return 0;
}