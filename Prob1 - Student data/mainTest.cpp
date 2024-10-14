#include <bits/stdc++.h>
using namespace std;

struct studentData {
	string NIM;
	float utsValue;
	float uasValue;
};

int main() {

	int n=1;

	studentData x[55];

    x[0].NIM = "546674";
    x[0].utsValue = 90;
    x[0].uasValue = 88;

	// for(int i=0; i<n; i++)
	// {
	// 	cout<<"enter the student's NIM: ";
	// 	cin>>x[i].NIM;
	// 	cout<<'\n';
	// 	cout<<"enter the UTS value: ";
	// 	cin>>x[i].utsValue;
	// 	cout<<'\n';
	// 	cout<<"enter the UAS value: ";
	// 	cin>>x[i].uasValue;
	// 	cout<<'\n';
	// }

	// cout<<"--------"<<'\n';

	// for(int i=0; i<n; i++)
	// {
	// 	//calculate the average

	// 	cout<<"NIM: "<<x[i].NIM<<'\n';
	// 	cout<<"Average: "<<avr<<'\n';
	// }

    float avr = (x[0].utsValue + x[0].uasValue)/2;

    string expectedNIM = "546674";
    float expectedAvr = 89;

    if(expectedNIM==x[0].NIM && expectedAvr==avr)
    {
        cout<<"SUCCESSFULLY"<<'\n';
    }
	
}