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

void c_ch(string &s1, int s1len)
{
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
}
void oo_ch(string &s1, int s1len)
{
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'o' && s1[i+1] == 'o')
		{
			s1.erase(i, 2);
			s1.insert(i, "u");
		}
		else
		{
			break;
		}
	}
}
void qu_ch(string &s1, int s1len)
{
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
}
void q_ch(string &s1, int s1len)
{
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
}
void x_ch(string &s1, int s1len)
{
	for (int i = 0; i < s1len; i++)
	{
		if (s1[i] == 'x')
		{
			s1.erase(i, 1);
			s1.insert(i,"ks");
		}
	}
}
void ph_ch(string &s1, int s1len)
{
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
}
void you_ch(string &s1, int s1len)
{
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
}
void ee_ch(string &s1, int s1len)
{
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
}
void th_ch(string &s1, int s1len)
{
	for (int i = 1; i < s1len; i++)
	{
		if (s1[i] == 'T' && s1[i+1] == 'h')
		{
			s1.erase(i,2);
			s1.insert(i,"Z");
		}
		else
		{
			if (s1[i] == 't' && s1[i+1] == 'h' )
			{
				s1.erase(i,2);
				s1.insert(i, "z");
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
}
void double_ch(string &s1, int s1len)
{
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
}
int _tmain()
{
	string s1("Too swift for quick for Gallow, Too strong for young Prince to follow.");
	getline(cin, s1, '$');
	int s1len = s1.size();
	c_ch(s1, s1len);
	qu_ch(s1, s1len);
	oo_ch(s1, s1len);
	q_ch(s1, s1len);
	x_ch(s1, s1len);
	ph_ch(s1, s1len);
	you_ch(s1, s1len);
	ee_ch(s1, s1len);
	th_ch(s1, s1len);
	double_ch(s1, s1len);
	cout << s1 << endl;
	getch();
	return 0;
}
