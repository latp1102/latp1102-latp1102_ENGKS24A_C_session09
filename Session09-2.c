#include<stdio.h>

int main(){
	int a[100];
	int n;
	
	printf("Moi ban nhap vao so phan tu: ");
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++){
		printf("Moi ban nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int index; 
	int value; 
	printf("Moi ban nhap vi tri can sua: ");
	scanf("%d",&index);
	printf("Moi ban nhap gia tri moi sau khi sua: ");
	scanf("%d",&value);
	
	a[index] = value;
	for(int i = 0; i < n;i++){
		printf("%d",a[i]);
    }
    return 0;
}

