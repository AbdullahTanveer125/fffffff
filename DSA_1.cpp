#include<iostream>
using namespace std;
int main()
{
    int array[5]={};
    for(int i=0; i<10; i++)
    {
        cout<<"Enter a number=";
        cin>>array[i];
    }

    for(int j=0; j<10; j++)
    {
        cout<<j+1<<". number="<<array[j]<<endl;
    }
}