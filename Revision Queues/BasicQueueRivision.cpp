// Queues -> in queue back of the queue is accessed through back() keyword/function 
// not rear() keyword/function  
// rear means back hota hai.


// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.size()<<endl;


// }



// Display Queue in normal order using loop (for loop is used to display the queues ele.)
// Display Queue in reverse order using loop -> we use stack to reverse the queue 

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void display(queue<int>q)
// {
//     for(int i=0; i<q.size(); i++)
//     {
//         int x=q.front();
//         q.pop();
//         cout<<x<<" ";
//         q.push(x);
//     }
//     cout<<endl;
// }

// // we will reverse the queue using stack 

// void reverse(queue<int>q)
// {
//     stack<int>st;
//     while(q.size()>0)
//     {
//         int x=q.front();
//         q.pop();
//         st.push(x);
//     }

//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         int x=st.top();
//         st.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     display(q);
//     reverse(q);
//     display(q);
//     reverse(q);
//     display(q);
//     reverse(q);
//     display(q);
//     reverse(q);
// }


// 10 20 30 40 50 
// 50 40 30 20 10 
// 10 20 30 40 50 
// 50 40 30 20 10 
// 10 20 30 40 50 
// 50 40 30 20 10 
// 10 20 30 40 50
// 50 40 30 20 10



// display queue in normal and reverse order using recursion 

#include<iostream>
#include<queue>
using namespace std;

void displayNormalRec(queue<int> q)
{
    if(q.size()==0) return ;
    int x=q.front();
    q.pop();
    cout<<x<<" ";
    displayNormalRec(q);
    q.push(x);

}

void displayReverseRec(queue<int> q)
{
    if(q.size()==0) return ;
    int x=q.front();
    q.pop();
    displayReverseRec(q);
    cout<<x<<" ";
    q.push(x);

}

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    displayNormalRec(q);
    cout<<endl;
    displayReverseRec(q);
    cout<<endl;
    displayNormalRec(q);
    cout<<endl;
    displayReverseRec(q);
    cout<<endl;
    displayNormalRec(q);
    cout<<endl;
    displayReverseRec(q);

}

// 10 20 30 40 50 
// 50 40 30 20 10 
// 10 20 30 40 50 
// 50 40 30 20 10 
// 10 20 30 40 50 
// 50 40 30 20 10 


// all code is run successfully 
// Done  ->   recursively display queue's elements 
// 15-02-2024 , 3:20 AM

// Congratulation  SHIVAM SHRIVASTAV WELL DONE!