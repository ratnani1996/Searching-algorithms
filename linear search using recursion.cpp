#include<iostream>
using namespace std;

int linear_search(int *array_name,int searching_element,int n)
{
    if(searching_element==array_name[n])
        return n;
    else
    {   if(n<0)
            return -1;
        else
            return linear_search(array_name,searching_element,n-1);
    }
}


int main()
{
    int n;
    cin>>n;
    int *array_name;
    array_name=new int [n];
    for(int i=0;i<n;i++)
        cin>>array_name[i];
    int searching_element;
    cin>>searching_element;
    int index=linear_search(array_name,searching_element,n-1);
    if(index==-1)
        cout<<"Element is not found\n";
    else
        cout<<index+1;

    delete []array_name;
}
