#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch;
	string solution;
	string list[] =
	{
	"the",
	"c++",
	"programming",
	"language",
	};
		int n = rand() % 4;
	solution = list[n];
	string guess(solution.length(), '_');
	while (true) {
		cout << guess << endl;
		cout << "글자를 입력하시오: ";
		cin >> ch;
		for (int i = 0; i < solution.length(); i++) {
			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}
		if (solution == guess) {
			cout << solution << endl;
			cout << "성공하였습니다.!";
			break;
		}
	}
	return 0;
}

/*int main()
{
	string list[] = { "철수","영희","길동" };
	
	for (auto& x : list)
		cout << (x + "야 안녕!") << endl;
	return 0;
}*/


/*int main()
{
	string s;
	cout << "주민등록번호를 입력하시오: ";
	cin >> s;
	cout << "-가 제거된 주민등록번호: ";
	for (auto& c : s) {
		if (c == '-') continue;
		cout << c;
	}
	cout << endl;
	return 0;
}*/

/*int main()
{
	string s = "When in Rome, do as the Romans.";

	int index = s.find("Rome");
	cout << index << endl;

	return 0;
}*/

/*int main()
{
	string s1, addr;
	cout << "이름을 입력하시오 : ";
	cin >> s1;
	cin.ignore();

	cout << "주소를 입력하시오 : ";
	getline(cin, addr);
	cout << addr << "의 " << s1 << "씨 안녕하세요" << endl;
	return 0;
}*/


/*int main()
{
	string s1 = "Hello", s2 = "World";

	if (s1 == s2)
		cout << "동일한 문자열입니다." << endl;
	else
		cout << "동일한 문자열이 아닙니다" << endl;

	if (s1 > s2)
		cout << "s1이 앞에 있습니다." << endl;
	else
		cout << "s2가 앞에 있습니다." << endl;

	return 0;
}*/
/*int main()
{
	string s1 = "Slow", s2 = "steady";
	string s3 = "the race.";
	string s4;

	s4 = s1 + " and " + s2 + " wins " + s3;
	cout << s4 << endl;
	return 0;
}*/