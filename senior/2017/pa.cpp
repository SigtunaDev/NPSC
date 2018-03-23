#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring> 
using namespace std;

long long a[2048],b[2048],d[2048],count = 0;

bool check(string str,long long ans){
	
	if(str.length() == 1) return false;
	
	bool find = false;
	
	for(long long i = 0; i < str.length() - 1; i++){
		
		long long num1 = 0;
		long long num2 = 0;
		
		char c[2048];
		
		strcpy(c,str.c_str());
		
		string s1 = "";
		string s2 = "";
				
		for(long long j = 0; j <= i; j++){
			
			s1 += c[j];
			
		}
		
		for(long long j = i+1; j < str.length() ;j++){
			
			s2 += c[j];
			
		}

	    if(s1.c_str()[0] == '0' && s1.length() > 1) continue;
	
		if(s2.c_str()[0] == '0' && s2.length() > 1) continue;
				
		num1 = atoi(s1.c_str());
		num2 = atoi(s2.c_str());
		
		if(num1+num2 == ans){
			
			a[count] = 0;
			b[count] = 0;
			d[count] = 0;
			
			a[count] = num1;
			b[count] = num2;
			d[count] = ans;
		
			count++;
			
			find = true;
			
		}
		
	}
	
	return find;
	
}

bool check_zero(string str){
	
	char c[2048];
	
	strcpy(c,str.c_str());
	
	for(long long i = 0; i < str.length(); i++){
		
		if(c[i] != '0') return false;
		
	}
	
	return true;
	
}

int main(){

	string str;
	
	cin >> str;
	
	char c[2048];
	
	strcpy(c,str.c_str());
	
	long long len = str.length();
	
	for(long long i = 0; i < len-2; i++){	
		
		long long answer;
		
		string str = "";
		string num = "";
		
		for(long long j = len-1-i; j < len; j++){
			
			str += c[j];
			
		}
		
		for(long long j = 0; j < len-i-1; j++){
			
			num += c[j];
			
		}
		
		answer = atoi(str.c_str());
		
		//篩選掉答案為零，但不是全部都是0(例如03)，且長度大於1(00000)		
		if(str.c_str()[0] == '0' && check_zero(str) == false && str.length() > 1) continue;
		
		//篩選掉數字為零，但不是全部都是0(例如03)，且長度不等於2(00可以湊成0+0) 
		if(num.c_str()[0] == '0' && check_zero(num) == false && num.length() != 2) continue; 
		
		//假設answer等於0，篩選掉num不等於0的情況，因為這不存在 
		if(answer == 0 && check_zero(num) == false && num.length() > 1) continue;
		
		check(num,anser);

	}
	
	cout << count << endl;
	
	for(long long i = 0; i < count; i++){
		
		cout << a[i] << " + " << b[i] << " = " << d[i] << endl;
		
	}
	
}
