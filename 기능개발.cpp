#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

stack<int>s;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> leftover;
    int index = 0;
    int num = 0;
    int bottom = 0;
    for (int i = 0; i < progresses.size(); i++)
    {
        double temp = ceil(((double)((100 - progresses[i])) / (double)(speeds[i])));
        leftover.push((int)temp);
    }
    while (1)
    {
        int num = 0;
        if (leftover.empty())
        {
            while (!s.empty())
            {
                num++;
                s.pop();
            }
          
            answer.push_back(num);
            break;
        }
        else
        {
            if (s.empty())
            {
                s.push(leftover.front());
                leftover.pop();
                bottom = s.top();
            }
            else if (bottom >= leftover.front())
            {
                s.push(leftover.front());
                leftover.pop();
            }
            else
            {
                while (!s.empty())
                {
                    num++;
                    s.pop();
                }
                answer.push_back(num);
            }
        }
    }
    return answer;
}

int main()
{
    vector<int>pro;
    vector<int>spe;
    pro.push_back(99);
    pro.push_back(1);
    pro.push_back(99);
    pro.push_back(1);
    //pro.push_back(80);
    //pro.push_back(99);
    spe.push_back(1);
    spe.push_back(1);
    spe.push_back(1);
    spe.push_back(1);
    //spe.push_back(1);
    //spe.push_back(1);
    solution(pro, spe);

}