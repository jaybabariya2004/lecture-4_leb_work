#include<iostream>
#include<string.h>
using namespace std;

class Food{
	
	public:
		
		int id,rating,establish_year,comp_revenue,staff_quantity;
		char name[30],type[30],location[30];
		
		public:
		
			Food(int id,char name[],char type[],int rating,char location[],int establish_year,int staff_quantity){
				
				cout<<"Fast Food cafe Id : "<<id<<endl;
				cout<<"Fast Food cafe Name : "<<name<<endl;
				cout<<"Fast Food cafe Type : "<<type<<endl;
				cout<<"Fast Food cafe Rating : "<<rating<<endl;
				cout<<"Fast Food cafe Location : "<<location<<endl;
				cout<<"Fast Food cafe Establish Year: "<<establish_year<<endl;
				cout<<"Fast Food cafe Staff Quantity : "<<staff_quantity<<endl;
			}		
};

int main(){
	
	Food obj(1,"Shivam","A/C",5,"Vesu",2018,10);
}
