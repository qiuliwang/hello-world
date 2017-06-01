//WangQL Jun 1 2017

#include <iostream>
#include <complex>

using namespace std;

int main()
{
    complex<long> cmp1(32, 45);
    complex<double> cmp2(32, 45);
    complex<long> cmp3(32, 45);

    cout << cmp1.real() << " " << cmp1.imag() << endl;
    cout << cmp2.real() << " " << cmp2.imag() << endl;

    //complex<long> res = cmp1 + cmp2;
    //cout << res.real() << " " << res.imag() << endl;

    /*
    output:
    32 45
    32 45
    */
}