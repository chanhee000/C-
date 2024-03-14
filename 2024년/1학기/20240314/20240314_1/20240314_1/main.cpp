#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << "학생들의 성적을 입력하시오: ";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENTS;
	cout << "성적 평균 = " << average << endl;
	return 0;

}

/*int main()
{
	srand(time(NULL));

	int i, ans;

	cout << "산수 문제를 자동적으로 출제합니다." << endl;
	
	while (true)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		cout << x << "+" << y << "=";
		cin >> ans;

		if (x + y == ans)
		{
			cout << "정답입니다.\n" << endl;
			return 0;
		}
		else
		{
			cout << "오답입니다\n" << endl;
		}
	}


	return 0;
}*/

/*int main()
{
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do
	{
		cout << "정답을 추측하여 보시오: ";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "제시한 정수가 높습니다\n";
		if (guess < answer)
			cout << "제시한 정수가 낮습니다\n";
	} while (guess != answer);

	cout << "축하합니다. 시도 횟수= " << tries << endl;

	return 0;
}*/

/*int main()
{
	int i = 0;

	do
	{
		i++;
		cout << "continue 문장 전에 있는 문장 " << endl;
		continue;
		cout << "continue 문장 후에 있는 문장 " << endl;
	} while (i < 3);
	return 0;
}*/

/*int main()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		cout << i << " ";

		if (i == 9)
			break;
	}

	return 0;
}*/

/*int main()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++)
		sum += i;

	cout << "1부터 10까지 정수의 합 = " << sum << endl;
	return 0;
}*/

/*int main()
{
	string str;
	do
	{
		cout << "문자열을 입력하시오: ";
		getline(cin, str);
		cout << "사용자의 입력: " << str << endl;
	} while (str != "종료");
	return 0;
}*/

/*int main()
{
	int n;
	int i = 1;

	cout << "구구단 중에서 출력하고 싶은 단을 입력하ㅓ시오: ";
	cin >> n;

	while (i <= 9)
	{
		cout << n << "*" << i << "=" << n * i << endl;
		i++;
	}
	return 0;
}*/

/*int main()
{
	int n = 10;
	while (n > 0)
	{
		cout << n << " ";
		n--;
	}
	cout << "발사! \n";
}*/