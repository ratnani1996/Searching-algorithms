#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int binary_search_funtion(int *array,int searching_element,int n)
{
    int mid,left=0,right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(searching_element==array[mid])
            return mid;
        else if(array[mid]<searching_element)   //if the element lies in the right half
            left=mid+1;
        else if(array[mid]>searching_element)   //if the element lies in  the left part
            right=mid-1;
    }

    return -1;  //if the element is not found


}


int main()
{
    int *array,n,searching_element;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    array=(int *)calloc(n,sizeof(int));
    printf("Enter the elements in ascending order\n");
    for (int i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the searching element ");
    scanf("%d",&searching_element);
    int location =binary_search_funtion(array,searching_element,n);
    if(location == -1)
        printf("Element not found");
    else
        printf("Element found at location %d" , location+1);
    free (array);
}

