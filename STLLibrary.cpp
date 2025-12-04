// C++ STL : Standard template library

#include <iostream>
#include <map>
using namespace std;

int main()
{
   map<string, int> m;

    m["apple"] = 1;
    m["banana"] = 2;
    m["cherry"] = 3;
    m["apple"] = 25;

    cout << m["banana"] << endl;   

    return 0;
}