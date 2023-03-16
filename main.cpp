#include <iostream>
#include <string>

using namespace std;


int ReadPositiveNumber(string Message){

    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
        } while (Number <= 0);
    return Number ;
}

void PrintInvertedNumber (int Number)

{
        cout << endl;
    for (int i = Number ; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
            cout << "\n";
        }
}

void PrintPatternNumber(int Number){
    cout << endl;
    for (int i = 1; i <= Number; i++){
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}
int main()
{    int Number =ReadPositiveNumber("Please Enter Positive Number ");
     PrintPatternNumber(Number);
    return 0;
}
