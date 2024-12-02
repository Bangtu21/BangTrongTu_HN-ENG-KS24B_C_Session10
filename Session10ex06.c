#include<stdio.h>
int main(){
	int arr[]={4,5,3,2,1};
	int size=sizeof(arr)/sizeof(int);
	int search;
	printf("Hay nhap mot so nguyen bat ki: ");
	scanf("%d",&search);
	int arr1[100], index=0;
	for(int i=0;i<size;i++){
		if(arr[i]==search){
			arr1[index]=i;
			index++;
		}
	}
	for(int i=0; i<index;i++){
		printf("Phan tu can tim o vi tri=%d",arr1[i]);
	}
}
