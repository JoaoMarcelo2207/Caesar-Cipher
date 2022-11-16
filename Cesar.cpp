#include <stdio.h>
#include <string.h>



int main(){
	char decisao, message[100], aux;
	int user_password;
	printf("Hello, this app can codify and decodify a Caesar Cipher\n");
	printf("You want to codify or decodify a message?\n");
	printf("\n");
	printf("1 - codify\n");
	printf("2 - decodify\n");
	printf("Your decision: ");
	scanf(" %c",&decisao);
	while(decisao != '1' && decisao != '2'){
		printf("\n");
		printf("Please type an valid number!\n");
		printf("You want to codify or decodify a message?\n");
		printf("1 - codify\n");
		printf("2 - decodify\n");
		printf("Your decision: ");
		scanf(" %c",&decisao);
	}
	if(decisao == '1'){
		printf("Please type the message you want to codify (100 characters supported): \n");
		scanf(" %[^\n]s", message);
		printf("Please type the password(how many spins)you want to use: \n");
		scanf(" %d", &user_password);
		for(int i = 0; i<strlen(message); i++){
			aux = message[i];
			aux = (aux + user_password - 'a') % 26 + 'a';
			message[i] = aux;
		}
		printf("Encrypted message: %s", message);
	}
	
	else{
		printf("Please type the message you want to decodify (100 characters supported): \n");
		scanf(" %[^\n]s", message);
		printf("Please type the password: \n");
		scanf(" %d", &user_password);
		
		for(int i = 0; i<strlen(message); i++){
			aux = message[i];
			aux = (aux - user_password - 'a') % 26 + 'a';
			message[i] = aux;
		}
		printf("Desencrypted message: %s", message);	
	}
	
	return 0;
}

