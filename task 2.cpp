#include<iostream>
using namespace std;
class country
{
	private:
	char name[20],location[20],cap[30];
	int area,pop;
	public:
	void setinput();
	void getoutput();
};
void country::setinput()
{
	cout<<"Enter Country Name ";
	cin>>name;
	cout<<"Enter Location ";
	cin>>location;
	cout<<"Enter area ";
	cin>>area;
	cout<<"Enter Population ";
	cin>>pop;
	cout<<"Enter Capital ";
	cin>>cap;
}
void country::getoutput()
{
					cout<<"\nCountry name "<<name;
					cout<<"\nLocation "<<location;
					cout<<"\nArea "<<area;
					cout<<"\nPopulation "<<pop;
					cout<<"\ncapital "<<cap;

			}
int main()
{
	country c;
	c.setinput();
	c.getoutput();
	
}
