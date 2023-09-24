#include<iostream>
using namespace std;
main(){
	cout << "Enter the size in megabytes (MB): ";
        int megabytes;
        cin >> megabytes;
	float bits;
	bits=megabytes*8388608;
        cout<< megabytes;
	cout<<" MB";
	cout<<" is equivalent to ";
	cout<< bits;
	cout<< " bits.";
        }