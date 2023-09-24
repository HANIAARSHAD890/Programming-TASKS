#include<iostream>
using namespace std;
main(){
	cout <<"Enter the current world population: ";
        float population;
	cin >> population;
	cout <<"Enter the monthly birth rate (number of births per month): ";
        float birth;
	cin >> birth;
	float pr;
        pr=birth*12;
	float cr;
	cr=pr*30;
	float decades;
	decades=population+cr;
        cout<<"The population in three decades will be: ";
	cout<<decades;
        

}
        
