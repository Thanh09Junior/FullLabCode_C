#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*Bai 1:
int main()
{
	double dtb = 0.0;
	cout << "Hay nhap DTB: "; cin >> dtb;
	if (dtb >= 5.0)
	{
		cout << "Dau" << endl;
	}
	else
	{
		cout << "Rot" << endl;
	}
	system("pause"); 
	return 0;
}
*/


/*Bai 2:
int main()
{
	int a = 0, b = 0;
	cout << "Hay nhap a va b: "; cin >> a >> b;
	if (a == b)
	{
		cout << "Khong co so nao lon nhat " << endl;
	}
	else
	{
		if (a > b)
		{
			cout << "So lon nhat la: " << a << endl;
		}
		else
		{
			cout << "So lon nhat la " << b << endl;
		}
	}

	system("pause"); 
	return 0;
}
*/

/*Bai 3:
int main()
{
	int n = 0;
	cout << "Hay nhap n: "; cin >> n;
	if (n < 0)
	{
		cout << -n << endl;
	}
	else
	{
		cout << n << endl;
	}
	system("pause");
	return 0;
}
*/

/*Bai 4:
int main()
{
	//Bài tập này tự làm (tương tự câu 2)
	system("pause");
	return 0;
}
*/

/*Bai 5:
int main()
{
	int diemtichluy = 0;
	cout << "Hay nhap diem tich luy: "; cin >> diemtichluy;
	switch (diemtichluy)
	{
	case 5:
	{
		cout << "Xep loai trung binh" << endl;
		break;
	}
	case 6:
	{
		cout << "Xep loai trung binh kha" << endl;
		break;
	}
	case 7:
	{
		cout << "Xep loai trung binh kha" << endl;
		break;
	}
	case 8:
	{
		cout << "Xep loai Gioi" << endl;
		break;
	}
	case 9:
	{
		cout << "Xep loai Xuat Sac" << endl;
		break;
	}
	case 10:
	{
		cout << "Xep loai Xuat Sac" << endl;
		break;
	}
	default:
	{
		cout << "Xep loai Yeu" << endl;
	}
	}

	system("pause");
	return 0;
}
*/


/*Bai 6:
int main()
{
	int nam = 0;
	cout << "Hay nhap nam: "; cin >> nam;
	if ((nam % 4 == 0 || nam % 400 == 0) && nam % 100 != 0)
	{
		cout << "Nam nhuan " << endl;
	}
	else
	{
		cout << "Nam khong nhuan" << endl;
	}
	system("pause");
	return 0;
}
*/



/*Bai 7:
int main()
{
	int thang = 0;
	cout << "Hay nhap thang: "; cin >> thang;
	if (thang == 2)
	{
		cout << "So ngay cua thang la 28 hoac 29 ngay" << endl;
	}
	else
	{
		if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
		{
			cout << "Thang co 31 ngay" << endl;
		}
		else
		{
			cout << "Thang co 30 ngay" << endl;
		}
	}
	system("pause");
	return 0;
}
*/


/*Bai 8:
int main()
{
	int thang = 0, nam = 0;
	cout << "Hay nhap thang va nam: "; cin >> thang >> nam;
	if (thang == 2)
	{
		if ((nam % 4 == 0 || nam % 400 == 0) && nam % 100 != 0)
		{
			cout << "Thang co 29 ngay" << endl;
		}
		else
		{
			cout << "Thang co 28 ngay" << endl;
		}
	}
	else
	{
		if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
		{
			cout << "Thang co 31 ngay" << endl;
		}
		else
		{
			cout << "Thang co 30 ngay" << endl;
		}
	}

	system("pause");
	return 0;
}
*/

/*Bai 9:
int main()
{
	int a = 0, b = 0;
	char pheptoan = ' ';
	cout << "Hay nhap a,b,phep toan: "; cin >> a >> b >> pheptoan;
	switch(pheptoan)
	{
	case '+':
	{
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	}
	case '-':
	{
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	}
	case '*':
	{
		cout << a << " * " << b << " * " << a + b << endl;
		break;
	}
	case '/':
	{
		if (b != 0)
			cout << a << " / " << b << " = " << a / b << endl;
		else
			cout << "Khong co dap an nao chia het cho 0 " << endl;
		break;
	}
	default:
	{
		cout << "Khong co phep toan nay!" << endl;
	}
	}

	system("pause");
	return 0;
}
*/
/*Bai 10:
int main()
{
	int songuyen = 0;
	cout << "Hay nhap so nguyen: "; cin >> songuyen;
	if (songuyen % 2 == 0)
	{
		cout << "So chan" << endl;
	}
	else
	{
		cout << "So le" << endl;
	}

	system("pause");
	return 0;
}
*/

/*Bai 11:
int main()
{
	int songuyen = 0;
	cout << "Hay nhap so nguyen: "; cin >> songuyen;
	if (songuyen == 0)
	{
		cout << "So nguyen = 0" << endl;
	}
	else
	{
		if (songuyen > 0)
		{
			cout << "So nguyen duong" << endl;
		}
		else
		{
			cout << "So nguyen am " << endl;
		}
	}

	system("pause");
	return 0;
}
*/

/*Bai 12:
int main()
{
	int a = 0, b = 0;
	cout << "Hay nhap a va b: "; cin >> a >> b;
	cout << "Phuong trinh cua ban la: " << a << "x + " << b << " = " << 0 << endl;
	if (a == 0 && b == 0)
	{
		cout << "Vo so nghiem" << endl;
	}
	else
	{
		if (a == 0 && b != 0)
		{
			cout << "Vo nghiem" << endl;
		}
		else
		{
			cout << "Nghiem cua phuong tring la: " << -b / a << endl;
		}
	}
	system("pause");
	return 0;
}
*/

/*Bai 13:
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "Hay nhap a,b,c: "; cin >> a >> b >> c;
	cout << "Phuong trinh cua ban la: " << a << "x^2 + " << b << "x + "<< c <<" = " << 0 << endl;
	int delta = (b*b) - (4 * a * c);
	if (a == 0 && b == 0 && c == 0)
	{
		cout << "Vo so nghiem" << endl;
	}
	else
	{
		if (a == 0 && b == 0 && c != 0)
		{
			cout << "Vo nghiem" << endl;
		}
		else
		{
			if (delta == 0)
				cout << "Phuong trinh co nghiem kep: " << -b / (2 * a) << endl;
			else
			{
				if (delta > 0)
					cout << "Phuong trinh co hai nghiem la: " << ((-b) + delta) / (2 * a) << endl;
				else
					cout << "Phuong trinh vo nghiem" << endl;
			}
		}
	}
	system("pause");
	return 0;
}


*/
//Bai 14:
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "Hay nhap so nguyen a,b,c: "; cin >> a >> b >> c;
	if (a > b && a > c)
	{
		if (b > c)
		{
			cout << c << b << a << endl;
		}
		else
		{
			cout << b << c << a << endl;
		}
	}
	else
	{
		if (b > a && b > c)
		{
			if (a > c)
			{
				cout << c << a << b << endl;
			}
			else
			{
				cout << a << c << b << endl;
			}
		}
		else
		{
			if (a > b)
			{
				cout << b << a << c << endl;
			}
			else
			{
				cout << a << b << c << endl;
			}
		}
	}
	system("pause");
	return 0;
}
