#include<iostream>
using namespace std;
class student
{
	private:
		char f_name[20],l_name[20],add[50];
		int c_id,c_lim;
		public:
		void setCustomerID();
		void getCustomerID();
};
void student::setCustomerID()
{
	cout<<"Enter First Name ";
	cin>>f_name;
	cout<<"Enter last Name ";
	cin>>l_name;
	cout<<"Enter Address ";
	cin>>add;
	cout<<"Enter Customer id ";
	cin>>c_id;
	cout<<"Enter credit limit ";
	cin>>c_lim;
}
void student::getCustomerID()
{
	cout<<"\nFirst Name "<<f_name;
	cout<<"\nLast name "<<l_name;
	cout<<"\nAddress "<<add;
	cout<<"\nCustomer Id "<<c_id;
	cout<<"\ncredit limit "<<c_lim;
}
int main()
{
	student s;
	s.setCustomerID();
	s.getCustomerID();
}
