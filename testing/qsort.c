#include <stdio.h>
#include <stdlib.h>

int cp(const void *p, const void *q){
	return *(int *)p - *(int *)q; // casting the pointer to int then get the value
}

void fun(unsigned int a[]){
	int i;
	for(i=0;i<10;i++)
		printf("%d\n",*(a+i));
}

void ch(char p[][10]){
	int i;
	for(i=0;i<10;i++)
		printf("%s\n",*(p+i));
}

void ch2(char (*p)[10]){
	int i;
	for(i=0;i<10;i++)
		printf("%s\n",*(p+i));
}

void fun1(unsigned int *p){
	int i;
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d\n",*(p+i));
	printf("\n");
}


int main(){

	unsigned int a[10] = {1,3,2,5,4,7,8,9,10,6};
	char p[10][10]={"Mike","IS","A","VERY","HANDSOME","GUY","THAT","I","AM","VERY"};
	fun(a);
	ch(p);
	ch2(p);
	fun1(a);

	qsort(a,10,sizeof(unsigned int),cp);

	for(int i=0;i<10;i++){
		printf("%d\n",*(a+i));
	}
	

	char * b[4]; // char **
	b[0]=&p[0][0];

	printf("%c\n",*(b[0]+1));

	return 0;
}