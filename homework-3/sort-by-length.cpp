#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

std::vector<std::string> seglist;
//function that split string and return vector of string
std::vector<std::string> split(std::string str, char delimiter)
{
    std::vector<std::string> internal;
    std::stringstream ss(str); // Turn the string into a stream.
    std::string tok;
    while (getline(ss, tok, delimiter))
    {
        internal.push_back(tok);
    }
    return internal;
}

//function that sort vector of string by length
void sort_by_length(std::vector<std::string> &seglist)
{
    std::stable_sort(seglist.begin(), seglist.end(), [](std::string a, std::string b)
                     { return a.length() <= b.length(); });
    std::reverse(seglist.begin(), seglist.end());
}

int main(int argc, char const *argv[])
{
    int num_test;

    std::string w, aux;

    std::cin >> num_test;
    std::cin.ignore();

    while (num_test--)
    {
        //read string with space
        std::getline(std::cin, w);

        seglist = split(w, ' ');

        //sort
        sort_by_length(seglist);

        //print
        for (int i = 0; i < seglist.size(); i++)
        {
            std::cout << seglist[i];
            if (i != seglist.size() - 1)
                std::cout << " ";
        }
        std::cout << std::endl;

        seglist.clear();
    }

    return 0;
}
