#include<stdio.h>
int main(){
	int arr[]={4,5,2,3,1};
	int size=sizeof(arr)/sizeof(int);
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	
	int search;
	printf("Hay nhap vao mot so nguyen bat ki: ");
	scanf("%d",&search);
	
	int start=0;
	int mid;
	
	while(start<=size){
		mid=(start+size)/2;
		if(arr[mid]==search){
			printf("Vi tri phan tu can tim o vi tri %d", mid);
			return 0;
		}else if(arr[mid]>search){
			size=mid-1;
		}else{
			start=mid+1;
		}
	}
	printf("Khong tim thay ket qua can tim.");
	return 0;
}
