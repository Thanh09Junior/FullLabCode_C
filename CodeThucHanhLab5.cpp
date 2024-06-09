#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//Lưu ý: Lab này sẽ tập trung xử lý for (mặc dù tiêu đề Lab là while)
//Bai 1:
/*int main()
{
	int n = 0, tong = 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Khong hop le!" << endl;
		}
	} while (n <= 0);
	while (n > 0)
	{
		tong += n;
		n--;
	}
	cout << "Tong: " << tong << endl;

	system("pause"); 
	return 0;
}
*/


/*Bai 2: Để cho dễ thao tác thì mình sẽ tập trung dùng for nhé
int main()
{
	//Tự làm

	system("pause"); 
	return 0;
}
*/

/*Bai 3:
int main()
{
	int tong = 0, n = 0;
	double tong1 = 0.0, tong2 = 0.0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Khong hop le!" << endl;
		}
	} while (n <= 0);
	while (n > 0)
	{
		tong += pow(n, 2);
		tong1 += 1.0 / (n * 1.0);
		tong2 += 1.0 / (2.0 * n - 1.0);
		n--;
	}
	cout << "S1: " << tong << "\nS2: " << tong1 << "\nS3: " << tong2 << endl;
 
	system("pause");
	return 0;
}
*/


/*Bai 4:
int main()
{
	//Tự làm

	system("pause");
	return 0;
}
*/

/*Bai 5:
int main()
{
	int n1 = 0, n2 = 0;
	bool kt = true;
	do
	{
		cout << "Hay nhap n1 va n2: "; cin >> n1 >> n2;
		if (n1 >= n2)
		{
			cout << "n1 phai lon hon n2" << endl;
		}
	} while (n1 >= n2);
	cout << "Cac so nguyen to tu n1 den n2 la: ";
	while (n1 < n2)
	{
		if (n1 <= 1)
		{
			kt = false;
		}
		else
		{
			int t = 2;
			while (t <= sqrt(n1))
			{
				if (n1 % t == 0)
				{
					kt = false;
				}
				t++;
			}
		}
		if (kt)
		{
			cout << n1 << " ";
		}
		kt = true;
		n1++;
	}
	cout << endl;
	system("pause");
	return 0;
}
*/


/*Bai 6:
int main()
{
	int d = 0, r = 0, r_temp = 0;
	do
	{
		cout << "Hay nhap d va r: "; cin >> d >> r;
		if (d <= 0 || r <= 0)
		{
			cout << "d va r phai lon hon 0" << endl;
		}
	} while (d <= 0 || r <= 0);
	r_temp = r;
	while (d != 0)
	{
		while (r != 0)
		{
			cout << "*";
			r--;
		}
		cout << endl;
		d--;
		r = r_temp;
	}

	system("pause");
	return 0;
}
*/


/*Bai 7:
int main()
{
	int h = 0, bodem = 1;
	do
	{
		cout << "Hay nhap h: "; cin >> h;
		if (h <= 0)
		{
			cout << "h phai lon hon 0" << endl;
		}
	} while (h <= 0);
	while (h != 0)
	{
		int bodem_temp = bodem;
		while (bodem_temp != 0)
		{
			cout << "*";
			bodem_temp--;
		}
		cout << endl;
		h--;
		bodem++;
	}

	system("pause");
	return 0;
}
*/


/*Bai 8:
int main()
{
	//Tự làm

	system("pause");
	return 0;
}
*/

/*Bai 9:
int main()
{
	//Tự làm

	system("pause");
	return 0;
}
*/

/*Bai 11:
int main()
{
	int n = 0, n_temp = 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "n phai lon hon 0" << endl;
		}
	} while (n <= 0);
	cout << "Cau a" << endl;
	n_temp = n;
	while (n_temp != 0)
	{
		int n_temp1 = n;
		while (n_temp1 != 0)
		{
			cout << "*";
			n_temp1--;
		}
		cout << endl;
		n_temp--;
	}
	cout << "Cau b" << endl;
	n_temp = n;
	while (n_temp != 0)
	{
		int n_temp1 = n;
		if (n_temp == 1 || n_temp == n)
		{
			while (n_temp1 != 0)
			{
				cout << "*";
				n_temp1--;
			}
		}
		else
		{
			while (n_temp1 != 0)
			{
				if (n_temp1 == 1 || n_temp1 == n)
					cout << "*";
				else
					cout << " ";
				n_temp1--;
			}
		}
		cout << endl;
		n_temp--;
	}
	system("pause");
	return 0;
}
*/

//Bai 12:
int main()
{
	int h = 0, bodem = 0, h_temp = 0;
	do
	{
		cout << "Hay nhap h: "; cin >> h;
		if (h <= 0)
		{
			cout << "Khong hop le!" << endl;
		}
	} while (h <= 0);
	cout << "Cau a: " << endl;
	h_temp = h;
	while (h_temp != 0)
	{
		int h_temp1 = h;
		while (h_temp1 != 0)
		{
			if (h_temp != 1)
			{
				if (h_temp1 == h || h_temp1 == h - bodem)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{
				cout << "*";
			}
			h_temp1--;
		}
		cout << endl;
		h_temp--;
		bodem++;
	}
	bodem = 1; //Vì bộ đếm lấy mốc h_temp1 lớn hơn 0 để lấy viền ngoài
	cout << "Cau b: " << endl;
	h_temp = h;
	while (h_temp != 0)
	{
		int h_temp1 = h;
		while (h_temp1 != 0)
		{
			if (h_temp1 > bodem)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			h_temp1--;
		}
		cout << endl;
		h_temp--;
		bodem++;
	}
	bodem = 1;
	cout << "Cau c: " << endl;
	h_temp = h;
	while (h_temp != 0)
	{
		int h_temp1 = h;
		while (h_temp1 != 0)
		{
			if (h_temp1 < bodem)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			h_temp1--;
		}
		cout << endl;
		h_temp--;
		bodem++;
	}
	bodem = 0; //Lấy số 0 bởi vì ta dùng mốc h để xác định viền của hình
	cout << "Cau d: " << endl;
	h_temp = h;
	while (h_temp != 0)
	{
		int h_temp1 = h;
		while (h_temp1 != 0)
		{
			if (h_temp1 > h - bodem)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			h_temp1--;
		}
		cout << endl;
		h_temp--;
		bodem++;
	}
	bodem = 0; //Lấy số 0 bởi vì ta dùng mốc h để xác định viền của hình
	cout << "Cau e: " << endl;
	h_temp = h;
	while (h_temp != 0)
	{
		int h_temp1 = h*2;//Vì tam giác có lỗ trống giữa mỗi phần tử
		while (h_temp1 != 0)
		{
			if (h_temp1 <= h + bodem && h_temp1 >= h - bodem)
			{
				if (h_temp1 == h + bodem || h_temp1 == h - bodem)
				{
					cout << "*";
				}
				else
				{
					if (h_temp % 2 == 0)
					{
						if (h_temp1 % 2 == 0)
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
					else
					{
						if (h_temp1 % 2 != 0)
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
				}
			}
			else
			{
				cout << " ";
			}
			h_temp1--;
		}
		cout << endl;
		h_temp--;
		bodem++;
	}
	system("pause");
	return 0;
}
