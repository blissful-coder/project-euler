#include <iostream>
#include <cstdio>

int main()
{
    int result = 0;

    for (int i = 0; i <1000; i++)
    {
        if(i%3==0 || i%5==0){
            result = result + i;
        }
    }

    std::cout << "Result: " << result << "\n";
}