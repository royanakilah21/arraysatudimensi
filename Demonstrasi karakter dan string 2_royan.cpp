/*Demonstrasi karakter dan string*/

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

string lowerCase(string str){
	for(int i = 0; i < str.length(); i++)
	    str[i]=towlower(str[i]);
	return str;
}

int main(){
	string str;
	cin>> str;
	while (str!= "STOP"){
		cout<< lowerCase(str) << '\n';
		cin>> str;
	}
}

