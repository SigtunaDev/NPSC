#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int* arr;

int add(int n,int v){
	
	for(int i = 0; i < n; i++){
		
		arr[i] = arr[i] ^ v;
		
	}
	
}

void total(int L,int R){
	
	int total = 0;
	
	for(int i = L - 1; i < R; i++){
		
		total += arr[i];
		
	}
	
	printf("%d\n",total);
	
}

int main(){
	
	int N,Q;
	
	scanf("%d %d",&N,&Q);
	
	arr = new int[N];
	
	for(int i = 0; i < N; i++){
		
		arr[i] = 0;
		
	}
	
	for(int i = 0; i < N; i++){
	
		scanf("%d",&arr[i]);
	
	}
	
	for(int i = 0; i < Q; i++){
		
		int a;
		
		scanf("%d",&a);
		
		if(a == 1){
			
			int X;
			
			scanf("%d",&X);
			
			add(N,X);
			
		}else if(a == 2){
			
			int L,R;
			
			scanf("%d %d",&L,&R);
			
			total(L,R);
			
		}else if(a == 3){
			
			sort(arr,arr+N);
			
		}
		
	}
	
} 
