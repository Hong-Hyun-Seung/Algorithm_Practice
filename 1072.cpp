#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool f(int);
int x, y;//x는 게임횟수, y는 이긴게임 
int exist;
int main()
{
    scanf("%d %d", &x, &y);
    int left = 0; int right = 1000000000;
    int mid; int answer = 1000000000;
    exist = double(y) * 100 / double(x);
    if (exist >= 99)
	printf("-1\n");
    else {
	while (left <= right) {
	    mid = (left + right) / 2;
	    if (f(mid))//mid만큼 게임을 더 해서, 승률이 바뀜
	    {
		right = mid - 1;
		answer = min(answer, mid);
	    }
	    else//더해야함
		left = mid + 1;
	}
	printf("%d\n", answer);
    }
    return 0;
}

bool f(int num)
{
    int after;
    after = double(y + num) * 100 / double(x + num);
    if (exist < after)
	return true;
    else return false;
}
