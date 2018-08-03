#include <stdio.h>
#include <string.h>

int get(char* s) {
	int o;
	printf("%s", s);
	scanf("%d", &o);
	return o;
}

main() {
	
	
	if(get("E mamimefero? "))
		if(get("E quadrupede? "))
			if(get("E carnivero? ")) printf("Leao");
			else printf("Cavalo");
		else if(get("E bipede? "))
			if(get("E onivoro? ")) printf("Homem");
			else printf("Macaco");
		else if(get("E voador? ")) printf("Morcego");
		else printf("Baleia");
	else if(get("E ave? ")) 
		if(get("E nao-voador? "))
			if(get("E tropical? ")) printf("Avestruz");
			else printf("Pinguim");
		else if(get("Nadador? ")) printf("Pato");
		else printf("Aguia");
	else if(get("Tem casco? ")) printf("Tartaruga");
	else if(get("Carnivoro? ")) printf("Crocodilo");
	else printf("Cobra");
	
}
