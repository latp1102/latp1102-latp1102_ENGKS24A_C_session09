#include<stdio.h>		
				
int main(){
	int a[100];
	int n;	
	int b;		
	int index;
	int value;						
	int flag = 0;					
	while(3){												
	printf("MENU\n");	
	printf("1. nhap vao mang\n");
	printf("2. hien thi mang\n");
	printf("3. them phan tu\n");
	printf("4. sua phan tu\n");
	printf("5. xoa phan tu\n");
	printf("6. thoat\n");	
				
	printf("\nLua chon cua ban: ");					
	scanf("%d",&b);
						
	if (b == 1){					
		flag = 1;				
		printf("nhap vao mang: ");				
	    scanf("%d",&n);					
	    for(int i = 0;i < n;i++){					
		printf("Phan tu thu %d:",i+1);				
		scanf("%d",&a[i]);				
	}					
		}				
		if (b == 2){				
			if (flag == 0){			
				printf("Hay nhap mang roi moi chon chuc nang khac");		
						
			}			
			printf("\nhien thi mang: ");			
			for(int i = 0;i < n;i++){			
				printf("%d ",a[i]);		
			}			
		}				
		if (b == 3){				
			if (flag == 0){			
			printf("nhap mang roi moi chon chuc nang khac");			
					
		}				
			while (3){			
		printf("\nnhap vi tri muon them vao mang: ");				
	    scanf("%d",&index);					
     	if(index > 0 && index <= n){					
		break;				
		}				
    }						
	printf("nhap gia tri muon them vao mang: ");					
	scanf("%d",&value);					
	index = index - 1;					
	for (int i = n;i > index;i--){					
		a[i] = a[i-1];				
	}					
	a[index] = value;					
    for (int i = 0;i <= n;i++){						
		printf("%d",a[i]);				
	}					
		}				
		if (b == 4){				
			if (flag == 0){			
				printf("nhap mang roi moi chon chuc nang khac");		
						
			}			
			printf("\nnhap vi tri can sua: ");			
	scanf("%d",&index);					
	printf("nhap gia tri sau khi sua: ");					
	scanf("%d",&value);					
	index = index - 1;					
	a[index] = value;					
	printf("Mang sau khi sua la: ");					
	for (int i = 0;i < n;i++){					
		printf("%d",a[i]);				
	}					
		}				
		if (b == 5){				
			if (flag == 0){			
				printf("nhap mang roi moi chon chuc nang khac");				
			}			
			while (3){			
		printf("\nnhap vi tri muon xoa khoi mang: ");				
	scanf("%d",&index);					
	if(index > 0 && index <= n){					
		break;				
		}				
	}					
	index = index - 1;					
	for (int i = index;i < n;i++){					
		a[i]= a[i + 1];				
	}					
	printf("Mang sau khi da xoa: ");					
	for (int i = 0;i < n - 1;i++){					
		printf("%d",a[i]);				
	}					
		}				
		if (b == 6){
		printf("thoat");			
			break;			
		}				
	}					
	return 0;	
}
