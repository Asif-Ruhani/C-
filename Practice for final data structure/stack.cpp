#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int> st;
    for(int i=0;i<5;i++)
    {
        st.push(i);
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
        
    /*st.push(10);
    st.push(20);
    cout<<st.top()<<endl;
    cout<<st.top()<<endl;*/
}