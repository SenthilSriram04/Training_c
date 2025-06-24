#include<stdio.h>
int main()
{

	int n,k;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:");
	for(int k=0; k<n; k++) {
		scanf("%d", &arr[k]);
	}
	printf("\n");
	for(int i=0; i<n; i++) {
		int temp;
		for(int j=i+1; j<n; j++) {
			if(arr[j]<arr[i]) {

				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

			}
		}
	}

	for(int i=0; i<n; i++)
	{
		printf("%d\n",arr[i]);

	}
	return 0;
}