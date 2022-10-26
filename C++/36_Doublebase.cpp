#include <iostream>
#include <vector>
using namespace std;

int myreverse(int num){
    int rev=0;
    while(num>0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    return rev;
}

int binpal(int num){
    vector<int> binval;
    vector<int> revbin;
    int binum=0;
    while(num>0){
        binval.push_back(num%2);
        num = num/2;
    }
    revbin = binval;
    reverse(binval.begin(),binval.end());

    if(revbin==binval){
        cout<<"\nBin:";
        for (vector<int>::iterator it= binval.begin(); it!=binval.end(); it++)
            cout<<*it;

        cout<<"\nBin:";
        for (vector<int>::iterator it= revbin.begin(); it!=revbin.end(); it++)
            cout<<*it;
    }
    return (revbin==binval);
}


int main(){
    int sum =0;
    for(int i=0; i<1000000; i++){
        if(i==myreverse(i)){
            // cout<<"\nPalindrome : "<<i<<"\n";
            if(binpal(i)){
                cout<<"\nBin Pal : "<<i<<"\n";
                sum = sum + i;
            }
        }
    }
    cout<<"SUM:"<<sum<<"\n";
    return 0;
}
