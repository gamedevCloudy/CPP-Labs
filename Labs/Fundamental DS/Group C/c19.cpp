#include<iostream>
#include<string>
using namespace std; 

struct Node {
    int value; 
    struct Node *next;  
}*current, *head;

void AddNode(int value)
{
    cout<<"\nCreating new node..."; 
    struct Node *x = new struct Node; 
    x->value= value;
   
    if(head == NULL)
    {
        head = x;
        current =x; 
    }
    else {
        current->next = x;
        current =x;  
    }
}

void CreateLinkedList(int sizeOfList)
{
    for(int i = 0; i<sizeOfList; i++)
    { 
        int xy;
        cout<<"\nEnter Year Number: ";
        cin>>xy;  
        AddNode(xy); 
    }
}

void PrintList(struct Node *x)
{
    cout<<x->value;
    PrintList(x->next); 

}
int main()
{
    cout<<"\n\nhello"; 
    CreateLinkedList(5);
    PrintList(head); 
    return 0;
}