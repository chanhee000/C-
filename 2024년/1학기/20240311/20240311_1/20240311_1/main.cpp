#include<iostream>
#include<ctime>
#include<string>

using namespace std;



int main()
{
	int number;

	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> number;

	switch (number)
	{
	  case 0:
		  cout << "zero\n";
		  break;
	  case 1:
		  cout << "one\n";
		  break;
	  case 2:
		  cout << "two\n";
		  break;
	  default:
		  cout << "many\n";
		  break;
	}
}
/*int main()
{
	int a, b, c, Largest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;

	if (a >> b && b >> c)
		Largest = a;
	else if (b > a && b > c)
		Largest = b;
	else
		Largest = c;

	cout << "���� ū ������ " << Largest << endl;
	
	return 0;
}*/


/*int main()
{
	int age;
	cout << "���̸� �Է��Ͻÿ�: ";
	cin >> age;

	if (age <= 12)
	{
		cout << "��� �Դϴ�." << endl;
	}
	else if (age <= 19)
	{
		cout << "û�ҳ� �Դϴ�." << endl;
	}
	else
	{
		cout << "�����Դϴ�." << endl;
	}
}*/

/*int main()
{
	int x, y;

	cout << "x���� �Է��Ͻÿ�: ";
	cin >> x;

	cout << "y���� �Է��Ͻÿ�: ";
	cin >> y;

	if (x > y)
	{
		cout << "x�� y���� Ů�ϴ�" << endl;
	}
	else if(x<y)
	{
		cout << "y�� x���� Ů�ϴ�" << endl;
	}
	else
	{
		cout << "x�� y�� �����ϴ�." << endl;

	}
}*/

/*int main()
{
	bool b;
	b = (1 == 2);

	cout << std::boolalpha;
	cout << b << endl;

	return 0;
}*/

/*int main()
{
	srand(time(NULL));

	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "dic1: ";
	cout << dice1;
	cout << "\n";

	cout << "dic2: ";
	cout << dice2;
	cout << "\n";

	cout << "�ֻ����� ��: " << dice1 + dice2 << endl;

	return 0;
}*/

/*int main()
{
	double f_temp;
	double c_temp;

	cout << "���� �µ�:";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ�: " << f_temp << "���� �����µ�: " << c_temp << " �Դϴ�" << endl;
	
	return 0;
}*/

/*int main()
{
	int money;
	int candy_money;
	cout << "���� �����ϰ� �ִ� ��: ";
	cin >> money;
	cout << "������ ����: ";
	cin >> candy_money;

	int candy;
	candy = money/candy_money;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����: " << candy << endl;

	int save;
	save = money % candy_money;
	cout << "���� ��: " << save << endl;
}*/

/*int main()
{
	string name;
	cout << "�̸��� �Է��Ͻÿ�: ";
	cin >> name;
	cout << name << " �� ȯ���մϴ�." << endl;
	return 0;
}*/

/*int main()
{
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";

	cout << s3 << endl;
}*/

/*int main()
{
	cout << "Hello World!" << endl;

	return 0;
}*/
