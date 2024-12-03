
// // Ques.1-> Reverse the first k queue's elements from the queue

//     #include<iostream>
//     #include<stack>
//     #include<queue>
//     using namespace std;
//     void display(queue<int>&q)
//     {
//         int n=q.size();
//         for(int i=0; i<n; i++)
//         {       
//             int x=q.front();
//             cout<<x<<" ";
//             q.pop();
//             q.push(x);
//         }
//         cout<<endl;
//     }
//     void Reversek(queue<int>&q, int k)
//     {
//         stack<int>st;
//         for(int i=1; i<=k; i++)
//             {
//                 st.push(q.front());
//                 q.pop();
//             }

//         while(st.size()>0)
//             {
//                 q.push(st.top());
//                 st.pop();
//             }
//             int n=q.size();
//         for(int i=1; i<=n-k; i++)
//             {
//                 q.push(q.front());
//                 q.pop();
//             }

//         }
//     int main()
//     {
        
//             queue<int>q;
//             q.push(10);
//             q.push(20);
//             q.push(30);
//             q.push(40);
//             q.push(50);
//             display(q);
//             int k=3;
//             Reversek(q,k);
//             display(q);

//     }

//     // 10 20 30 40 50 
//     // 20 10 30 40 50 


// // Ques.1-> Reverse the first k queue's elements from the queue and then reverse except elements 

    #include<iostream>
    #include<stack>
    #include<queue>
    using namespace std;
    void display(queue<int>&q)
    {
        int n=q.size();
        for(int i=0; i<n; i++)
        {       
            int x=q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
        }
        cout<<endl;
    }
    void Reversek(queue<int>&q, int k)
    {
        stack<int>st;
        int n=q.size();
        for(int i=1; i<=n; i++)
        {
            st.push(q.front());
            q.pop();
        }

    while(st.size()>0)
    {
        q.push(st.top());
        st.pop();
    }

    for(int i=1; i<=n-k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    }
    int main()
    {

        queue<int>q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        display(q);
        int k=2;
        Reversek(q,k);
        display(q);

    }

// 10 20 30 40 50 
// 20 10 50 40 30 