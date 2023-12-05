#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

string find(char s[], string result)
{
    char* ptr;
    ptr = strtok(s, " ");
    while ((ptr = strtok(NULL, " ")) != NULL)
    {
        if (*(ptr + 0) == 'a')
        {
            result = ptr;
        }
    }
    return result;
}

int main() {
    char str[1000];
    string result;
    ifstream fin("t.txt");
    fin.getline(str, 1000);
    cout << "Result: " << find(str, result) << endl;
    return 0;
}