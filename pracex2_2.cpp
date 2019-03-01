#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	float X[20];
	int N = 0;
	ofstream rs("result.txt");
	ifstream source("score3.txt");
	string line;
	while(getline(source,line)){
		X[N] = atof(line.c_str());
		N++;
	}
	sort(X,N);
	int i = 0;
	int	j = 0;
	while(i < N){
	
		if(X[i]==X[i-1]){
			j++;
			
			
			rs<<i+1-j<<":"<<X[i]<<endl;
			i++;
			

		}else{
			
			rs<<i+1<<":"<<X[i]<<endl;
			i++;
			j = 0;

		}
		
	}
	rs.close();
	
	
	return 0;
}

