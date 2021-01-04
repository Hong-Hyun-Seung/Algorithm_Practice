#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int input;
    int temp;
    queue<int>q;

    scanf("%d", &input);
    for (int i = 0; i < input; i++)//스택에다 1부터 N까지 push
	q.push(i + 1);
    while (q.size() != 1)//q가 비어있지 않을동안 돌아간다
    {
	q.pop();
	q.push(q.front());
	q.pop();
    }
    printf("%d\n", q.front());
    return 0;
}
