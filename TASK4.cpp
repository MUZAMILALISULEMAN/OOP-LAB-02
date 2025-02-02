#include<iostream>
#include <cctype>//this library has tolower(char ch) function
using namespace std;
int main() {

	int n;
	cout<<"HOW MANY STRINGS TO BE STORED: ";
	cin>>n;
	cout<<endl;
	string *strings = new string[n];

	for(int i=0; i<n; i++) {

		cout<<"ENTER THE STRING "<<i+1<<" : ";
		cin>>strings[i];

	}

	cout<<endl<<"UNSORTED STRINGS: ";
	for(int i=0; i<n; i++) {
		cout<<strings[i]<<" ";

	}

	string string1,string2;
	string temp;


	for(int i=0;i<n;i++){
		
	string1 = strings[i]; 
	for(int l=0;l<string1.length();l++){ // string for lowercase string 1
			string1[i] = tolower(strings[i][l]);
		}
	for(int j=0; j<n; j++) {
			string2 = strings[j];
			for(int l=0;l<string2.length();l++){ //string for lowercase string 2
			string2[i] = tolower(strings[i][l]);
		}
		
		
		if(string1.compare(string2) < 0) { //lowercase string1 and string2 for fair comparison
			temp = strings[i];
			strings[i] = strings[j];
			strings[j] = temp;
		}
	}

	}

cout<<endl<<"SORTED STRINGS: ";
for(int i=0; i<n; i++) {
	cout<<strings[i]<<" ";

}

delete [] strings;



return 0;
}