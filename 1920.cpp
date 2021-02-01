#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<int>v;
vector<int>b;

bool binsearch(int);

int main()
{
    int N;
    int M;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
	int temp;
	scanf("%d", &temp);
	v.push_back(temp);
    }
    sort(v.begin(), v.end());
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
	int temp;
	scanf("%d", &temp);
	printf("%d\n", binsearch(temp));
    }
}

bool binsearch(int find)
{
    int left, right, mid;
    left = 0, right = v.size() - 1;//�迭�� ����������, index�� 0���� �����ϴϱ� �翬�� ���Ұ���-1�� right!!
    while (left <= right) {
	mid = (left + right) / 2;
	if (v[mid] == find)
	    return true;
	else if (v[mid] > find)
	    right = mid - 1;
	else //v[(left + right) / 2] < find
	    left = mid + 1;
    }
    return false;
}