#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int input;
    int temp;
    queue<int>q;

    scanf("%d", &input);
    for (int i = 0; i < input; i++)//���ÿ��� 1���� N���� push
	q.push(i + 1);
    while (q.size() != 1)//q�� ������� �������� ���ư���
    {
	q.pop();
	q.push(q.front());
	q.pop();
    }
    printf("%d\n", q.front());
    return 0;
}
