#include<iostream>
#include<string>
#include<map>
using namespace std;

map<int, string>num;
map<string, int>name;

int main()
{
    int line, question;
    char temp[20];
    scanf("%d %d", &line, &question);
    for (int i = 1; i <= line; i++) {
	//cin >> temp;
	scanf("%s", temp);
	num.insert({ i, temp });
	name.insert({ temp, i });
    }
    for (int i = 0; i < question; i++)
    {
	//string temp;
	//cin >> temp;
	char temp[20];
	scanf("%s", temp);
	if (temp[0] >= '0' && temp[0] <= '9')
	    cout << num[stoi(temp)] << '\n';
	else
	    cout << name[temp] << '\n';
    }
    return 0;
}