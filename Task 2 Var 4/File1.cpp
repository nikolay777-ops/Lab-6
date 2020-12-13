#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
using namespace std;
#include <iostream>
#include <conio.h>

int main()   // Изначально нужно вводить саму строку, затем подстроку, символ, после которого вставить
{
	char s1[255] = {};
	gets(s1);
	fflush(stdin);
	char s2[255] = {};
	gets(s2);
	char symbol;
	cin >> symbol;
	for (int i = 0; i < strlen(s1); i++)
	{
		cout << s1[i];
		if (s1[i] == symbol)
		{
			for (int j = 0; j < strlen(s2); j++)
			{
				cout << s2[j];
			}
		}
	}
	getch();
	return 0;
}
