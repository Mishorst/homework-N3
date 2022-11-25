#include <iostream>

using namespace std;

float* averageFunc(){
    float *arr = new float[5];
    float average;
    
    cout << "Enter 5 numbers " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    cout << "5 numbers are: " << endl; 
    
    for(int i = 0; i<5; i++){
        cout << arr[i] << endl;
        average += arr[i];
    }
    
    average = average/5;
    cout << "Average of these numbers is " << average << endl;
    
    return arr;
}

int main()
{
    float *aver = averageFunc();
    
    delete[] aver;

    return 0;
}
