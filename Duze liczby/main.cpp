#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a, b, z;
    cin >> a >> z >> b;
    int roz = a.size() - b.size();
    if( roz < 0 ) {
        a.insert( a.begin(), - roz, '0' );
    } else if( roz > 0 ) {
        b.insert( b.begin(), roz, '0' );
    }

    if(( z == "==" || z == ">=" || z == "<=" ) &&( a == b ) ) {
        cout << "TAK" << endl;
    } else if(( z == ">" || z == ">=" ) &&( a > b ) ) {
        cout << "TAK" << endl;
    } else if(( z == "<" || z == "<=" ) &&( a < b ) ) {
        cout << "TAK" << endl;
    } else
         cout << "NIE" << endl;

}
