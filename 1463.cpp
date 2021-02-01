#include<iostream>
using namespace std;

int find(int);
int tries = 0;
int main()
{
    int result;
    int input;
    scanf("%d", &input);
    result = find(input);
    printf("%d", result);
}

int find(int num)
{
    
    if (num == 1)
	return tries;
    else if ((num - 1) % 3 == 0)
    {
	tries++;
	num = num - 1;
	find(num);
    }
    else if (num % 3 == 0) {
	tries++;
	num = num / 3;
	find(num);
    }
    else if (num % 2 == 0) {
	tries++;
	num = num / 2;
	find(num);
    }
    else if ((num % 3 != 0) && (num % 2 != 0))
    {
	tries++;
	num = num - 1;
	find(num);
    }
}