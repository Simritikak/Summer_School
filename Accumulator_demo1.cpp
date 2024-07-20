#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector <int> numbers = {1,2,3,4,5};

    //Using accumlate with a lambda to sum up the elements

    //int sum = accumulate(numbers.begin(), numbers.end(),0,[](int total,int n){
       // return total + n;
    //});
    auto sum=[=](int total,int n){
        for(int i=0;i<n;i++){
            total = total+numbers[i];
        }
        return total;
    };
    cout<<"Sum : "<<sum(0,5)<<endl; //Output : Sum : 15
}