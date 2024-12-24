#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i <n ;i++){
		printf("nhap vao gia tri index[%d]: ",i);
		scanf("%d",arr+i);
	}
		int choice;
	do{
		printf("\n========MENU========\n");
		printf("1. in ra cac phan tu\n");
		printf("2. su dung insertion sort sap xep mang giam dan in ra\n");
		printf("3. su dung seletion sort sap xep mang tang dan va in ra\n");
		printf("4. su dung bubble sort sap xep mang giam dan va in ra\n");
		printf("5. thoat\n");
		printf("nhap vao lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i = 0; i < n; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 2:
				for(int i = 1; i < n; i++){
					int could = arr[i];
					int j = i - 1;
					while(j >= 0 && could > arr[j]){
						arr[j+1] = arr[j];
						j-=1;
					}
					arr[j+1] = could;
				}
				for(int i = 0; i < n; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 3:
				for (int i = 0; i < n-1; i++){
					int min = i;
					for (int j =i+1; j < n; j++){
						if (arr[j]<arr[min]){
							min=j;
						}
					}
					int temp = arr[min];
					arr[min]=arr[i];
					arr[i]=temp;
				}
				for(int i = 0; i < n; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 4:
				for (int i = 0; i < n-1; i++){
					for (int j =i+1; j < n; j++){
						if(arr[i]<arr[j]){
							int temp = arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i = 0; i < n; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 5:
				printf("thoat...");
				return 0;
		}
	}while(choice!=5);
	return 0;
}
