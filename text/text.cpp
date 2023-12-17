#include <iostream>

using namespace std;

string text_compression(string a) {
    string buf = "";
    bool counter = true;
    
    for (int i = 0; i < a.size();i++)
    {
        if (a[i] == ' ' && counter == true)
        {
            buf += a[i];
            counter = false;
            continue;
        }

        if (a[i] != ' ')
        {
            buf += a[i];
            counter = true;
        }
    }
    return buf;
}
 
int main()
{
    string a = "asdasd     asdasd sadasd asd as d as dasdasd as d    asd";
    cout << text_compression(a);
}

