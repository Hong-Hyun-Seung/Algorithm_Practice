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
	char input[51];//���� �ϸ� ������������ for�� �������� ���ڿ��� ���� ����°ǰ�?
	//�ƴ� �ʱ�ȭ�� ������� �ϳ�?
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
	else//')'�� ���°��
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