// not solved 

#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st)
{
    stack<int>temp;
    while(st.size()>0)
    {
        int x=st.top();
        st.pop();
        cout<<x<<" ";
        temp.push(x);
    }


    while(temp.size()>0)
    {
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
int main()
{

    int stud[]={1,1,1,0,0,1};
    int n=sizeof(stud)/sizeof(stud[0]);
    int sand[]={1,0,0,0,1,1};
    int m=sizeof(sand)/sizeof(sand[0]);
    stack<int> st;
    for(int i=0; i<m; i++)
    {   
        st.push(sand[i]);
    }
    display(st);

}



