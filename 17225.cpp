#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    int B_term;
    int R_term;
    int customers;
    int moments_memo[100];
    int index = 0;
    scanf("%d %d %d", &B_term, &R_term, &customers);
    while (customers--)
    {
	int starting_time;
	char B_R;
	int number;//��� ��ǰ�� �޾Ƶ��̴���
	scanf("%d %c %d", &starting_time, &B_R, &number);
	if (B_R == 'B')
	{
	    for(int i = 0; i <= number; i++)
	    moments_memo[index++] = starting_time;
	    starting_time += B_term;
	}
	else
	{

	}
    }

}