#include<stdio.h>
int main(){
	int a[100];
	int n;
	int a1;
	int b;
	int index;
	int value;
	int max,min,sum = 0,c = 0;
	int flag = 0;
	while(2){
	    printf("MENU\n");
	    printf("1. nnhap so phan tu can nhap va gia tri cac phan tu\n");
	    printf("2. in ra gia tri cac phan tu dang quan ly\n");
	    printf("3. in ra gia tri cac phan tu chan và tinh tong\n");
	    printf("4. in ra gia tri lon nhat và nho nhat trong mang\n");
	    printf("5. in ra cac phan tu là so nguyen to trong mang và tinh tong\n");
		printf("6. nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
	    printf("7. them mot phan tu vao vi tri chi dinh\n");
	    printf("8. thoat\n");
	    
		printf("\nLua chon cua ban:");
	    scanf("%d",&a1);
    
    	if (a1 == 1){
	        flag = 1;
	        printf("nhap so phan tu can nhap va cac gia tri cac phan tu: ");
	        scanf("%d",&n);
	        for(int i = 0;i < n;i++){
		        printf("Phan tu thu %d:",i+1);
		        scanf("%d",&a[i]);
	        }
		}
		if (a1 == 2){
			if(flag == 0){
				printf("nhap mang truoc khi chon chuc nang khac");
			}
			printf("\nMang hien tai la: ");
			for(int i = 0;i < n;i++){
				printf("%d",a[i]);
			}
		}
		if (a1 == 3){
			if(flag == 0){
				printf("nhap mang truoc khi chon chuc nang khac ");
			}
			printf("\ncac phan tu chan: ");
			for(int i = 0;i < n;i++){
				if(a[i] % 2 == 0){
					printf("%d",a[i]);
					sum = sum + a[i];
				}
			}
			printf("\ntong bang %d",sum);
		}
		if (a1 == 4){
			if(flag == 0){
				printf("nhap mang truoc khi chon chuc nang khac ");
			}
			max = a[0];
			for (int i = 0;i < n;i++){
				if (max < a[i]){
					max =a [i];
				}
			}
			printf("\ngia tri lon nhat: %d",max);
			min = a[0];
			for (int i = 0;i < n;i++){
				if (min > a[i]){
					min = a[i];
				}
			}
			printf("\ngia tri be nhat: %d",min);
		}
		if (a1 == 5){
			if(flag == 0){
				printf("nhap mang truoc khi chon chuc nang khac ");
			}
			printf("So nguyen to trong mang la: ");
			for (int i = 0;i < n;i++){
				c = 0;
				if(a[i] < 2){
				}
				for(int j = 2;j < a[i];j++){
					if(a[i] % 2 == 0){
						c++;
					}
				}
				if (c != 0){
				}
				printf("%d ",a[i]);
				sum = sum + a[i];
			}
			printf("tong so nguyen: %d",sum);		
		}
		if (a1 == 6){
			if(flag == 0){
				printf("nhap mang truoc khi chon chuc nang khac ");
			}
			printf("nhap vao mot so: ");
			scanf("%d",&b);
			for(int i = 0;i < n;i++){
				if (a[i] == b){
					c++;
				}
			}
			printf("trong mang co %d so %d",c,b);	
		}
		if (a1 == 7){
			if(flag == 0){
				printf("nhap mang truoc khi chon chuc nang khac ");
			}
			while(2){
				printf("\nNhap vi tri muon them vao mang: ");
	            scanf("%d",&index);
	            if(index > 0 && index <= n){
	    	        break;
		        }
			} 
	        printf("nhap gia tri muon them vao mang: ");
	        scanf("%d",&value);	
	        index = index - 1;
	        for (int i = 0;i > index;i--){
		        a[i] = a[i-1];
	        }
	        a[index] = value;
	        printf("\nMang hien tai la: ");
	        for (int i = 0;i <= n;i++){
		        printf("%d",a[i]);
	        }
	    }
		if (a1 == 8){
			printf("thoat");
			break;	
		}	
    }
    return 0;
}



	
