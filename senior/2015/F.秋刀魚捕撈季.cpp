/**********************************************************************************/
/*  Problem: h151 "F.秋刀魚捕撈季" from NPSC 2015 高中組初賽                                 */
/*  Language: C++                                                                 */
/*  Result: AC (9ms, 257KB) on ZeroJudge                                          */
/*  Author: HHVS_SigTuna at 2018-04-19 20:03:41                                   */
/**********************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int toInt(string str){
	
	return atoi(str.c_str());
	
}

int main(){
	
	int T;
	
	cin >> T;
	
	for(int i = 0; i < T; i++){
		
		int N,M,F;
		
		cin >> N >> M >> F;
		
		int* arr = new int[N];
		
		memset(arr,0,N);
		
		for(int j = 0; j < N; j++){
			
			string str;
			
			cin >> str;
			
			if(str == "other"){
				
				continue;
				
			}
			
			arr[j] = toInt(str);
			
		}
		
		sort(arr,arr + N);
		reverse(arr,arr + N);
		
		int max = 0;
		
		for(int j = 0; j < F && j < N; j++){
			
			if(arr[j] < M) continue;
			
			max += arr[j];
			
		}
		
		cout << max << endl;	
		
	}
	
} 
