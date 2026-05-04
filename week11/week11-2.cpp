// week11-2.cpp
#include <stdio.h>

int main(){
	int a[100];
	for (int m=0;m<100;m++){
		scanf("%d",&a[m]);
	}
	for (int i=0;i<100-1;i++){
		for (int j=0;j<100-1;j++){
			if (a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (int i=0;i<100;i++){
		printf("%d ",a[i]);
	}
}
