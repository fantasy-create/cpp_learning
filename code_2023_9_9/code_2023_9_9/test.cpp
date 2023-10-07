#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
//
//测试书中cin问题，测试说明cin输入并不会吃掉换行符，即输入完成的回车并不会保留在缓冲区
//如果第一个cin输入结尾加上空格第二个仍然可以输入，
//但如果第一个cin输入结尾加上空格后仍写入字符，第二个cin就不能继续输入（原因？为什么第一种结果空格不会保留在缓冲区）
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin >> name;
//	cout << "Enter your favorite dessert:\n";
//	cin >> dessert;
//	cout << "I have some delicious " << dessert;
//	cout << "for you," << name << ".\n";
//	return 0;
//
//}



//可以用cin.getline(字符数组名，接收长度)来输入整行，cin对空白会保存在缓冲区（cin.get()也会）导致输入整句时无法办到
//
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.getline(name,ArSize);
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);
//	cout << "I have some delicious " << dessert;
//	cout << "for you, " << name << " .\n";
//	return 0;
//}


//拼接方式连续输入

//int main()
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Entry your name :\n";
//	cin.get(name, ArSize).get();           //拼接输入函数格式 cin.get（数组名，大小）.get()
//	cout << "Enter your favorite dessert:\n";
//	cin.get(dessert, ArSize).get();
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << " .\n";
//	return 0;
//
//}




//混合输入字符串和数学cin问题
int main()
{
	using namespace std;
	cout << "What year was your house built?\n ";
	int year;
	int test;
	char address[80];
	cin >> year;
	cout << "What is its street address?\n";
	//cin >> test;                               //测试cin输入数字后再输入数字是可以的

	//cin >> address;                      //使用统一使用cin混合输入数字和字母可以正常运行

	//(cin >> year).get(address,80);          //(？？？怎么使用，为什么使用后结果是错的)


	cin.ignore();             //ignore（）会忽略一个字符，如果在（）填上n个数字就会忽略n个字符，遇到回车结束

	cin.getline(address,80);                                  //但使用cin.getline数字字母混合输入却不能正常运行，
	                                              ////       只能输入数字
	                                      ////  (原因？为什么cin和cin.getline()连用时，cin就会把换行符保留在缓冲区里)


	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}
