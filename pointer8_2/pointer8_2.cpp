// pointer8_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	int* p1, * p2;
	p1 = new int;
	*p1 = 42;
	p2 = p1;
	cout << "*p1 ==" << *p1 << endl;
	cout << "*p2 ==" << *p2 << endl;

	*p2 = 53;
	cout << "*p1 ==" << *p1 << endl;
	cout << "*p2 ==" << *p2 << endl;

	p1 = new int;
	*p1 = 88;

	cout << "*p1 ==" << *p1 << endl;
	delete p1;
	cout << "*p2 ==" << *p2 << endl;

	return 0;
}

