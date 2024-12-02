// // Queue as a Linked list 
// // Linked List Implementation of the queue.

// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next ;

//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class Queue
// {
//     public:
//     Node* head;
//     Node* tail;
//     int size;

//     Queue()
//     {
//         size=0;
//         head=tail=NULL;
//     }


// void pushatback(int val)
// {
//     Node* temp= new Node(val);
//     if(size==0)
//     {
//         head=tail=temp;
//         size++;
//     }
//     else
//     {
//         tail->next=temp;
//         tail=temp;
//         size++;
//     }
// }


// void popatfront()
// {
//     if(size==0)
//     {
//         cout<<"Linked List is empty "<<endl;
//         return ;
//     }
//     head=head->next;
//     size--;
// }


// int front()
// {
//     if(size==0)
//     {
//         cout<<"Linked List is empty "<<endl;
//         return -1;
//     }
//     return head->val;
// }

// int back()
// {
//     if(size==0)
//     {
//         cout<<"Queue is empty "<<endl;
//         return -1;
//     }
//     else
//     {
//         return tail->val;
//     }
// }

// void display()
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }



// };
// int main()
// {
//     Queue q;
//     q.pushatback(10);
//     q.pushatback(20);
//     q.pushatback(30);
//     q.pushatback(40);
//     q.pushatback(50);

//     q.display();

//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size<<endl;

//     q.popatfront();
//     q.popatfront();


//     cout<<q.front()<<endl;
//     cout<<q.size<<endl;
//     cout<<q.back()<<endl;


//     q.display();


//     q.pushatback(100);
//     q.pushatback(200);
//     q.pushatback(300);

//     q.display();
    
// }





// Practice this code again 
// Implementation of the linked list 

#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

class Linkedlist 
{
    public:
    int size;
    Node* head;
    Node* tail;

    Linkedlist()
    {
        size=0;
        head=tail=NULL;
    }

void push(int val)
{
    Node* temp = new Node(val);
    if(size==0)
    {
        head=tail=temp;
        size++;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        size++;
    }
}


void pop()
{
    if(size==0)
    {
        cout<<"Linked List is empty ! Underflow "<<endl;
        return ;
    }
    else
    {
        head=head->next;
        size--;
    }
}


int front()
{
    if(size==0)
    {
        cout<<"Queue is empty ! Underflow "<<endl;
        return -1;
    }
    else
    {
        return head->val;
    }
}


int back()
{
    if(size==0)
    {
        cout<<"Queue is empty ! Underflow "<<endl;
        return -1;
    }
    return tail->val;
}
    

int empty()
{
    if(size==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void display()
{
    Node* temp=head;
    if(size==0)
    {
        cout<<"Queue is empty ! Underflow ho gya"<<endl;
        return ;
    }
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};

int main()
{

//     Linkedlist ll;
//     // ll.push(10);
//     // ll.push(20);
//     // ll.push(30);
//     // ll.push(40);
//     // ll.push(50);

//     ll.display();

//     ll.pop();
//     ll.pop();
//     ll.display();

//     cout<<ll.front()<<endl;
//     cout<<ll.back()<<endl;
//     cout<<ll.size<<endl;

//     // ll.push(100);
//     // ll.push(200);
//     // ll.push(300);


//     ll.display();
//     cout<<ll.front()<<endl;
//     cout<<ll.back()<<endl;
//     cout<<ll.size<<endl;
//     cout<<ll.empty();


// // Output -:
// // Queue is empty ! Underflow ho gya
// // Linked List is empty ! Underflow 
// // Linked List is empty ! Underflow 
// // Queue is empty ! Underflow ho gya
// // Queue is empty ! Underflow 
// // -1
// // Queue is empty ! Underflow
// // -1
// // 0
// // Queue is empty ! Underflow ho gya
// // Queue is empty ! Underflow 
// // -1
// // Queue is empty ! Underflow
// // -1
// // 0
// // 1



    Linkedlist ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);

    ll.display();

    ll.pop();
    ll.pop();
    ll.display();

    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;
    cout<<ll.size<<endl;

    ll.push(100);
    ll.push(200);
    ll.push(300);


    ll.display();
    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;
    cout<<ll.size<<endl;
    cout<<ll.empty();


// Output -:
// 10 20 30 40 50 
// 30 40 50 
// 30
// 50
// 3
// 30 40 50 100 200 300 
// 30
// 300
// 6
// 0



}


// Done 15-02-2024