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
		cout << "���ڸ� �Է��Ͻÿ�: ";
		cin >> ch;
		for (int i = 0; i < solution.length(); i++) {
			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}
		if (solution == guess) {
			cout << solution << endl;
			cout << "�����Ͽ����ϴ�.!";
			break;
		}
	}
	return 0;
}

/*int main()
{
	string list[] = { "ö��","����","�浿" };
	
	for (auto& x : list)
		cout << (x + "�� �ȳ�!") << endl;
	return 0;
}*/


/*int main()
{
	string s;
	cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�: ";
	cin >> s;
	cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
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
	cout << "�̸��� �Է��Ͻÿ� : ";
	cin >> s1;
	cin.ignore();

	cout << "�ּҸ� �Է��Ͻÿ� : ";
	getline(cin, addr);
	cout << addr << "�� " << s1 << "�� �ȳ��ϼ���" << endl;
	return 0;
}*/


/*int main()
{
	string s1 = "Hello", s2 = "World";

	if (s1 == s2)
		cout << "������ ���ڿ��Դϴ�." << endl;
	else
		cout << "������ ���ڿ��� �ƴմϴ�" << endl;

	if (s1 > s2)
		cout << "s1�� �տ� �ֽ��ϴ�." << endl;
	else
		cout << "s2�� �տ� �ֽ��ϴ�." << endl;

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