#include<bits/stdc++.h>
using namespace std;

void main_manu();

void cart(string name, string f_name, string num,string option3)
{
    string s=num + option3;
    ofstream file;
    file.open(s+".txt");
    file<<name<<endl<<f_name<<endl<<num<<endl;
    file.close();
}

void customer(string option3)
{
    string name,f_name,num;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your father name : ";
    getline(cin,f_name);
    cout<<"Enter your mobile number : ";
    cin>>num;
    cart(name,f_name,num,option3);
    system("cls");

}
void Buy()
{   state3:
    cout<<"\nSelect option"<<endl;
    cout<<"   1. iphone"<<endl;
    cout<<"   2. Samsung"<<endl;
    cout<<"   3. One plus"<<endl;
    cout<<"   4. Xiaomi"<<endl;
    cout<<"   5. Previous"<<endl;
    cout<<"   6. Main manu"<<endl;

    int option2;
    cin>>option2;
    system("cls");

    if(option2==1)
    {
        cout<<"   1. iphone 10         : Ram/Rom = 3/128 gb"<<endl;
        cout<<"   2. iphone 10 pro     : Ram/Rom = 3/256 gb"<<endl;
        cout<<"   3. iphone 11 pro     : Ram/Rom = 4/512 gb"<<endl;
        cout<<"   4. iphone 11 pro max : Ram/Rom = 4/1024 gb"<<endl;

        string option3;
        cin>>option3;
        cin.ignore();
        system("cls");
        if(option3=="1") option3=" iphone 10";
        if(option3=="2") option3=" iphone 10 pro";
        if(option3=="3") option3=" iphone 11 pro";
        if(option3=="4") option3=" iphone 11 pro max";

        customer(option3);
    }

    else if(option2==2)
    {
        cout<<"   1. Samsung galaxy s21       : Ram/Rom = 3/128 gb"<<endl;
        cout<<"   2. Samsung galaxy s21 ultra : Ram/Rom = 3/256 gb"<<endl;
        cout<<"   3. Samsung galaxy s9+       : Ram/Rom = 4/512 gb"<<endl;
        cout<<"   4. Samsung galaxy A30       : Ram/Rom = 4/1024 gb"<<endl;
        cout<<"   5. Samsung galaxy A20 pro   : Ram/Rom = 4/1024 gb"<<endl;
        cout<<"   6. Samsung galaxy A20 mini  : Ram/Rom = 4/1024 gb"<<endl;
        cout<<"   7. Samsung galaxy A50       : Ram/Rom = 4/1024 gb"<<endl;

        string option3;
        cin>>option3;
        cin.ignore();
        system("cls");
        if(option3=="1") option3=" Samsung galaxy s21";
        if(option3=="2") option3=" Samsung galaxy s21 ultra";
        if(option3=="3") option3=" Samsung galaxy s9+";
        if(option3=="4") option3=" Samsung galaxy A30";
        if(option3=="5") option3=" Samsung galaxy A20 pro";
        if(option3=="6") option3=" Samsung galaxy A20 mini";
        if(option3=="7") option3=" Samsung galaxy A50";

        customer(option3);
    }

    else if(option2==3)
    {
        cout<<"   1. iphone 10 : Ram/Rom = 3/128 gb"<<endl;
        cout<<"   2. iphone 10 pro : Ram/Rom = 3/256 gb"<<endl;
        cout<<"   3. iphone 11 pro : Ram/Rom = 4/512 gb"<<endl;
        cout<<"   4. iphone 11 pro max : Ram/Rom = 4/1024 gb"<<endl;

        string option3;
        cin>>option3;
        cin.ignore();
        system("cls");
        if(option3=="1") option3=" iphone 10";
        if(option3=="2") option3=" iphone 10 pro";
        if(option3=="3") option3=" iphone 11 pro";
        if(option3=="4") option3=" iphone 11 pro max";

        customer(option3);
    }

    else if(option2==4)
    {
         cout<<"   1. iphone 10 : Ram/Rom = 3/128 gb"<<endl;
        cout<<"   2. iphone 10 pro : Ram/Rom = 3/256 gb"<<endl;
        cout<<"   3. iphone 11 pro : Ram/Rom = 4/512 gb"<<endl;
        cout<<"   4. iphone 11 pro max : Ram/Rom = 4/1024 gb"<<endl;

        string option3;
        cin>>option3;
        cin.ignore();
        system("cls");
        if(option3=="1") option3=" iphone 10";
        if(option3=="2") option3=" iphone 10 pro";
        if(option3=="3") option3=" iphone 11 pro";
        if(option3=="4") option3=" iphone 11 pro max";

        customer(option3);
    }

    else if(option2==5) { system("cls"); goto state3;}

    else if(option2==6) { system("cls"); main_manu();}
}
void Return()
{

}
void Service()
{

}
void Advance_order()
{

}

void main_manu()
{
    cout<<"\nSelect option"<<endl;
    state2:
    cout<<"   1. Buy"<<endl;
    cout<<"   2. Return"<<endl;
    cout<<"   3. Service"<<endl;
    cout<<"   4. Advance order"<<endl;
    cout<<"   5. Main manu"<<endl;
    int option1;
    cin>>option1;
    if(option1==1) { system("cls"); Buy();}
    if(option1==2) { system("cls"); Return();}
    if(option1==3) { system("cls"); Service();}
    if(option1==4) { system("cls"); Advance_order();}
    if(option1==5) { system("cls"); goto state2;}

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
      cout<<"\n\n ...............Main manu.............. "<<endl;
      main_manu();
    }
    else
    {
        cout<<"You have entered wrong key, please try again  ";
        goto state1;
    }
}
