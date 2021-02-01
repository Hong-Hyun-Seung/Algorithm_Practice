#include<iostream>
#include<vector>
using namespace std;

void f(int, int);
vector<int>v;

int main()
{
    int num_range;
    int length;
    scanf("%d %d", &num_range, &length);
    f(num_range, length);
    return 0;
}

void f(int range, int max)
{
    if (v.size() == max)
    {
	for (int i : v) printf("%d ", i);
	printf("\n");
	return;
    }
    for (int i = 1; i <= range; i++) {
	bool isOk = true;
	for (int j : v) {
	    if (j == i) {
		isOk = false;
		break;
	    }
	}
	if (isOk) {
	    v.push_back(i);
	    f(range, max);
	    v.pop_back();
	}
    }
}
