#include<stdio.h>
int max(int array[],int n){
	if(n<=0){
		printf("mang khong hop le");
		return -1;
	}
	int max=array[0];
	for(int i=1;i<n;i++){
		if(array[i]>max){
			max=array[i];
			
		}
		
	}
	return max;
}
int main(){
	int arr[]={2,1,5,8,20,7};
	int  n=sizeof(arr)/sizeof(arr[0]);
	int max2=max(arr,n);
	if(max2!=-1){
		printf("so lon nhat trong mang la: %d\n",max2);
	}
	return 0;
}
