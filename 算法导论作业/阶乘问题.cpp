#include<iostream>
#include<string>
using namespace std;

//递归方法
//int fun(int n)
//{
//	if (n < 1)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else 
//		return n * fun(n - 1);
//}

//递推方法
int test(int n)
{
	if (n < 1)
		return 0;

	int sum = 1;
	for (int i = 1; i < n + 1; i++)
	{
		sum *= i;
	}
	return sum;

}



int main()
{
	int n;
	cout << "请输入阶乘n!的值：";
	cin >> n;
	//cout << "阶乘" << n << "!的值为：" << fun(n) << endl;
	cout << "阶乘" << n << "!的值为：" << test(n) << endl;

	return 0;
}