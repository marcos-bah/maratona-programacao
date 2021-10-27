#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char comp;
    char line[1200];
    char *pch;
    int flag;
    while (cin.getline(line, 1200))
    {
        if (line[0] == '*')
            break;
        flag = 0;
        comp = 32;
        pch = strtok(line, " ");
        while (pch != NULL)
        {
            if (comp == 32)
                comp = pch[0];
            else
            {
                if (pch[0] >= 65 && pch[0] <= 90)
                {
                    if (comp == pch[0] || comp == pch[0] + 32)
                    {
                        flag = 0;
                    }
                    else
                        flag = 1;
                }
                else
                {
                    if (comp == pch[0] || comp == pch[0] - 32)
                    {
                        flag = 0;
                    }
                    else
                        flag = 1;
                }
            }
            if (flag == 1)
                break;
            pch = strtok(NULL, " ");
        }
        if (flag == 1)
            printf("N\n");
        else
            printf("Y\n");
    }

    return 0;
}