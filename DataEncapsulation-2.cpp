#include<iostream>
#include<string.h>
using namespace std;
class Customer{
	private:
	 int cust_id;
     char cust_name[20];
     int cust_age;
     char cust_telecome_brand_name[20];
     int cust_mobile_number;
     char cust_city[20];
     int cust_simcard_validity;

	public:
	  void setter(){
	    this->cust_id = cust_id;
        strcpy(this->cust_name,cust_name);
        this->cust_age = cust_age;
        strcpy(this->cust_telecome_brand_name,cust_telecome_brand_name);
        this->cust_mobile_number = cust_mobile_number;
        strcpy(this->cust_city,cust_city);
        this->cust_simcard_validity = cust_simcard_validity; 
    }
 
	  void getter(){
   	    cout<<"Enter customer's id:";
        cin>>this->cust_id;
        cout<<"Enter customer's name:";
        cin>>this->cust_name;
        cout<<"Enter customer's age:";
        cin>>this->cust_age;
        cout<<"Enter customer's telecom brand:";
        cin>>this->cust_telecome_brand_name;
        cout<<"Enter customer's mobile number:";
        cin>>this->cust_mobile_number;
        cout<<"Enter customer's city:";
        cin>>this->cust_city;
        cout<<"Enter customer's simcard validity:";
        cin>>this->cust_simcard_validity;
	  }	
	  void printer(){
        cout<<"Customer's id is: "<<this->cust_id<<endl;
        cout<<"Customer's name is: "<<this->cust_name<<endl;
        cout<<"Customer's age is: "<<this->cust_age<<endl;
        cout<<"Customer's telecom brand is: "<<this->cust_telecome_brand_name<<endl;
        cout<<"Customer's mobile number is: "<<this->cust_mobile_number<<endl;
        cout<<"Customer's city is: "<<this->cust_city<<endl;
        cout<<"Customer's simcard validity is: "<<this->cust_simcard_validity<<endl;
    }
};
int main(){	
	Customer obj1,obj2,obj3,obj4,obj5;
	cout<<"=>1st Customer's details::"<<endl;
	obj1.setter();
	obj1.getter();
	cout<<endl;
	cout<<"=>2nd Customer's details::"<<endl;
	obj2.setter();
	obj2.getter();
	cout<<endl;
	cout<<"=>3rd Customer's details::"<<endl;
	obj3.setter();
	obj3.getter();
	cout<<endl;
	cout<<"=>4th Customer's details::"<<endl;
	obj4.setter();
	obj4.getter();
	cout<<endl;
	cout<<"=>5th Customer's details::"<<endl;
	obj5.setter();
	obj5.getter();
	cout<<endl;
	cout<<" => Customer's details <= "<<endl;
	cout<<endl;
	cout<<"=>1st Customer's details::"<<endl;
	obj1.printer();
	cout<<endl;
	cout<<"=>2nd Customer's details::"<<endl;
	obj2.printer();
	cout<<endl;
	cout<<"=>3rd Customer's details::"<<endl;
	obj3.printer();
	cout<<endl;
	cout<<"=>4th Customer's details::"<<endl;
	obj4.printer();
	cout<<endl;
	cout<<"=>5th Customer's details::"<<endl;
	obj5.printer();        
	
	return 0;
}

