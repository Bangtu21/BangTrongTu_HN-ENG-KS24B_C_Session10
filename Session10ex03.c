#include<stdio.h>
int main(){
	int arr[]={4,5,2,3,1};
	int size=sizeof(arr)/sizeof(int);
	
	for(int i=1; i<size;i++){
		int key=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}
