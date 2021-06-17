#include <stdio.h>

void greeting(char name[]);

int main(){
	char name[] = "Harsha";
	greeting(name);
}

void greeting(char name[]){
	printf("Hey, How are you doing?%s" + name);
}
