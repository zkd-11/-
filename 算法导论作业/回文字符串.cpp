#include <iostream>
#include <string>
using namespace std;
/*
	递归判断是否是回文串
	回文串："abccba", "aba"
*/

int isHuiWenChuan(const string &strTest)
{
	static int i = 0;
	int j = strlen(strTest.c_str()) - 1 - i;
	if (strTest[i] == strTest[j])
	{
		if (j - i <= 2)
		{
			cout << strTest<<" is a palindrome" << endl;

		}
		else
		{
			i++;
			return isHuiWenChuan(strTest);
		}
	}
	else
	{
		cout << strTest << " is not a palindrome" << endl;
	}
}
//bool isHuiWenChuan(const string &strTest)
//{
//	static int i = 0;
//	int j = strlen(strTest.c_str()) - 1 - i;
//	if (strTest[i] == strTest[j])
//	{
//		if (j - i <= 2)
//		{
//			return true;
//
//		}
//		else
//		{
//			i++;
//			return isHuiWenChuan(strTest);
//		}
//	}
//	else
//	{
//		return false;
//	}
//}


int main()
{
	string strVal = "abccba";
	string strVal2 = "abcbba";
	string strVal3 = "tlt";

	bool bH = isHuiWenChuan(strVal);

	bool bH2 = isHuiWenChuan(strVal2);

	bool bH3 = isHuiWenChuan(strVal3);

	return 0;
}

//int main()
//{
//	char a[100] = { 0 };
//	int i = 0;
//	int len = 0;
//	cin >> a;
//	len = strlen(a); //计算输入字符串的长度；
//
//	for (i = 0; i < (len / 2); i++) //只需要判断前一半（len/2）长度就好了
//	{
//		if (a[i] != a[len - 1 - i]) //判断是否为回文数；
//		{
//			cout << a << " is not a palindrome" << endl;
//			return 0;
//		}
//	}
//	cout << a << " is a palindrome" << endl;
//	return 0;
//}

