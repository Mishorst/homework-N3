#include <iostream>

using namespace std;

template<typename T>
T square(T &a){
    T b = a * a;
    cout << "Squared number: " << b << endl;
    return b;
}

int main()
{
    int a = 5;
    square(a);

    float b = 4.1;
    square(b);

    return 0;
}
