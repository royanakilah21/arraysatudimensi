/*Demonstrasi karakter dan string*/

#include <stdio.h> 
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string str;
		cin >> str;
		for(int i=0;i <str.length();i++)
		    str[i] = tolower (str[i]);
		    
		cout <<str << '\n';
}

