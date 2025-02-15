#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

//void test1()
//{
//	string s1("abcdef");
//	string s2(s1);
//	string s3 = s2 +="ghijk";
//
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//
//}
//
//
//
//int main()
//{
//	test1();
//
//
//
//
//	return 0;
//}


//#include "Stack.hpp"

//namespace bit
//{
//	template<typename T>
//	void swap(T& left, T& right)
//	{
//		T temp = left;
//		left = right;
//		right = temp;
//	}
//}
//
//int main()
//{
//	int a = 0, b = 1;
//	bit::swap(a, b);
//	std::swap(a, b);
//	swap(a, b);
//
//	return 0;
//}

//int main()
//{
//	Stack<int> st;
//	st.Push(1);
//	st.Push(2);
//
//	Stack<double> stt;
//	stt.Push(1.1);
//	stt.Push(2.2);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "apple";
//
//	char arr3[] = "卧槽";
//	arr3[3]--;
//	arr3[3]--;
//	arr3[3]++;
//	arr3[3]++;
//	arr3[3]++;
//	arr3[3]++;
//
//	return 0;
//}

// 动态增长字符数组
//template<class T>
//class basic_string
//{
//private:
//	T* _str;
//	size_t _size;
//	size_t _capacity;
//};
//
//typedef basic_string<char> string;

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

void test_test1()
{
	string s1;
	string s2("西安市雁塔区");
	string s3 = "西安市雁塔区";

	string s4(10, '*');

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	s2 += "莱安中心";

	cout << s2 << endl;

	string s5(s2);
	string s6 = s2;
	cout << s5 << s6 << endl;

	string s7("hello world", 5);
	cout << s7 << endl;

	string s8(s7, 2, 3);
	cout << s8 << endl;

	string s9(s7, 2, 30);
	cout << s9 << endl;

	string s10(s7, 2);
	cout << s10 << endl;
}

//char& operator[](size_t i)
//{
//  assert(i < _size);
//	return _str[i];
//}

void test_string2()
{
	string s1("1234");
	// 遍历他

	// 1、下标 []
	for (size_t i = 0; i < s1.size(); ++i)
	{
		s1[i]++;
	}
	//s1[10];
	cout << s1 << endl;

	// 2、范围for
	for (auto& ch : s1)
	{
		ch--;
	}
	cout << s1 << endl;

	// 反转一下
	size_t begin = 0, end = s1.size() - 1;
	while (begin < end)
	{
		swap(s1[begin++], s1[end--]);
	}
	cout << s1 << endl;

	//reverse(s1.begin(), s1.end());
	cout << s1 << endl;

	// 3、迭代器  -- 通用的访问形式
	string::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		*it1 += 1;
		++it1;
	}

	it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	vector<int> v;
	vector<int>::iterator vit = v.begin();
	while (vit != v.end())
	{
		cout << *vit << " ";
		vit++;
	}
	cout << endl;

	list<int> lt;
	list<int>::iterator ltit = lt.begin();
	while (ltit != lt.end())
	{
		cout << *ltit << " ";
		ltit++;
	}
	cout << endl;
}

// 正向  反向 -- 可以遍历读写容器数据
// const正向  const反向   -- 只能遍历，不能修改容器数据
void Print(const string& s)
{
	// 遍历读，不支持写
	string::const_iterator it = s.begin();
	//const string::iterator it = s.begin();
	while (it != s.end())
	{
		// *it += 1;

		cout << *it << " ";
		++it;
	}
	cout << endl;

	//string::const_reverse_iterator rit = s.rbegin();
	auto rit = s.rbegin();
	while (rit != s.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}

void test_string3()
{
	string s1("1234");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//string::reverse_iterator rit = s1.rbegin();
	auto rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;

	Print(s1);
}

void test_string4()
{
	string s("hello world");
	cout << s.size() << endl;
	cout << s.length() << endl;
	cout << s.capacity() << endl;

	cout << s.max_size() << endl;
	string ss;
	cout << ss.max_size() << endl;

	cout << s << endl;
	cout << s.capacity() << endl;
	s.clear();

	cout << s << endl;
	cout << s.capacity() << endl;
}

void TestPushBack()
{
	string s;
	s.reserve(500);
	size_t sz = s.capacity();
	cout << "capacity changed: " << sz << '\n';
	cout << s.size() << endl;
	cout << "making s grow:\n";
	for (int i = 0; i < 1000; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_string5()
{
	TestPushBack();
}

void test_string6()
{
	string s1("hello world");
	s1.resize(5);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl << endl;

	string s2("hello world");
	//s2.resize(15);
	s2.resize(15, 'x');
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	cout << s2 << endl << endl;

	string s3("hello world");
	s3.resize(20, 'x');
	cout << s3.size() << endl;
	cout << s3.capacity() << endl;
	cout << s3 << endl << endl;
}

void test_string7()
{
	/*string s1("hello world");
	s1.push_back(' ');
	s1.push_back('!');
	s1.append("hello world");
	cout << s1 << endl;

	string s2("!!!!!!!");
	s1.append(s2);
	cout << s1 << endl;*/

	string s1("hello world");
	s1 += ' ';
	s1 += '!';
	s1 += "hello world";
	cout << s1 << endl;

	string s2("!!!!!!!");
	s1 += s2;
	cout << s1 << endl;
}

int main()
{
	test_string7();

	return 0;
}