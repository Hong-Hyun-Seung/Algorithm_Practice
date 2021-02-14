#include<iostream>
#include<queue>
#include<vector>
using namespace std;

priority_queue<int>pq;

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
	int temp;
	scanf("%d", &temp);
	if (temp == 0) {
	    if (pq.empty())
		printf("0\n");
	    else {
		printf("%d\n", pq.top());
		pq.pop();
	    }
	}
	else
	    pq.push(temp);
    }
    return 0;
}