
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
#include <string>

int _tmain()
{
	string s1;
    getline(cin, s1, '$'); // По окончанию ввода нужно ввести $
	int s1len = s1.size();
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'c')
		{
			if (s1[i+1] == 'e' || s1[i+1] == 'i' || s1[i+1] == 'y')
			{
				s1.replace(i, 1, "s");
			}
			else
			{
				s1.replace(i, 1, "k");
			}
		}
	}
    for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'q' && s1[i+1] == 'u')
		{
			s1.erase(i,2);
			s1.insert(i, "kv");
		}
		else
		{
			if (s1[i+1] == '\0')
			{
				break;
			}
		}
	}
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'q')
		{
		s1.replace(i, 1, "k");
		}
			else
			{
				if (s1[i] == 'w')
				{
					s1.replace(i, 1, "v");
				}
			}
	}
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'x')
		{
			s1.erase(i, 1);
			s1.insert(i,"ks");
		}
	}
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'p' && s1[i+1] == 'h')
		{
			s1.erase(i,2);
			s1.insert(i, "f");
		}
		else
		{
			if (s1[i+1] == '\0')
			{
				break;
			}
		}
	}
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'y' && s1[i+1] == 'o' && s1[i+2] == 'u')
		{
			s1.erase(i, 3);
			s1.insert(i, "u");
		}
		else
		{
			if (s1[i+2] == '\0')
			{
				break;
			}
		}
	}
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'o' && s1[i+1] == 'o')
		{
			s1.erase(i, 2);
			s1.insert(i, "u");
		}
		else
		{
			if (s1[i+1] == '\0')
			{
				break;
			}
		}
	}
		for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'e' && s1[i+1] == 'e')
		{
			s1.erase(i, 2);
			s1.insert(i, "i");
		}
		else
		{
			if (s1[i+1] == '\0')
			{
				break;
			}
		}
	}
	for (int i = 1; i < s1len; i++)
	{
		if (s1[i] == 'T' && s1[i+1] == 'h')
		{
			s1.erase(i,2);
			s1.insert(i,"Z");
		}
		else
		{
			if (s1[i] == 't' && s1[i+1] == 'h')
			{
				s1.erase(i,2);
				s1.insert(i,"z");
			}
			else
			{
				if (s1[i+1] == '\0')
				{
					break;
				}
			}
		}
	}
	for (int i = 0; i < s1len; i++)
	 {
		if (s1[i] == s1[i+1])
		{
			s1.erase(i, 1);
		}
		else
		{
			if (s1[i+1] == '\0')
			{
				break;
			}
		}
	 }
	cout << s1 << endl;
	getch();
	return 0;
}
