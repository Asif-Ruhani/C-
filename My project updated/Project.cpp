
#include<bits/stdc++.h>
using namespace std;

void Buy();
void Return();
string Cart(string s);
void Advance_order();
void Add_product();
void Remove_product();
void main_manu();
int main();

void Buy()
{
    string s2,s3,s4,st1,st2;
    int x;
     state1:
    ifstream file2("Brands.txt");
    cout<<"\n\n....................Select brand....................\n"<<endl;
    while(getline(file2,s2))
        cout<<s2<<"\n";
    file2.close();

    cout<<"\n\n1. Next step"<<"\n2. Previous page"<<endl;
    cin>>x;

    if(x==2)  {system("cls"); main_manu();}

    if(x==1)
    {
    cout<<"Enter brand name : ";
    cin>>st1;
    system("cls");
    state2:
    ifstream file3("Brands/"+st1+"/"+st1+".txt");
    cout<<"\n\n.................... Choose your phone ....................\n"<<endl;
    while(getline(file3,s3))
        cout<<s3<<"\n";
    file3.close();

     cout<<"\n\n1. Next step"<<"\n2. Previous page"<<"\n3. Main manu"<<endl;
     cin>>x;
     cin.ignore();

     if(x==3) {system("cls"); main_manu();}
     if(x==2) {system("cls");goto state1;}
     if(x==1)
       {
         cout<<"Enter phone name : ";
         getline(cin,st2);
         system("cls");
         ifstream file4("Brands/"+st1+"/"+st2+".txt");
         while(getline(file4,s4))
         cout<<s4<<"\n";
         file4.close();
        }
    }

   cout<<"\n\nDo you want to buy ?"<<endl;
   cout<<"\n1. Yes"<<"\n2. Previous page"<<"\n3. Main manu"<<endl;
   cin>>x;
   if(x==1) {system("cls"); string s=Cart(st2);}
   if(x==2) {system("cls");goto state2;}
   if(x==3) {system("cls"); main_manu();}
}

string Cart(string s)
{
  string name,fat_name,adrs,NID;
  int phn;
  cout<<"Enter you NID No. : ";
  cin>>NID;
  cin.ignore();

  ofstream cart_file;
  cart_file.open("Cart/"+NID+".txt",ios::out|ios::app);
      cout<<"Enter you name : ";
      getline(cin,name);
      cout<<"Enter your father name : ";
      getline(cin,fat_name);
      cout<<"Enter you phone number : ";
      cin>>phn;
      cart_file<<endl<<endl<<name<<endl<<fat_name<<endl<<phn<<endl<<s<<endl;
      cart_file.close();

    return "nothing";
}

void Return()
{

}

void Advance_order()
{

}
void Add_product()
{

}
void Remove_product()
{

}

void main_manu()
{   string s1;
    ifstream file1("manu.txt");
    cout<<"Select option"<<endl;
    while(getline(file1,s1))
        cout<<s1<<endl;
    file1.close();
    int num1;
    cin>>num1;
    state1:
    if(num1==0) { system("cls");main();}
    if(num1==1) { system("cls");Buy();}
    if(num1==2) { system("cls");Return();}
    if(num1==4) { system("cls");string stt=Cart("nothing");}
    if(num1==5) { system("cls");Advance_order();}
    if(num1==6) { system("cls");Add_product();}
    if(num1==7) { system("cls");Remove_product();}
}

int main()
{
   char ch;
    cout<<"Enter s to start : ";
    state1:
    cin>>ch;
    cin.ignore();
    if(ch=='s' || ch=='S')
    { system("cls");
      cout<<"\n\n.................... Manu .................... \n"<<endl;
      main_manu();
    }
    else
    {
        cout<<"Wrong key, please try again  ";
        goto state1;
    }
}
