#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
int main()
{
    vector<int> numbers ={1,3,5,8,10,13};
    auto it=find_if(numbers.begin(),numbers.end(),[](int n){
       return n%2==0; 
    });
    if(it != numbers.end()){
        cout<<"First even Number found: "<<*it<<endl;
    }
    else{
        cout<<"No even number found"<<endl;
    }
    return 0;
}
*/

int main()
{
    vector<int> numbers ={1,3,5,8,10,13};
    for(int i:numbers)
    {
        if(i%2==0 ){
                cout<<"First even Number found: "<<i<<endl;
                exit(0);
            }
        }
        cout<<"No even number found"<<endl;
        
    return 0;
        }

