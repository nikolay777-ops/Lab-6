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

int main()
{
	char string[] = {};
	cin >> string;
	for (int i = 0; i <= strlen(string); i++)
	{
		int k = i;
		while (string[i] == string[i+1]) i++;
		if (abs(k+1-i) % 2 == 0)
		{
			for (int t = k; t <= i; t++)
			{
				cout << string[t];
			}
			cout << endl;
		}
	}
	getch();
	return 0;
}
