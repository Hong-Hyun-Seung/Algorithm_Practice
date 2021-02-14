#include<iostream>
#include<set>
using namespace std;

set<string>n;
set<string>m;

int main()
{
    int N, M;
    char temp[501];
    //char temp_a[501];
    int count = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
	scanf("%s", temp);
	n.insert(temp);
    }
    for (int i = 0; i < M; i++) {
	scanf("%s", temp);
	if (n.find(temp) != n.end())
	    count++;
    }
    printf("%d\n", count);
}