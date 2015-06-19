#include <iostream>
using namespace std;

int main ()
{
    cout << "Hello World! \n";
    cout << "Press ENTER to continue...";
    cin.ignore( numeric_limits<streamsize>::max(), '\n' );
    
    return 0;
}
