#include<iostream>
#include<string>

using namespace std;

class Student{
     public: 
        string name; 
        int roll;
        int cls; 
        char div; 
        int dob; 
        string bloodgrp; 
        int phone;
        string addr;
    Student()
    {
        cout<<"Enter name:";
        cin>>name;  
        cout<<"Enter class:";
        cin>>cls;  
        cout<<"Enter div:";
        cin>>div;  
        cout<<"Enter roll:";
        cin>>roll;  
        cout<<"Enter DOB DDMMYY:";
        cin>>dob; 
        cout<<"Enter Blood Group: ";
        cin>>bloodgrp; 
        cout<<"Enter phone no: "; 
        cin>>phone; 
        cout<<"Enter Address: ";
        cin>>addr;
        cout<<endl;
    }

    // Student ()
    // {
    //     name = "None"; 
    //     roll = 0;
    //     cls = 0; 
    //     // div = "A"; 
    //     dob = 000000; 
    //     bloodgrp = "OO+"; 
    //     phone = 000000000;
    //     addr = "Somewhere on earth";
    // }
    Student (Student &stu)
    {
        name = stu.name; 
        roll = stu.roll;
        cls = stu.cls; 
        div = stu.div; 
        dob = stu.dob; 
        bloodgrp = stu.bloodgrp; 
        phone = stu.phone;
        addr = stu.addr;
    }
    ~Student()
    {
        cout<<"Ended Student Object.";
    }
    public: void Display(){
        cout<<"\nHello "<<name<<" \nRoll:"<<roll<<"\nClass"<<cls<<div<<"\nDOB:"<<dob<<"\nblood grp: "<<bloodgrp<<"\nPh.no."<<phone<<"\nAddress:"<<addr<<endl; 
        cout<<"\n\n"; 
    }

    
};

int main()
{
    cout<<"Hello world\n"; 
    Student stu1; 
    Student stu2(stu1);

    stu1.Display(); 
    stu2.Display(); 

    return 0;
}