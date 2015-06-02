#include <iostream>
using namespace std;
extern int a,b;
extern void support();
int main()
{
    cout << "Hello world! a= "<<a <<" & b=  " <<b<< endl;
    support();
    return 0;
}
