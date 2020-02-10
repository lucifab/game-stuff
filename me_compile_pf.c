#include <stdio.h>

int main(){
	FILE *file;
	unsigned char command[512];
	unsigned char test;
	
	printf("Pressione enter para compilar :3");
	test = getchar();
	
	file = fopen("comando.txt", "r+");
	fgets(command, 512, file);
	fclose(file);
	
	while(test == '\n'){
		system("cls");
		system(command);
		
		test = getchar();
		
		fopen("comando.txt", "r+");
		fgets(command, 512, file);
		fclose(file);
	}
	
	return 0;
}
