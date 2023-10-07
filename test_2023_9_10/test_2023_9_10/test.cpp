#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<cstring>

//初识string类

//int main()
//{
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	cout << "Enter a kind of feline: ";
//	cin >> charr1;
//	cout << "Enter another kind of feline: ";
//	cin >> str1;
//	cout << "Here are some feline:\n";
//	cout << charr1 << " " << charr2 << " "
//		<< str1 << " " << str2
//		<< endl;
//	cout << "The third letter in " << charr2 << " is "
//		<< charr2[2] << endl;
//	cout << "The third letter in " << str2 << " is "
//		<< str2[2] << endl;
//	return 0;
//
//}


// string对象和字符数组的区别就是，可以将string对象声明为简单变量，而不是数组（特点就是变量可以赋值给另外一个变量）
//如下例

//int main()
//{
//	using namespace std;
//
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "pather";
//
//	//charr1 = charr2;              //复制失败，多个数组不能直接进行赋值
//	str1 = str2;
//
//	//cout << charr2;
//	cout << str2;
//
//
//	return 0;
//}


//string字符串的合并,普通字符数组的合并

int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;
	char charr1[20];
	char charr2[20] = "jaguar";

	cout << "You can assign one string object to another : s2 = s1 \n";

	s2 = s1;             //string字符串的直接变量赋值
	strcpy(charr1, charr2);

	cout << "s1:" << s1 << ",s2:" << s2 << endl;
	cout << "You can concatenate string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";

	s2 = "buzzard";
	cout << "s2:" << s2 << endl;
	cout << "You can concatenate strings: s3 = s1 + s2\n";

	s3 = s1 + s2;            //string字符首尾相接，两字符串合在一起

	strcat(charr1, " juice");

	cout << "s3:" << s3 << endl;
	cout << "charr1:" << charr1 << endl;
	cout << "You can append strings.\n";

	s1 += s2;

	cout << "s1+=s2 yields s1 = " << s1 << endl;

	s2 += "for a day ";                    //string字符串添加非变量字符串         

	cout << "s2 +=\" for a day \" yields s2 = " << s2 << endl;
	return 0;

}




// 原始字符串raw使用（与上比较）
//
//int main()
//{
//	using namespace std;
//
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "You can assign one string object to another : s2 = s1 \n";
//
//	s2 = s1;            
//
//	cout << "s1:" << s1 << ",s2:" << s2 << endl;
//	cout << "You can concatenate string to a string object.\n";
//	cout << R"(s2 = "buzzard")";               //使用raw格式
//	                    ////普通格式：R"()"   ,但是想在括号里面使用括号，就要把格式转换为：R"+*()+*"。
//	
//	             ////注意：使用原始字符串raw时，换行不能用\n，raw会让转义序列失效
//
//	s2 = "buzzard";
//	cout << "s2:" << s2 << endl;
//	cout << "You can concatenate strings: s3 = s1 + s2\n";
//
//	s3 = s1 + s2;      
//
//	cout << "s3:" << s3 << endl;
//	cout << "You can append strings.\n";
//
//	s1 += s2;
//
//	cout << "s1+=s2 yields s1 = " << s1 << endl;
//
//	s2 += "for a day ";                        
//
//	cout << R"(s2 +=" for a day " yields s2 = )"<< s2 << endl;
//
//	return 0;
//
//}