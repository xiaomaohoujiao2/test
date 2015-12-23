#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){

	string s;
	cin>>s;
	for(int i = 0 ; s[i] != '\0' ; i++){
        cout<<s[i];
	}
	return 0;
}
