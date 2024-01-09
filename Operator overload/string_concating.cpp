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
          void operator+(student st)
          {
            //student temp;
            if(strlen(biodata)+strlen(st.biodata)<=100)
            {
            //strcpy(temp.biodata,biodata);
            strcat(biodata,st.biodata);
            
            }
            else 
            {
                cout<<"String is overflow "<<endl;
            }
          }
          void show()
          {
            cout<< biodata<<endl;
          }


    };


int main()
    {
       student s1 ("i am asif ruhani");
       student s2 = " and my father name is fazlul hoque  ";
      // student s3;
     // s3=s1+s2;
     //s3.show();
       s1+s2;
       s1.show();
       


        return 0;
    }