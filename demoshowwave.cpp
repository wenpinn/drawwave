// demoshowwave.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
void printaster(int n)
{
	int i;
	for (i = 0;i < n;i++)
		cout << " ";
	cout << "*";
	cout << "     *";
}
void wait(int s)
{
	int i;
	int j;
	for(j=0;j<s;j++)
	for (i = 0;i < 100000;i++);
}
int main()
{
	int i = 0;
	int t = 0;
	int w;
	while (1)
	{
		
		printaster(40*(1+sin(i*3.1416/180)));
		cout << endl;
		i = (i+10 ) % 360;
		wait(1000);
		
	}
    return 0;
}

