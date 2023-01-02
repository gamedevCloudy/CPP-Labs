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
        static int stuct;
    Student() //default consturctor - reads values manually.
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
        stuct++; 
    }
    Student (Student &stu)//copy consturctor copies values from a reference to other object of the same class.
    {
        name = stu.name; 
        roll = stu.roll;
        cls = stu.cls; 
        div = stu.div; 
        dob = stu.dob; 
        bloodgrp = stu.bloodgrp; 
        phone = stu.phone;
        addr = stu.addr;
        stuct++; 
    }
   
    Student (string na, int rolle,int clse, char dive, int dobe, string bld, int phn, string adr )
    //parameterised consturctor - values are passed in as paramerters.
    {
        name = na; 
        roll = rolle;
        cls = clse; 
        div = dive; 
        dob = dobe; 
        bloodgrp = bld; 
        phone = phn;
        addr = adr;
        stuct++; 
    }

    ~Student()
    //destructor - called once object is to be removed forom memory.
    {
        cout<<"Ended Student Object.";
    }
    public: void Display() //class method
    {
        cout<<"\nHello "<<name<<" \nRoll:"<<roll<<"\nClass"<<cls<<div<<"\nDOB:"<<dob<<"\nblood grp: "<<bloodgrp<<"\nPh.no."<<phone<<"\nAddress:"<<addr<<endl; 
        cout<<"\n\n"; 
    }

    
};

int main()
{
    cout<<"Hello world\n"; 
    Student stu1; //default consturctor will be called
    Student stu2(stu1); //copy constructor will be called
    cout<<stu1.stuct; 
    stu1.Display(); 
    stu2.Display(); 
    //after both are called, once main ends, destructor is called. 
    
    return 0;
}