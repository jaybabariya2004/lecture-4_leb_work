#include<iostream>
#include<string.h>
using namespace std;

class Dimond{
	
	public:
		
		int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
		char comp_name[30],comp_ceo[30];
		
		public:
		
			Dimond(int comp_id,int comp_staff_quantity,int comp_import_raw_diamonds,char comp_name[],
			int comp_revenue,int comp_export_diamonds,char comp_ceo[]){
				
				cout<<"Company Id : "<<comp_id<<endl;
				cout<<"Company Name : "<<comp_name<<endl;
				cout<<"Company Staff Quantity : "<<comp_staff_quantity<<endl;
				cout<<"Company Revenue Per Year : "<<comp_revenue<<endl;
				cout<<"Company Import Raw Diamonds : "<<comp_import_raw_diamonds<<endl;
				cout<<"Company Export Diamonds : "<<comp_export_diamonds<<endl;
				cout<<"Company CEO : "<<comp_ceo<<endl;
			}		
};

int main(){
	
	Dimond obj(1,3,4,"Devotee",2017,17,"Juker burg");
}
