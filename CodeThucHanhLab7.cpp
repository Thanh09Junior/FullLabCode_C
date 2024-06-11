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

void Bai1()
{
	double arr[50];
	for (int i = 0; i < 50; i++)
	{
		if (i < 25)
		{
			arr[i] = pow(i, 2);
		}
		else
		{
			arr[i] = pow(i, 3);
		}
		cout << arr[i] << " ";
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}

void Bai2()
{
	srand((int)time(NULL));
	const int MAXSIZE = 100;
	double arr[MAXSIZE];
	int currentsize = 0;
	do
	{
		cout << "Hay nhap current size: "; cin >> currentsize;
	} while (currentsize <= 0 || currentsize >100);
	for (int i = 0; i < currentsize; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << ", ";
	}
	cout << endl;
}

void Bai3()
{
	srand((int)time(NULL));
	const int MAXSIZE = 100;
	int arr[MAXSIZE];
	int currentsize = 0, max = 0;
	do
	{
		cout << "Hay nhap current size: "; cin >> currentsize;
	} while (currentsize <= 0 || currentsize > 100);
	for (int i = 0; i < currentsize; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << ", ";
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Phan tu lon nhat: " << max << endl;
	cout << endl;
}
void Bai4()
{
	int arr[100], tong = 0;
	double trungbinh = 0.0;
	srand((int)time(NULL));
	int currentsize = 0, max = 0;
	do
	{
		cout << "Hay nhap current size: "; cin >> currentsize;
	} while (currentsize <= 0 || currentsize > 100);
	for (int i = 0; i < currentsize; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << ", ";
		trungbinh += arr[i];
	}
	cout << "\nGia tri trung binh: " << trungbinh*1.0/currentsize*1.0 << endl;
	cout << endl;
}

void nhap(int arr[100], int arrsize)
{
	srand(time(NULL));
	for (int i = 0; i < arrsize; i++)
	{
		arr[i] = rand() % 50;
	}
}
void xuat(int arr[100], int arrsize)
{
	cout << endl;
	for (int i = 0; i < arrsize; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

void tim(const int arr[], int arrSize, int x)
{
	cout << "Hay nhap x can tim: "; cin >> x;
	bool kt = false;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == x)
		{
			kt = true;
		}
	}
	if (kt)
	{
		cout << "X co ton tai" << endl;
	}
	else
	{
		cout << "X khong ton tai" << endl;
	}
}
void daonguoc(int arr[], int arrsize)
{
	int arr1[100];
	for (int i = 0; i < arrsize; i++)
	{
		arr1[i] = arr[arrsize - 1 - i];
	}
	cout << endl;
	for (int i = 0; i < arrsize; i++)
	{
		arr[i] = arr1[i];
		cout << arr[i] << ", ";
	}
	cout << endl;
}
void xoa(int arr[], int& arrSize, int p)
{
	//Tự nghiên cứu.
}

void Bai6()
{
	int arr[100], arrSize = 0, x = 0;
	cout << "Hay nhap kich thuoc arrsize: "; cin >> arrSize;
	nhap(arr, arrSize);
	xuat(arr, arrSize);
	tim(arr, arrSize, x);
	daonguoc(arr, arrSize);
}

void Bai7()
{
	int arr[100], arrSize = 0, min = 100000, vitri = 0;
	cout << "Hay nhap kich thuoc arrsize: "; cin >> arrSize;
	srand(time(NULL));
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = rand() % 50;
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << ", ";
		if (arr[i] == min)
		{
			vitri = i;
			break;
		}
	}
	cout << "Vi tri gia tri nho nhat xuat hien dau tien: " << vitri << endl;
	cout << endl;
}

void Bai8()
{
	int arr[100], arrSize = 0,x =0, counts = 0;
	cout << "Hay nhap kich thuoc arrsize: "; cin >> arrSize;
	srand(time(NULL));
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = rand() % 50;
	}
	cout << endl;
	cout << "Hay nhap x: "; cin >> x;
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << ", ";
		if (arr[i] == x)
		{
			counts++;
			break;
		}
	}
	cout << "So lan x xuat hien: " << counts << endl;
	cout << endl;
}

void Menu()
{
	int Selection = -1;
	bool ErrorIp = false;
	do
	{
		cout << "------------- Menu -------------" << endl;
		for (int i = 1; i <= 13; i++)
		{
			cout << i << ". Bai " << i << endl;
		}
		cout << "0. Thoat" << endl;
		cout << "--------------------------------" << endl;
		cout << "Hay nhap lua chon [0-13]: "; cin >> Selection;
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
			Bai1();
			break;
		}
		case 2:
		{
			DisplayPageNumber(Selection);
			Bai2();
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
			
			break;
		}
		case 6:
		{
			DisplayPageNumber(Selection);
			Bai6();
			break;
		}
		case 7:
		{
			DisplayPageNumber(Selection);
			Bai7();
			break;
		}
		case 8:
		{
			DisplayPageNumber(Selection);
			Bai8();
			break;
		}
		case 9:
		{
			DisplayPageNumber(Selection);

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
		case 12:
		{
			DisplayPageNumber(Selection);

			break;
		}
		case 13:
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