//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct data{
//    char ma[100];
//    char ten[100];
//    int s;
//};
//
//int cmp(const void *a, const void *b) {
//    struct data *dataA = (struct data *)a;
//    struct data *dataB = (struct data *)b;
//    if(dataA->s == dataB->s)
//        return strcmp(dataA->ma, dataB->ma);
//    return (dataB->s - dataA->s);
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    struct data a[n];
//    for(int i = 0; i < n; i++) {
//        scanf("%s", a[i].ma);
//        getchar();
//        gets(a[i].ten);
//        scanf("%d", &a[i].s);
//    }
//    qsort(a, n, sizeof(struct data), cmp);
//    for(int i = 0; i < n; i++) {
//        printf("%s %s %d\n", a[i].ma, a[i].ten, a[i].s);
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

struct sinhvien{
	char ten[50];
	char ma[1000];
	double gpa;
	char lop[50];
	char bangai[10];
};
typedef struct sinhvien sv;

int main(){
	
		sv a;
		// dot operator ;
		gets(a.ten);
		getchar();
		scanf("%s%lf", &a.ma, &a.gpa);
		getchar();
		scanf("%s", &a.lop);
		getchar();
	    gets(a.bangai);
		printf("%s %s %.2f %s %s\n", a.ten, a.ma, a.gpa, a.lop, a.bangai);
		return 0;
	}

	

