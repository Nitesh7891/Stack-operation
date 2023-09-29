#include<stdio.h>
#include<conio.h>
#define SIZE 5 
int main()
{
    int x,i,arr[SIZE];
    int top=-1;
    for(i=0;i<=SIZE;i++)
    {
        if(top==SIZE-1)
        printf("Stack is full");
        else
        {
            printf("Enter elements in stack: ");
            scanf("%d",&x);
            top++;
            arr[top]=x;
        }
    }
    printf("\nstack is: ");
     for(i=0;i<SIZE;i++)
     {
        printf("%d ",arr[i]);
     }
    for(i=0;i<=SIZE;i++)
    {
        if(top==-1)
        printf("\nstack is empty");
        else
        {
            printf("\n%d is pop",arr[top]);
            top--;
        }
    }
    printf("\nstack is: ");
     for(i=0;i<SIZE;i++)
     {
        printf("%d ",arr[i]);
     }
    return 0;
}
