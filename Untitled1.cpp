#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, temp;
	string men="menofia";

	cin>> str;
	for(int i=0, n=str.length(); i<n; i++)
	{
//		to remove the complicated characters
		temp+= str[0];
		str.erase(remove(str.begin(), str.end(), str[0]), str.end());

	}
	str=temp;

	for(int i=0;i<7; i++){
		if(str[i]==men[i]){
			temp="Yes";
		}else{
			temp="No";
		}
	}
	cout<<temp;
	
	
	return 0;
}

