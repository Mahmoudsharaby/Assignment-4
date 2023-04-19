#ifndef linkedlist_h
#define linkedlist_h
#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int value;
    node* next;
    node()
    {
        value=0;
        next=NULL;
        
    }
    node(int x)
    {
        this->value=x;
        this->next=NULL;
    }
};
class linkedlist
{
private:
    node* head;
public:
    linkedlist()
    {
        head=NULL;
    }
    void addnode(int x)
    {
        node* newnode= new node(x);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node* temp= head;
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void deletenode(node *head)
    {
        if(head !=NULL)
        {
            if(head->next== NULL)
            {
                head=NULL;
            }
            else
            {
                node* temp= head;
                while(temp->next->next != NULL)
                {
                    temp=temp->next;
                }
                node* last= temp->next;
                temp->next=NULL;
                free(last);
                
            }
        }
    }
    void display()
    {
        node* dis;
        dis=head;
        while(dis!=NULL)
        {
            cout << dis->value << endl;
            dis=dis->next;
        }
    }
    node addvectortolist(vector<int> num)
    {
        for(int i=0;i<num.capacity();i++)
        {
            addnode(num[i]);
        }
        return *head;
    }
    int sum()
    {
        node* ptr= head;
        int total=0;
           while(ptr!= NULL)
           {
               total+=ptr->value;
               ptr=ptr->next;
           }
        
        return total;
    }
};

#endif /* linkedlist_h */
