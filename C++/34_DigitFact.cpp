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
    // int num;
    // for(int i=1; i<=9; i++){
    //     cout << fact(i)<<"\n";
    // }

    // cout<<sumOfDigitFactorial(23)<<endl;
    // cout<<sumOfDigitFactorial(10)<<endl;
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