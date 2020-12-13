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

int _tmain()
{
	const int SIZE = 10;
	const int MAX = 10;
	char s[SIZE][MAX] = {"Load", "Up", "On", "Guns", "Bring", "Your", "Friend", "That", "Overboard", "Pretend"};
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			if (s[i][j] == '\0')
			{
				break;
			}
			cout << s[i][j];
		}
	cout << endl;
	}
	int i = 0;
	int DAYZ = SIZE;
	for (int k = 0; k < DAYZ; k++)
	{
		for (int j = 0; j < MAX; j++)
		{
			char helper;
			helper = s[k][j];
			s[k][j] = s[DAYZ-1][i];
			s[DAYZ-1][i] = helper;
			i++;
		}
		i = 0;
		DAYZ--;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			cout << s[i][j];
		}
	cout << endl;
	}
	getch();
	return 0;
}
