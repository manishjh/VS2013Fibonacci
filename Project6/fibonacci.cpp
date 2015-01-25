# include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,x=1,y=1,z;
	num = 10;

	for (int i = 1; i <= num; i++)
	{
		if (i <= 2){ z = 1; cout << z<<' '; }
		else{
			z = x + y;
			
			x = y;
			y = z;
			cout << z<<' ';
		}
	}
	

	_getch();
}