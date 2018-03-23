#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

long long* arr;

long long add(long long n,long long v){
	
	for(long long i = 0; i < n; i++){
		
		arr[i] = arr[i] ^ v;
		
	}
	
}

void total(long long L,long long R){
	
	long long total = 0;
	
	for(long long i = L - 1; i < R; i++){
		
		total += arr[i];
		
	}
	
	printf("%lld\n",total);
	
}

int main(){
	
	long long N,Q;
	
	scanf("%d %d",&N,&Q);
	
	arr = new long long[N];
	
	for(long long i = 0; i < N; i++){
		
		arr[i] = 0;
		
	}
	
	for(long long i = 0; i < N; i++){
	
		scanf("%lld",&arr[i]);
	
	}
	
	for(long long i = 0; i < Q; i++){
		
		long long a;
		
		scanf("%lld",&a);
		
		if(a == 1){
			
			long long X;
			
			scanf("%lld",&X);
			
			add(N,X);
			
		}else if(a == 2){
			
			long long L,R;
			
			scanf("%lld %lld",&L,&R);
			
			total(L,R);
			
		}else if(a == 3){
			
			sort(arr,arr+N);
			
		}
		
	}
}
