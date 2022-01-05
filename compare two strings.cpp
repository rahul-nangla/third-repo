// c++ to compare two strings 
#include<iostream>
#include <string.h>
using namespace std;
class compare
{
	private :
		char str1[50],str2[50];
		public:
			void input()
			{
				cout <<"Enter the string 1 \n";
				gets(str1);
				cout << " Enter the string 2 \n";
				gets(str2);
				
			}
			void output()
			{
				if(strcmp(str1,str2))
				cout <<" string are equal";
				else
				cout <<" string are not equal";
				
			}
};
int main()
{
	compare s;
	s.input();
	s.output();
	return 0;
	}
