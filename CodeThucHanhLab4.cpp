#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//Lưu ý: Lab này sẽ tập trung xử lý for (mặc dù tiêu đề Lab là while)
/*Bai 1:
int main()
{
	int n = 0, n1 = 0, tong = 0;
	//n phải lớn hơn 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Co van de nhap xuat!" << endl;
		}
	} while (n<= 0);
	n1 = n;
	while (n != 0) //Cách dùng while
	{
		tong += n;
		n--;
	}
	cout << "Tong: " << tong << endl;
	tong = 0;
	for (int i = 0; i <= n1; i++) // Cách dùng for
	{
		tong += i;
	}
	cout << "Tong: " << tong << endl;

	system("pause"); 
	return 0;
}
*/


/*Bai 2: Để cho dễ thao tác thì mình sẽ tập trung dùng for nhé
int main()
{
	int n = 0, tich = 1;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 1)
		{
			cout << "Co van de nhap xuat!" << endl;
		}
	} while (n <= 1);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			tich *= i;
		}
	}
	cout << "Tich: " << tich << endl;


	system("pause"); 
	return 0;
}
*/

/*Bai 3:
int main()
{
	int n = 0, tongchan = 0, tongle = 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 1)
		{
			cout << "Co van de nhap xuat!" << endl;
		}
	} while (n <= 1);
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			tongchan += i; // +=i tương đương tongchan = tongchan + i;
		}
		else
		{
			tongle += i;
		}
	}
	cout << "Tong chan: " << tongchan << ", Tong le: " << tongle << endl;

	system("pause");
	return 0;
}
*/


/*Bai 4:
int main()
{
	int n = 0, demchuso = 0, tong = 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "khong hop le!" << endl;
		}
	} while (n <= 0);
	for (n; n != 0; n = n / 10) //Không nhất thiết phải cứ khai báo một biến mới để dùng for
	{
		demchuso++;
		tong += n % 10;
	}
	cout << "Vay n co " << demchuso << " chu so va tong: " << tong << endl;

	system("pause");
	return 0;
}
*/

/*Bai 5:
int main()
{
	int n = 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Co van de!" << endl;
		}
	} while (n <= 0);
	cout << "So dao nguoc la: ";
	for (n; n != 0; n = n / 10)
	{
		cout << n % 10;
	}
	cout << endl;

	system("pause");
	return 0;
}
*/


/*Bai 6:
int main()
{
	bool kiemtra = true; //Sử dụng điều kiện bool để tạo chốt kiểm tra
	int n = 0;
	cout << "Hay nhap n: "; cin >> n;
	if (n <= 1)
	{
		cout << n << " khong phai la so nguyen to!" << endl;
	}
	else
	{
		for (int t = 2; t <= sqrt(n); t++)
		{
			if (n % t == 0)
			{
				kiemtra = false; //Số nguyên tố chỉ chia hết cho 1 và chính nó nếu có số khác thì false
			}
		}
		if (kiemtra) //Nếu là true
		{
			cout << n << " la so nguyen to" << endl;
		}
		else
		{
			cout << n << " khong phai la so nguyen to" << endl;
		}
	}
	system("pause");
	return 0;
}
*/


/*Bai 7:
int main()
{
	int Selection = -1, a = 0, b = 0;
	do
	{
		cout << "------------ Menu -----------" << endl;
		cout << "1. Cong" << endl;
		cout << "2. Tru" << endl;
		cout << "3. Nhan" << endl;
		cout << "4. Chia" << endl;
		cout << "0. Thoat" << endl;
		cout << "----------------------------" << endl;
		cout << "Hay nhap lua chon [0-4]: "; cin >> Selection;
		switch (Selection)
		{
		case 0:
		{

			break;
		}
		case 1:
		{
			cout << "Hay nhap a va b: "; cin >> a >> b;
			cout << "Tong la: " << a + b << endl;
			break;
		}
		case 2:
		{
			cout << "Hay nhap a va b: "; cin >> a >> b;
			cout << "Hieu la: " << a - b << endl;
			break;
		}
		case 3:
		{
			cout << "Hay nhap a va b: "; cin >> a >> b;
			cout << "Tich la: " << a * b << endl;
			break;
		}
		case 4:
		{
			cout << "Hay nhap a va b: "; cin >> a >> b;
			if (b == 0)
			{
				cout << "Math Error: Khong co phep tinh chia 0 " << endl;
			}
			else
			cout << "Thuong la: " << a / b << endl;
			break;
		}
		default:
		{
			cout << "\nCanh bao: Khong co lua chon nay!\n" << endl;
		}
		}
		
	} while (Selection != 0);

	system("pause");
	return 0;
}
*/


/*Bai 8:
int main()
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
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			tong += i;
		}
	}
	cout << "Tong cac chu so le la: " << tong << endl;

	system("pause");
	return 0;
}
*/

/*Bai 9:
int main()
{
	//Bài tập rèn luyện

	system("pause");
	return 0;
}
*/

/*Bai 10:
int main()
{
	int n = 0; bool kt = true;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Khong hop le!" << endl;
		}
	} while (n <= 0);
	cout << "Cac thua so nguyen to la: ";
	for (int i = 1; i < n; i++)
	{
		if (i <= 1)
		{
			kt = false; //Số nguyên tố phải lớn hơn 1
		}
		else
		{
			if (n % i == 0) //Kiểm tra xem i có phải thừa số của n không
			{
				for (int t = 2; t <= sqrt(i); t++) //Kiểm tra xem i có phải số nguyên tố không
				{
					if (i % t == 0)
					{
						kt = false;
					}
				}
			}
			else
			{
				kt = false;
			}
		}
		if (kt)
		{
			cout << i << ", ";
		}
		kt = true;
	}

	system("pause");
	return 0;
}
*/

/*Bai 11:
int main()
{
	int n = 0, n_temp = 0, thapphan = 0, muso = 0;
		do
		{
			cout << "Hay nhap n: "; cin >> n;
			if (n <= 0)
			{
				cout << "Khong hop le!" << endl;
			}
		} while (n <= 0);
		n_temp = n;
		for (n; n != 0; n = n / 10)
		{
			if (n % 10 != 0)
			{
				thapphan += pow(2, muso);
			}
			muso++;
		}
		cout << n_temp << " sang thap phan: " << thapphan << endl;

	system("pause");
	return 0;
}
*/

//Bai 12:
int main()
{
	int n = 0, demchuso = 0, n_temp = 0;
	do
	{
		cout << "Hay nhap n: "; cin >> n;
		if (n <= 0)
		{
			cout << "Khong hop le!" << endl;
		}
	} while (n <= 0);
	n_temp = n;
	for (n_temp; n_temp != 0; n_temp = n_temp / 10) //Cẩn thận dấu câu ;
	{
		demchuso++; //Đếm chữ số có bao nhiêu đơn vị
	}
	demchuso--;
	for (n; n != 0; n = n/10) //Biến đổi đảo ngược giá trị cho n_temp
	{
		n_temp += (n % 10) * pow(10, demchuso);
		demchuso--;
	}
	cout << "ket qua: ";
	for (n_temp; n_temp != 0; n_temp = n_temp / 10) //Đảo ngược n_temp thêm 1 lần nữa
	{
		cout << n_temp % 10 << " ";
	}
	system("pause");
	return 0;
}


/*Bai 13:
int main()
{

	//Tự tìm hiểu thêm
	system("pause");
	return 0;
}
*/