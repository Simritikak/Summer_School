#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
{
    double num1,num2,result;
    int oper;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    cout<<"Enter operation you want to do:"<<endl;
    cout<<"1. ADD"<<endl;
    cout<<"2. SUBTRACT"<<endl;
    cout<<"3. MULTIPLY"<<endl;
    cout<<"4. DIVISION"<<endl;
    cin>>oper;
    switch(oper){
        case 1 :
        {
            plus<double>()(num1,num2);
            break;
        }
        case 2 :
        {
            minus<double>()(num1,num2);
            break;
        }
        case 3 :
        {
            multiplies<double>()(num1,num2);
            break;
        }
        case 4 :
        {
            if(c==0){
                cout<<"Cannot divide: "<<endl;
            }
            else{
            divides<double>()(num1,num2);
            }
            break;
        }
    }
    return 0;

}
