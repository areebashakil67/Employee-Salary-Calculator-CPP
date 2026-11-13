#include<iostream>
#include<string> 
using namespace std;
class Employee{
public:
	int hourlywages; 
	float monthlysalary;
	string name, designation;
	public:
		void info()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter hourly wages: ";
			cin>>hourlywages;
			cout<<"Enter designation: ";
			cin>>designation;
		}
			void salary()
			{
				monthlysalary=hourlywages*40*4;
				cout<<monthlysalary<<endl;
			}
		};
		int main(){
			Employee e1, e2, e3, e4, e5;
			e1.info();
			e1.salary();
			e2.info();
			e2.salary();
			e3.info();
			e3.salary();
			e4.info();
			e4.salary();
			e5.info();
			e5.salary();
			return 0;	
			
		}
