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
	printf("Moi ban nhap vi tri muon xoa: ");
	scanf("%d",&index);
	printf("Moi ban nhap gia tri xoa: ");
	scanf("%d",&value);
	
	for(int i = index; i < (n - 1);i++){
		a[i] = a[i + 1];
    }
	for(int i = 0; i < n -1;i++){
		printf("%d",a[i]);
    }
    return 0;
}

