#include <iostream>
#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n, m, ans = 0;

    scanf("%d %d", &n, &m);

    int v[n];

    std::priority_queue<std::pair<int, int>> fila;

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < n; i++)
        fila.push(std::make_pair(0, -i));

    while (m--)
    {
        int c;
        scanf("%d", &c);
        int id = -fila.top().second;
        int l = -fila.top().first;
        fila.pop();
        fila.push(std::make_pair(-(l + v[id] * c), -id));
        ans = std::max(ans, l + v[id] * c);
    }

    printf("%d\n", ans);

    return 0;
}
