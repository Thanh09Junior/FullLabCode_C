#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*Bai 1:
int main()
{
	cout << "Hello, World!" << endl;
	cout << "Hello, World! \n";
	system("pause"); //Ngưng chương trình tạm thời (bấm nút bất kì để tiếp tục)
	return 0;
}
*/

/*Bai 2:
int main()
{
	cout << "***************************" << endl;
	cout << "*	Bai thuc hanh 1	  *" << endl;
	cout << "*	Mon: CSLT	  *" << endl;
	cout << "*	MSSV: 2351050164  *" << endl;
	cout << "***************************" << endl;

	system("pause"); 
	return 0;
}
*/

/*Bai 3:
int main()
{
	cout << "  /////" << endl;
	cout << " +-----+" << endl;
	cout << "(| o o |)" << endl;
	cout << " |  ^  |" << endl;
	cout << " | ’-’ |" << endl;
	cout << " +-----+" << endl;

	system("pause");
	return 0;
}
*/

/*Bai 4:
int main()
{
	cout << "  /\\" << endl;
	cout << " /  \\" << endl;
	cout << "+----+" << endl;
	cout << "| .-.|" << endl;
	cout << "| | ||" << endl;
	cout << "+-+-++" << endl;

	system("pause");
	return 0;
}
*/

/*Bai 5:
int main()
{
	cout << "*********   ***     *       *" << endl;
	cout << "*       *  *   *   ***     * *" << endl;
	cout << "*       * *     * *****   *   *" << endl;
	cout << "*       * *     *   *    *     *" << endl;
	cout << "*       * *     *   *   *       *" << endl;
	cout << "*       * *     *   *    *     *" << endl;
	cout << "*       * *     *   *     *   *" << endl;
	cout << "*       *  *   *    *      * *" << endl;
	cout << "*********   ***     *       *" << endl;


	system("pause");
	return 0;
}

*/

//Bai 6:
int main()
{
	string username; //Khai báo kiểu dữ liệu string có tên username
	cout << "Xin chao, ten toi la Hoa!" << endl;
	cout << "Ten ban la gi?"; cin >> username;
	cout << "Chao ban, " << username << "!" << endl;
	cin.ignore(); //Muốn dùng getline thì phải có cái này nếu trước đó có thao tác nhập xuất
	cout << "Ten ban la gi? "; getline(cin, username);
	cout << "Chao ban, " << username << "!" << endl;


	system("pause");
	return 0;
}





