#include <iostream>
#include <set>
#include <iterator>

bool is_pandigital(int a, int b, int c){
    int unique_array[10]= {1};
    int count = 0;
    while (a>0)
    {
        unique_array[a%10]++;
        a = a/10;
    }
    while (b>0)
    {
        unique_array[b%10]++;
        b = b/10;
    }
    while (c>0)
    {
        unique_array[c%10]++;
        c = c/10;
    }
    for(int i=0; i<10; i++)
    {
        // std::cout<<unique_array[i]<<" ";
        if(unique_array[i]==1)
            count = count + unique_array[i];
    }

    return (count==10)?true:false;
}

int main()
{
    int result = 987654321;
    std::set<int> finalans;
    std::cout << "Result: " << result << "\n";
    for(int i=0; i<=11111; i++){
        for(int j=0; j<=11111; j++){
            int res = i*j;
            if(is_pandigital(i,j,res)){
                std::cout<<"\nPandigital: "<< i << " " <<j<< " " << res <<"\n";
                finalans.insert(res);
            }
            // else{
            //     std::cout<<"\nNot Pandigital: "<<j<<"\n";
            // }
        }
    }
    std::set<int, std::greater<int> >::iterator itr;
    int sum=0;
    for (itr = finalans.begin(); itr != finalans.end(); itr++) {
        std::cout << *itr << " ";
        sum = sum + *itr;
    }
    std::cout<<"Sum: "<<sum<<"\n";
    return 0;
}