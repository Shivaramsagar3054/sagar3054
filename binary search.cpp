#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter array elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int search;
	printf("\nEnter the search element: ");
	scanf("%d",&search);
	int f=0;
	int low=0,high=n-1;
	int pos;
	while(1){
		int mid=(low+high)/2;
		if(arr[mid]==search){
			f=1;
			pos=mid;
			break;
		}else if(arr[mid]<search){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(f==1){
		printf(" \nelement is found in array in postion %d\n",pos);
	}
	else{
		printf("Element is not found in array");
	}
	

	return 0;
}