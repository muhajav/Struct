#include <bits/stdc++.h>
using namespace std;

struct studentData {
	string NIM;
	float utsValue;
	float uasValue;
};

int main() {

	int n;
	
	cout<<"The number of students: ";
	cin>>n;

	studentData x[55];

	for(int i=0; i<n; i++)
	{
		cout<<"enter the student's NIM: ";
		cin>>x[i].NIM;
		cout<<'\n';
		cout<<"enter the UTS value: ";
		cin>>x[i].utsValue;
		cout<<'\n';
		cout<<"enter the UAS value: ";
		cin>>x[i].uasValue;
		cout<<'\n';
	}

	cout<<"--------"<<'\n';

	for(int i=0; i<n; i++)
	{
		//calculate the average
		float avr = (x[i].utsValue + x[i].uasValue)/2;

		cout<<"NIM: "<<x[i].NIM<<'\n';
		cout<<"Average: "<<avr<<'\n';
	}
	
}
