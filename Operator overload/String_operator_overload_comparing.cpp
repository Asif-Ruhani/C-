#include<iostream>
#include<cstring>
using namespace std;

class student
    {
       private:
       char biodata[100];
       public:
          student()
          {
            biodata[0] = '\0';
          }
          student(char s[])
          {
             strcpy(biodata,s);

          }
          bool operator==(student st)
          {
            if(strcmp(biodata,st.biodata)==0)
            {
                return true;
            }
            else 
            {
                return false;
            }
          }
};

int main()
    {
       student s1 ("i am asif ruhani");
       student s2 = "i am not asif ruhani";
       if(s1==s2)
       {
        cout<<"yes"<<endl;
       }
       else 
       {
        cout<<"No"<<endl;
       }
       
return 0;
    }