

#include <iostream>
#include "AutoShow.h"

using namespace std;

int main()
{
    AutoShow a;
    a.add();
    cout << endl;
    a.add();
    cout << endl;
    a.add();
    cout << endl;
    a.delete_();
    cout << endl;
    a.show(a.getCars());
}

