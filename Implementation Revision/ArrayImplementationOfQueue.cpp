// // Array Implementation Of the Queue -:
// // Queue as an array -: by using two pointers f and b and size = b - f.

// #include<iostream>
// #include<array>
// using namespace std;
// class Queue
// {
//     public:
//     int f;
//     int b;
//     int arr[5];

//     Queue()
//     {
//         f=b=0;
//     }

// void push(int val)
// {
//     if(b==5)
//     {
//         cout<<"Queue is full ! Overflow "<<endl;
//         return ;
//     }
//     else
//     {
//         arr[b]=val;
//         b++;
//     }
// }


// void pop()
// {
//     if(b-f==0)
//     {
//         cout<<"Queue is empty  ! Underflow "<<endl;
//         return ;
//     }
//     f++;
// }


// int front()
// {
//     if(b-f==0)
//     {
//         cout<<"Queue is empty ! Underflow "<<endl;
//         return -1; 
//     }
//     return arr[f];
// }


// int back()
// {
//     if(b-f==0)
//     {
//         cout<<"Queue is empty ! Underflow "<<endl;
//         return -1;
//     }
//     return arr[b-1];
// }

// void display()
// {
//     for(int i=f; i<b; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int size()
// {
//     return b-f;
// }

// };
// int main()
// {
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     q.display();
//     q.pop();
//     q.pop();
//     q.display();

//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;

//     cout<<q.size();

// }









// Array Implementation Of the Queue -: by using two pointers (f for front) and (b for back) and size=b-f. 

#include<iostream>
#include<array>
using namespace std;
class Queue
{
    public:
    int f;
    int b;
    int arr[5];

    Queue()
    {
        f=0;
        b=0;
    }

void push(int val)
{
    if(b-f==5)
    {
        cout<<"Queue is full ! Overflow "<<endl;
        return ;
    }
    arr[b]=val;
    b++;
}

void pop()
{
    if(b-f==0)
    {
        cout<<"Queue is empty ! Underflow "<<endl;
        return ;
    }
    f++;
}

int front()
{
    if(b-f==0)
    {
        cout<<"Queue is empty ! Underflow "<<endl;
        return -1;
    }
    return arr[f];
}

int back()
{
    if(b-f==0)
    {
        cout<<"Queue is empty ! Underflow "<<endl;
        return -1;
    }
    return arr[b-1];
}

int size()
{
    return b-f;
}

int empty()
{
    if(b-f==0)
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
    for(int i=f; i<b; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    q.pop();

    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty();

}


// 10 20 30 40 50 
// 10
// 50
// 30 40 50
// 30
// 50
// 0





// Done 15-02-2024








