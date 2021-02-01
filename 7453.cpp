#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int SIZE = 4000;
//int A[SIZE], B[SIZE], C[SIZE], D[SIZE];
//int AB[SIZE * SIZE], CD[SIZE * SIZE];
vector<int>A; vector<int>AB;
vector<int>B;
vector<int>C; vector<int>CD;
vector<int>D;

int main()
{
    int num;
    int find;
    int temp1, temp2, temp3, temp4;
    int ab_index = 0;
    int cd_index = 0;
    long long answer = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
	scanf("%d %d %d %d", &temp1, &temp2, &temp3, &temp4);
	A.push_back(temp1); B.push_back(temp2); C.push_back(temp3); D.push_back(temp4);
    }

    for(int i = 0; i < num; i++)
	for (int j = 0; j < num; j++)
	{
	    AB.push_back(A[i] + B[j]);
	    CD.push_back(C[i] + D[j]);
	}
    sort(AB.begin(),AB.end());
    for (int i = 0; i < CD.size(); i++) {
	find = -CD[i];
	answer += (upper_bound(AB.begin(), AB.end(), find) - lower_bound(AB.begin(), AB.end(), find));
    }
    printf("%d\n", answer);
    return 0;
}