#include<stdio.h>
using namespace std;
int main() {
    int n;
	scanf("%d", &n);
	for (int i = n-1; i > 0 ; i--)
	{
	for(int j=i; j>0 ; j-- ){
	        printf(" ");
	}
	for(int k=i; k<n; k++){
	    printf("*");
	}
    printf("\n");
	}
	for (int i = 0; i < n ; i++)
	{
	    for(int j=0; j<i ; j++ ){
	        printf(" ");
	    }
	for(int k=i; k<n; k++){
	    printf("*");
	}
	    printf("\n");
	}
	
	return 0;
}