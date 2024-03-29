/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

#define size 4                           // Macro representation 
 
int arr[size];
int front=-1,rear=-1;                   // Initializing two variables with -1 index
 
void enqueue(int val)              
{
    if(rear==size-1)  
    {
        cout<<"OVERFLOW!";              // Overflow Condition
    }
    else if(front==-1 && rear==-1)      // BY this We can easily define our underflow condition
    {
        front++;                        // Incrementing front
        rear++;                        // Incrementing rare
        arr[rear]=val;                 // Insert the value at 0th position
    }
    else
    {
        rear++;                        // Incrementing rare
        arr[rear]=val;                 // Insert the value at 0th position
    }
} 

void dequeue() 
{
    if(front==-1 && rear==-1)  
    {
        cout<<"UNDERFLOW!";
        return ;
    }
    else if(front == rear)
    {
    	cout<<"The deleted element is : "<<arr[front]; 
    	front =-1;
    	rear =-1;
	}
    else
    {
        cout<<"The deleted element is : "<<arr[front];  
		front++;
    }
}
 
void display()
{

    if(front==-1 && rear==-1)    
    {
        cout<<"UNDERFLOW!";
    }
    else
    {
        for(int i=front;i<=rear;i++) 
        {
            cout<<" "<<arr[i];
        }
        cout<<"\n";
    }
}
int main() 
{ 
    int choice,val;
    cout<<" MENU DRIVEN PROGRAM ";   
    cout<<"\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit";
    while(1)    
    {
        cout<<"\n Enter the choice:";
        cin>>choice;
          
        switch(choice)
        {
            case 1: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    enqueue(val);
                    break;
            case 2: dequeue();
                    break;
            case 3: cout<<"Queue Elements : ";
                    display();
                    break;
            case 4: exit(0);
              
            default: cout<<"\n Invalid choice!.........";
        }
    }
    return 0;
}
