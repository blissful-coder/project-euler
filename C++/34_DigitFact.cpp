#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int fact(int n)
{
    int result = 1;
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            result = result * i;
        }
    }
    return result;
}

int sumOfDigitFactorial(int n)
{
    int result = 0;
    while (n > 0)
    {
        result = result + fact(n % 10);
        n = n / 10;
    }
    return result;
}

int main()
{
/*
9! = 362880

Even if all digits are 9
sumOfDigitFactorial(9) = 362880
sumOfDigitFactorial(99999999)=2903040 is lot less than the number 99999999
*/
    cout << "fact(9): "<< fact(9) <<"\n";
    cout << "sumOfDigitFactorial(9): "<< sumOfDigitFactorial(9) <<"\n";
    cout << "sumOfDigitFactorial(99): "<< sumOfDigitFactorial(99) <<"\n";
    cout << "sumOfDigitFactorial(999): "<< sumOfDigitFactorial(999) <<"\n";
    cout << "sumOfDigitFactorial(9999): "<< sumOfDigitFactorial(9999) <<"\n";
    cout << "sumOfDigitFactorial(99999): "<< sumOfDigitFactorial(99999) <<"\n";
    cout << "sumOfDigitFactorial(999999): "<< sumOfDigitFactorial(999999) <<"\n";
    cout << "sumOfDigitFactorial(9999999): "<< sumOfDigitFactorial(9999999) <<"\n";
    cout << "sumOfDigitFactorial(99999999): "<< sumOfDigitFactorial(99999999) <<"\n";
    int compare = 0;
    int sum=0;
    for (int i = 1; i <= 9999999; i++)
    {
        // cout << i <<",";
        compare = sumOfDigitFactorial(i);
        if(i==compare){
            cout << i << " : " << compare << "\n";
            if(i>2){
                sum = sum + compare;
            }
        }
    }
    cout << "Sum: "<<sum <<"\n";
    return 0;
}