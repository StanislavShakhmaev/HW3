#include <iostream>
#include <cctype>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


#define Calc

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined Calc
	int example_1=0;
	int example_3 = 0;
	char example_2 = 0;
	int ascii = 0;
	int result = 0;
	char answer = 0;
	int ascii_answer = 89;
	cout << "��������� �����������" << endl;
	while (ascii_answer == 89 || ascii_answer == 121)
	{
		cout << "������� ��������� ���� \"a (�������������� ��������) b\"->";
		cin >> example_1 >> example_2 >> example_3;
		if (cin.good())
		{
			ascii = (int)example_2;
			if (ascii == 43)
			{
				result = example_1 + example_3;
				cout << example_1 << example_2 << example_3 << " = " << result;
			}
			else if (ascii == 45)
			{
				result = example_1 - example_3;
				cout << example_1 << example_2 << example_3 << " = " << result;
			}
			else if (ascii == 42)
			{
				result = example_1 * example_3;
				cout << example_1 << example_2 << example_3 << " = " << result;
			}
			else if (ascii == 47)
			{
				if (example_3 == 0) cout << " ������ �� 0 ������";
				else
				{
					result = example_1 / example_3;
					cout << example_1 << example_2 << example_3 << " = " << result;
				}
			}
			else if (ascii == 37)
			{
				result = example_1 % example_3;
				cout << example_1 << example_2 << example_3 << " = " << result;
			}
			else cout << "������� ������������ �������������� ��������";
		}
		else
		{
			cout << "������, ������� ������������ ���������" << endl;
			break;
		}
		cout << endl << "��������� ��� ���? (Y/N)->";
		cin >> answer;
		ascii_answer = (int)answer;
	}

#endif;
}