#include <stdio.h>

void greeting(char name[]);
void helloworld();

int main(){
	char name[] = "Harsha";
	greeting(name);
}

void greeting(char name[]){
	printf("Hey, How are you doing?%s" + name);

void helloworld(){
	printf("HelloWorld!");
}
