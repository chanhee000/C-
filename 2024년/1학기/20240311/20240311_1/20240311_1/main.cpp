#include<iostream>
#include<ctime>
#include<string>

using namespace std;



int main()
{
	int number;

	cout << "숫자를 입력하시오: ";
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

	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;

	if (a >> b && b >> c)
		Largest = a;
	else if (b > a && b > c)
		Largest = b;
	else
		Largest = c;

	cout << "가장 큰 정수는 " << Largest << endl;
	
	return 0;
}*/


/*int main()
{
	int age;
	cout << "나이를 입력하시오: ";
	cin >> age;

	if (age <= 12)
	{
		cout << "어린이 입니다." << endl;
	}
	else if (age <= 19)
	{
		cout << "청소년 입니다." << endl;
	}
	else
	{
		cout << "성인입니다." << endl;
	}
}*/

/*int main()
{
	int x, y;

	cout << "x값을 입력하시오: ";
	cin >> x;

	cout << "y값을 입력하시오: ";
	cin >> y;

	if (x > y)
	{
		cout << "x가 y보다 큽니다" << endl;
	}
	else if(x<y)
	{
		cout << "y가 x보다 큽니다" << endl;
	}
	else
	{
		cout << "x와 y가 같습니다." << endl;

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

	cout << "주사위의 합: " << dice1 + dice2 << endl;

	return 0;
}*/

/*int main()
{
	double f_temp;
	double c_temp;

	cout << "현재 온도:";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "화씨온도: " << f_temp << "도는 섭씨온도: " << c_temp << " 입니다" << endl;
	
	return 0;
}*/

/*int main()
{
	int money;
	int candy_money;
	cout << "현재 소지하고 있는 돈: ";
	cin >> money;
	cout << "사탕의 가격: ";
	cin >> candy_money;

	int candy;
	candy = money/candy_money;
	cout << "최대로 살 수 있는 캔디의 개수: " << candy << endl;

	int save;
	save = money % candy_money;
	cout << "남은 돈: " << save << endl;
}*/

/*int main()
{
	string name;
	cout << "이름을 입력하시오: ";
	cin >> name;
	cout << name << " 을 환영합니다." << endl;
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
