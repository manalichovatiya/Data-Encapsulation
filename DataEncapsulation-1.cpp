#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
	  int stu_id;
	  char stu_name[50];
	  int stu_age;
	  char stu_course[50];
	  char stu_email[50];
	  char stu_city[50];
	  char stu_college[50];
	  
	public:
	  void setter(){
		this->stu_id=stu_id;
		strcpy(this->stu_name,stu_name);
		this->stu_age=stu_age;
	  	strcpy(this->stu_course,stu_course);
		strcpy(this->stu_email,stu_email);
	  	strcpy(this->stu_city,stu_city);
	  	strcpy(this->stu_college,stu_college);			  	
	  } 
	  void getter(){
   		cout<<"Enter student's id:";
        cin>>this->stu_id;
        cout<<"Enter student's name:";
        cin>>this->stu_name;
        cout<<"Enter student's age:";
        cin>>this->stu_age;
        cout<<"Enter student's course:";
        cin>>this->stu_course;
        cout<<"Enter student's email:";
        cin>>this->stu_email;
        cout<<"Enter student's city:";
        cin>>this->stu_city;
        cout<<"Enter student's college:";
        cin>>this->stu_college;
	  }	
	  void printer(){
        cout<<"Student's id is: "<<this->stu_id<<endl;
        cout<<"Student's name is: "<<this->stu_name<<endl;
        cout<<"Student's age is: "<<this->stu_age<<endl;
        cout<<"Student's course is: "<<this->stu_course<<endl;
        cout<<"Student's E-mail is: "<<this->stu_email<<endl;
        cout<<"Student's city is: "<<this->stu_city<<endl;
        cout<<"Student's college is: "<<this->stu_college<<endl;
    }

};
int main(){	
	Student obj1,obj2,obj3,obj4,obj5;
	cout<<"=>1st Student's details::"<<endl;
	obj1.setter();
	obj1.getter();
	cout<<endl;
	cout<<"=>2nd Student's details::"<<endl;
	obj2.setter();
	obj2.getter();
	cout<<endl;
	cout<<"=>3rd Student's details::"<<endl;
	obj3.setter();
	obj3.getter();
	cout<<endl;
	cout<<"=>4th Student's details::"<<endl;
	obj4.setter();
	obj4.getter();
	cout<<endl;
	cout<<"=>5th Student's details::"<<endl;
	obj5.setter();
	obj5.getter();   
	cout<<endl;
	cout<<" => Student's details <= "<<endl;
	cout<<endl;
	cout<<"=>1st Student's details::"<<endl;
	obj1.printer();
	cout<<endl;
	cout<<"=>2nd Student's details::"<<endl;
	obj2.printer();
	cout<<endl;
	cout<<"=>3rd Student's details::"<<endl;
	obj3.printer();
	cout<<endl;
	cout<<"=>4th Student's details::"<<endl;
	obj4.printer();
	cout<<endl;
	cout<<"=>5th Student's details::"<<endl;
	obj5.printer();
	
	return 0;
}
