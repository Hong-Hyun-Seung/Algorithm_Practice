#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int N;
    int K;
    int memo[1000];
    int index = 0;
    int temp;
    queue<int>q;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
	q.push(i);
    while (!q.empty())
    {
	for (int i = 0; i < K - 1; i++)
	{
	    temp = q.front();
	    q.pop();
	    q.push(temp);
	}
	memo[index++] = q.front();
	q.pop();
    }
    printf("<");
    for (int i = 0; i < index - 1; i++)
	printf("%d, ",memo[i]);
    printf("%d>\n", memo[index - 1]);
    return 0;
}