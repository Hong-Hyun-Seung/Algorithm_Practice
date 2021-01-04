#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    int input_num;
    int temp;
    int sum = 0;
    scanf("%d", &input_num);
    for (int i = 0; i < input_num; i++)
    {
	scanf("%d", &temp);
	if (temp != 0)
	    s.push(temp);
	else
	    s.pop();
    }
    while (!s.empty())
    {
	sum += s.top();
	s.pop();
    }
    printf("%d\n", sum);
    return 0;
}