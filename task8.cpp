#include<iostream>
using namespace std;
main(){
	cout <<"Enter voltage (in volts): ";
        float voltage;
        cin>> voltage;
        cout<<"Enter current (in amperes): ";
        float current;
        cin>> current;
	float power;
	power = current*voltage;
        cout<<"The power is "<< power;
	cout<<" Watts.";

}