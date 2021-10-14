#include <iostream>
using namespace std;

//递归实现
int Fibonaccisequence(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibonaccisequence(n - 1) + Fibonaccisequence(n - 2);
	}
}
int main()
{
	int n;	//n表示为第几个数值
	while (cin >> n)
	{
		int res = Fibonaccisequence(n);
		cout << "第" << n << "位的斐波那契数为：" << res << endl;

		//cout << res << endl;
	}
	return 0;
}

//递推实现
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//
//		int s1 = 1;
//		int	s2 = 1;
//		int sn = 0;
//		if (n == 1 || n == 2)
//		{
//			cout << "第" << n << "位的斐波那契数为：" << s1 << endl;
//
//		}
//		else
//		{
//
//
//			for (int i = 3; i <= n; i++)
//			{
//				sn = s1 + s2;
//				s1 = s2;
//				s2 = sn;
//			}
//			cout << "第" << n << "位的斐波那契数为：" << sn << endl;
//		}
//	}
//	return 0;
//}


