#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string>A;
vector<string>ans;
int N, M;

//bool bin_search(string);

int main()
{
    int answer = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
	string temp;
	cin >> temp;
	A.push_back(temp);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < M; i++)
    {
	string temp;
	cin >> temp;
	//B.push_back(temp);
	if (binary_search(A.begin(), A.end(), temp)) {
	    answer++;
	    ans.push_back(temp);
	}
    }
    printf("%d\n", answer);
    sort(ans.begin(), ans.end());
    for (string i : ans)
	cout << i << '\n';

    return 0;
}
/*
bool bin_search(string find)
{
    int left = 0;
    int right = N - 1;
    int mid;
    while (left <= right)
    {
	mid = (left + right) / 2;
	if (A[mid] == find)
	    return true;
	else if (A[mid] > find)
	    right = mid - 1;
	else//A[mid] < find
	    left = mid + 1;
    }
    return false;
}
*/