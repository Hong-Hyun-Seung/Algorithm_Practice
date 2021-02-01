#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int K;
int N;
vector<int>v;

long long get(int);

int main()
{
    scanf("%d %d", &K, &N);
    for (int i = 0; i < K; i++)
    {
	int temp; scanf("%d", &temp);
	v.push_back(temp);
    }
    int left = 0; int right = (int)pow(2, 31) - 1;
    int mid; int answer = -1;
    while (left <= right) {
	mid = (left + right) / 2;
	if (get(mid) >= N)//조건만족
	{
	    left = mid + 1;
	    answer = max(answer, mid);
	}
	else//조건 불만족
	    right = mid - 1;
    }
    printf("%d", answer);
}

long long get(int temp)
{
    int num = 0;
    for (int i : v)
	num += i / temp;
    return num;
}
