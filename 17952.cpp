#include<iostream>
#include<stack>
using namespace std;

struct score_time {
    int score;
    int minute;
};

//this line is for github, wether it changes or not when i upload this file via gui
int main()
{//!!!!!cf)scanf�� ����(�����̽���, ��, ����)�� �������� �����͸� �����Ѵ�.!!!!
    //https://wodonggun.github.io/wodonggun.github.io/c/c++/c%EC%96%B8%EC%96%B4-%EB%B2%84%ED%8D%BC.html
    //����ü�ε� ������ ���� �� �ִ�!!!
    //https://hydroponicglass.tistory.com/144
    stack<struct score_time>s;
    int input;
    int sum = 0;
    scanf("%d", &input);
    while (input--)
    {
	int temp1, temp2, temp3;
	scanf("%d", &temp1);
	if (temp1 == 0)
	{
	    if (s.top().minute == 1)
	    {
		sum += s.top().score;
		s.pop();
	    }
	    else
		s.top().minute -= 1;
	    continue;
	}
	else//temp1 != 0
	{
	    scanf("%d", &temp2);
	    scanf("%d", &temp3);
	    s.push({ temp2, --temp3 });
	    if (temp3 == 0)
	    {
		sum += s.top().score;
		s.pop();
	    }
	    else
		s.push({ temp2, temp3 });
	}

    }
    printf("%d\n", sum);
    return 0;
}