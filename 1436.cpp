#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int N;
    int num = 0;
    scanf("%d", &N);
    for (int i = 666; i <= 6669999; i++)
    {
	string s;
	s = to_string(i);
	//system("pause");
	if (s.find("666")!=-1)
	    num++;
	if (num == N)
	{
	    printf("%d", i);
	    break;
	}
    }
    return 0;
}