#include<stdio.h>
int main(){
	int arr[]={0,1,2,3,4,};
	int size=sizeof(arr)/sizeof(int);
	int count=0, number;
	printf("Hay nhap mot phan tu bat ki: ");
	scanf("%d",&number);
	for(int i=0;i<size;i++){
		if(arr[i]==number){
			printf("Phan tu CO ton tai trong mang");
			count++;
			break;
		}
	}
	if(count==0){
		printf("Phan tu KHONG ton tai trong mang");
	}
}
