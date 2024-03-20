#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1 ; i<strlen(c); i++){
		c[i] = tolower( c[i]);
	}
}

int main(){
	int t ;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000]; 
		char a[20][50];
		int n = 0 ;
		gets(c);
		char *token = strtok(c," ");
		while(token != NULL){
			strcpy(a[n] , token );
			n++;
			token = strtok(NULL, " ");
		}
		for(int i = 0 ; i< n ; i++){
			chuanhoa(a[i]);
			printf("%s ", a[i]);
		}
		printf("\n");	
	}
}

//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//
//void chuanhoa(c[]){
//	
//}
//int main(){
//	int t ;
//	scanf("%d", &t);
//	getchar();
//    while(t--){
//    int n= 0 ;
//	char c[1000] , a[20][50];
//	gets(c);
//	strlwr(c); // DUNG DE TAT CAC CAC KY TU DEU TIN THEO THUW TU TU DIEN( IN THUONG)
//	char *token = strtok(c, " ");
//	while(token != NULL){
//		strcpy(a[n] , token);
//		n++;
//		token = strtok(NULL," ");
//	}
//	printf("%s",a[n-1]);
//	for(int i = 0 ; i<n-1;i++){
//		printf("%c", a[i][0]);
//	}
//	printf("@gmail.com");
//	printf("\n");
//}
//}
