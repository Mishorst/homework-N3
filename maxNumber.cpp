#include <iostream>

using namespace std;

template<typename T>
T maxNumber(T &a, T &b, T &c){
    T max = a;
    if(max < b){
        max = b;
    }if(max < c){
        max = c;
    }
    
    return max;
}

int main()
{
    int a = 5, b = 7, c = 9, max;
    float i = 3.4, j = 5.2, k = 2.1, fMax;
    
    max = maxNumber(a, b, c);
    fMax = maxNumber(i, j, k);
    
    cout << "Max number is: " << max << endl;
    cout << "Max number is: " << fMax << endl;

    return 0;
}