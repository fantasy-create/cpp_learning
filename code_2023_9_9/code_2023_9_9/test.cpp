#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
//
//��������cin���⣬����˵��cin���벢����Ե����з�����������ɵĻس������ᱣ���ڻ�����
//�����һ��cin�����β���Ͽո�ڶ�����Ȼ�������룬
//�������һ��cin�����β���Ͽո����д���ַ����ڶ���cin�Ͳ��ܼ������루ԭ��Ϊʲô��һ�ֽ���ո񲻻ᱣ���ڻ�������
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



//������cin.getline(�ַ������������ճ���)���������У�cin�Կհ׻ᱣ���ڻ�������cin.get()Ҳ�ᣩ������������ʱ�޷��쵽
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


//ƴ�ӷ�ʽ��������

//int main()
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Entry your name :\n";
//	cin.get(name, ArSize).get();           //ƴ�����뺯����ʽ cin.get������������С��.get()
//	cout << "Enter your favorite dessert:\n";
//	cin.get(dessert, ArSize).get();
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << " .\n";
//	return 0;
//
//}




//��������ַ�������ѧcin����
int main()
{
	using namespace std;
	cout << "What year was your house built?\n ";
	int year;
	int test;
	char address[80];
	cin >> year;
	cout << "What is its street address?\n";
	//cin >> test;                               //����cin�������ֺ������������ǿ��Ե�

	//cin >> address;                      //ʹ��ͳһʹ��cin����������ֺ���ĸ������������

	//(cin >> year).get(address,80);          //(��������ôʹ�ã�Ϊʲôʹ�ú����Ǵ��)


	cin.ignore();             //ignore���������һ���ַ�������ڣ�������n�����־ͻ����n���ַ��������س�����

	cin.getline(address,80);                                  //��ʹ��cin.getline������ĸ�������ȴ�����������У�
	                                              ////       ֻ����������
	                                      ////  (ԭ��Ϊʲôcin��cin.getline()����ʱ��cin�ͻ�ѻ��з������ڻ�������)


	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}
