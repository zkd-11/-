#include <iostream>
using namespace std;
int val(int n)
{
	int a;
	if (n == 1)
		return 1;
	else
		return a = 2 * val(n - 1) + 1;
}
int main()
{
	int num;
	cout << "请输入需要移动的盘子数目：";
	cin >> num;
	if (num <= 0) {
		cout << "输入的数必须大于0" << endl;
		return -1;
	}
	else
		cout << "需要 " << val(num) << " 次" << endl;


	return 0;
}