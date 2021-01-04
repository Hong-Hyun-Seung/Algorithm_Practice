#include<iostream>
#include<stack>
using namespace std;

void string_stack(char*);
stack<int>s;

int main()
{
    int input_num;
   // char input[51];
    scanf("%d", &input_num);
    for (int i = 0; i < input_num; i++)
    {
	char input[51];//일케 하면 지역변수마냥 for문 돌때마다 문자열이 새로 생기는건가?
	//아님 초기화를 시켜줘야 하나?
	string_stack(input);
    }
}

void string_stack(char* str)
{
    //printf("####\n");
    while (!s.empty())
	s.pop();
    //printf("1111\n");
    int index = 0;
    scanf("%s", str);
    //printf("2222\n");
    while (str[index] != NULL)
    {
	if (str[index] == '(')
	{
	    s.push(1);
	   // printf("3333\n");
	    index++;
	}
	else//')'가 들어온경우
	{
	    //printf("4444\n");
	    if (s.empty())
	    {
		printf("NO\n");
		return;
	    }
	    else
	    {
		s.pop();
		index++;
	    }
	}
    }
    if (!s.empty())
    {
	printf("NO\n");
	return;
    }
    else
    {
	printf("YES\n");
	return;
    }
}