#include<iostream>
#include<vector>
using namespace std;

vector<int>T;
vector<int>P;
int N;

int find_max(int);

int main()
{
    T.push_back(0);
    P.push_back(0);
    //���� ������ T�� P������ index�� 1���� �����ϱ� ���Կ�
    int max = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
	int temp1, temp2;
	scanf("%d %d", &temp1, &temp2);
	T.push_back(temp1);
	P.push_back(temp2);
    }
    for (int i = 1; i <= N; i++)
    {
	if (find_max(i) > max)
	    max = find_max(i);
    }
    printf("%d", max);
    return 0;
}

int find_max(int index)
{
    int cost = 0;
    while (1)
    {
	if (index == N)//������ ���� 
	    if (T[N] != 1)
		break;
	if (index >= N + 1)
	    break;
	if (index + T[index] > N + 1)
	    break;
	cost = cost + P[index];
	index = index + T[index];
    }
    return cost;
}