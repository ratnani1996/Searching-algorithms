#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int linear_search(int *array,int searching_element,int n)
{
    for(int i=0;i<n;i++)
    {
        if(searching_element==array[i])
            return i;
    }
    return -1;  //if element is not found
}

int main()
{
    int *array;
    int n,searching_element;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    array= (int *)calloc(n,sizeof(int));    //dynamic memory allocation
    printf("Enter the elements\n");
    for (int i=0;i<n;i++)       //user input array
        scanf("%d",&array[i]);
    printf("Enter the searching element ");
    scanf("%d",&searching_element);
    int location=linear_search(array,searching_element,n);
    if(location==-1)
        printf("Element Not Found\n");
    else
        printf("Element is found at location %d",location+1);
    free (array);

}
