#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, y;
    bool pp, qq, ss;

    while (scanf("%d", &n) != EOF)
    {
        priority_queue<int> p;
        queue<int> q;
        stack<int> s;
        pp = true, qq = true, ss = true;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &x, &y);
            if (x == 1)
            {
                p.push(y);
                q.push(y);
                s.push(y);
            }
            else
            {
                if (p.top() != y)
                    pp = false;
                if (q.front() != y)
                    qq = false;
                if (s.top() != y)
                    ss = false;
                p.pop();
                q.pop();
                s.pop();
            }
        }

        if ((pp && qq && ss) || (!pp && qq && ss) || (pp && !qq && ss) || (pp && qq && !ss))
            printf("not sure\n");
        else if (pp && !qq && !ss)
            printf("priority queue\n");
        else if (!pp && qq && !ss)
            printf("queue\n");
        else if (!pp && !qq && ss)
            printf("stack\n");
        else
            printf("impossible\n");
    }

    return 0;
}