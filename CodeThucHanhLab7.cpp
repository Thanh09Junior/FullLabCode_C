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

int Bai2_Euclid()
{
	int m = 0, n = 0, r = 0;
	cout << "Hay nhap tu: " << m << endl;
	cout << "Hay nhap mau: " << n << endl;
	do
	{
		r = m % n;
		m = n;
		n = r;
	} while (n != 0);
	return n;
}

int Tohop(int n, int k)
{
	int giaithua_n = 1, giaithua_k = 1, giaithua_nk = 1;
	for (int i = 1; i <= n; i++)
	{
		giaithua_n *= i;
	}
	for (int j = 1; j <= k; j++)
	{
		giaithua_k *= j;
	}
	for (int t = 1; t <= (n - k); t++)
	{
		giaithua_nk *= t;
	}
	return (giaithua_n) / (giaithua_k * (giaithua_nk));
}

void Bai3()
{
	int n = 0, k = 0, giaithua = 1, tohop = 1, h = 0;
	cout << "Hay nhap n: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		giaithua *= i;
	}
	cout << "Giai thua: " << giaithua << endl;
	cout << "Hay nhap k: "; cin >> k;
	tohop = Tohop(n,k);
	cout << "To hop n,k la: " << tohop << endl;
	cout << "Hay nhap h: "; cin >> h;
	for (int n = 0; n < h; n++)
	{
		for (int k = 0; k < h; k++)
		{
			if (k <= n)
			{
				tohop = Tohop(n, k);
				cout << tohop << " ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void Bai4()
{
	char k = ' ';
	int demchucai = 0, demso = 0;
	cout << "Hay nhap ki tu: "; cin >> k;
	if (k >= '0' && k <= '9')
	{
		cout << "k la ki tu so" << endl;
	}
	else
	{
		if ((k >= 'A' && k <= 'Z') || (k >= 'a' && k <= 'z'))
		{
			cout << "k la chu cai" << endl;
		}
	}
	string n = "";
	cout << "Hay nhap chuoi: "; cin >> n;
	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] >= '0' && n[i] <= '9')
		{
			demso++;
		}
		else
		{
			if ((n[i] >= 'A' && n[i] <= 'Z') || (n[i] >= 'a' && n[i] <= 'z'))
			{
				demchucai++;
			}
		}
	}
	cout << "So chu cai: " << demchucai << ", ki tu so: " << demso << endl;
}

int Bai8()
{
	int n = 0, a = 0, b = 1, tong = 0;
	cout << "Hay nhap n: "; cin >> n;
	for (int i = 0; i < n-1; i++)
	{
		tong = a + b;
		a = b;
		b = tong;
	}
	return tong;
}

int Bai9() {
	int ngay = 0, thang = 0, nam = 0, khoangcach = 0;
	cout << "Hay nhap ngay,thang,nam: "; cin >> ngay >> thang >> nam;
	khoangcach = ngay;
	for (thang; thang != 1; thang--)
	{
		if (thang == 2)
		{
			if ((nam % 400 == 0 || nam % 4 == 0) && nam % 100 != 0)
			{
				khoangcach += 29;
			}
			else
			{
				khoangcach += 28;
			}
		}
		else
		{
			if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 9 || thang == 10 || thang == 12)
			{
				khoangcach += 31;
			}
			else
			{
				khoangcach += 30;
			}
		}
	}
	return khoangcach;
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
			//Tự ôn tập
			break;
		}
		case 2:
		{
			DisplayPageNumber(Selection);
			cout << "UCLN: " << Bai2_Euclid() << endl;
			break;
		}
		case 3:
		{
			DisplayPageNumber(Selection);
			Bai3();
			break;
		}
		case 4:
		{
			DisplayPageNumber(Selection);
			Bai4();
			break;
		}
		case 5:
		{
			DisplayPageNumber(Selection);
			//Tự ôn tập
			break;
		}
		case 6:
		{
			DisplayPageNumber(Selection);
			//Tự ôn tập
			break;
		}
		case 7:
		{
			DisplayPageNumber(Selection);
			//Tự ôn tập
			break;
		}
		case 8:
		{
			DisplayPageNumber(Selection);
			cout << "Fibonaci: " << Bai8() << endl;
			break;
		}
		case 9:
		{
			DisplayPageNumber(Selection);
			cout << "So ngay hien tai cach ngay dau tien: " << Bai9() << endl;
			break;
		}
		case 10:
		{
			DisplayPageNumber(Selection);
			
			break;
		}
		case 11:
		{
			DisplayPageNumber(Selection);
			
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