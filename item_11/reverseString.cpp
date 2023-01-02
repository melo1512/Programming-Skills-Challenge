#include <bits/stdc++.h>
using namespace std;

string reverseString(string str, int start, int end)
{
    while (start < end)
    {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];
  
        ++start;
        --end;
    }
    return str;
}
  
int main()
{
    char Str[1000];
    int i;
 
    printf("Informe a String: ");
    scanf("%s", Str);

    for (i = 0; Str[i] != '\0'; ++i);

    cout << reverseString(Str, 0, i-1);
    return 0;
}