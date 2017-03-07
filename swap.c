#include <stdio.h>
#include <string.h>

//使用strcpy交换内容 
void swap_by_strcpy(char *p,char *q){
	char buffer[100];
	strcpy(buffer,p);
	strcpy(p,q);
	strcpy(q,buffer);
}

//仅仅修改字符串的刑参指针指向，不影响实参的指针，因而不能实现交换  
void swap_by_point(char *p,char *q){
    char *temp;
    temp=p;
    p=q;
    q=temp;
}

//修改二重指针 
void swap_by_ppoint(char **p,char**q){  
    char *temp;  
    temp=*p;  
    *p=*q;  
    *q=temp;  
}  

int main() {
    char *a="abcd";
    char *b="1234";
   
   	
    swap_by_strcpy(a,b);
	//swap_by_point(a,b);
    swap_by_ppoint(&a,&b);
	printf("a: %s  b: %s\n",a,b);
    return 0;
}
