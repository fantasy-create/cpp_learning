#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<cstring>

//��ʶstring��

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


// string������ַ������������ǣ����Խ�string��������Ϊ�򵥱��������������飨�ص���Ǳ������Ը�ֵ������һ��������
//������

//int main()
//{
//	using namespace std;
//
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "pather";
//
//	//charr1 = charr2;              //����ʧ�ܣ�������鲻��ֱ�ӽ��и�ֵ
//	str1 = str2;
//
//	//cout << charr2;
//	cout << str2;
//
//
//	return 0;
//}


//string�ַ����ĺϲ�,��ͨ�ַ�����ĺϲ�

int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;
	char charr1[20];
	char charr2[20] = "jaguar";

	cout << "You can assign one string object to another : s2 = s1 \n";

	s2 = s1;             //string�ַ�����ֱ�ӱ�����ֵ
	strcpy(charr1, charr2);

	cout << "s1:" << s1 << ",s2:" << s2 << endl;
	cout << "You can concatenate string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";

	s2 = "buzzard";
	cout << "s2:" << s2 << endl;
	cout << "You can concatenate strings: s3 = s1 + s2\n";

	s3 = s1 + s2;            //string�ַ���β��ӣ����ַ�������һ��

	strcat(charr1, " juice");

	cout << "s3:" << s3 << endl;
	cout << "charr1:" << charr1 << endl;
	cout << "You can append strings.\n";

	s1 += s2;

	cout << "s1+=s2 yields s1 = " << s1 << endl;

	s2 += "for a day ";                    //string�ַ�����ӷǱ����ַ���         

	cout << "s2 +=\" for a day \" yields s2 = " << s2 << endl;
	return 0;

}




// ԭʼ�ַ���rawʹ�ã����ϱȽϣ�
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
//	cout << R"(s2 = "buzzard")";               //ʹ��raw��ʽ
//	                    ////��ͨ��ʽ��R"()"   ,����������������ʹ�����ţ���Ҫ�Ѹ�ʽת��Ϊ��R"+*()+*"��
//	
//	             ////ע�⣺ʹ��ԭʼ�ַ���rawʱ�����в�����\n��raw����ת������ʧЧ
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