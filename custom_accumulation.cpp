#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(){
    vector <string> word ={"Hello","world","from","c++"};
    string result = accumulate(word.begin(),word.end(),string(""),
    [](const string & total,const string& word){
        return total + (total.empty() ? "" : " ") + word;
    });
    cout<<"Concatenated string "<<result<<endl;
    return 0;
}