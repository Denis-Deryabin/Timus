#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int l = s.length(),k=0;
    char* rez = new char[l];
    for (int i = 0; i < l; i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
            if (k == 0 or ch != rez[k - 1])
                rez[k++] = ch;
            else
                k--;
    }
    for(int i=0;i<k;i++)
    cout << rez[i];

    return 0;
}
