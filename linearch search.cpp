#include<stdio.h>
int main(){
	int n,f=0,index;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array Elemeents : ");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int search;
	printf("Enter the serach element: ");
	scanf("%d",&search);
	for(int i=0;i<n;i++){
	if(arr[i]==search)
	{
		f=1;
		 index=i;
		break;
	}
	}
	if(f){
		printf("Elememt is found in postion %d",index);
	}
	else
	printf("Element is not found");


	return 0;
}
