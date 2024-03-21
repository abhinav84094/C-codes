#include <stdio.h>
int main()
{
	struct pokemon{
		int hp;
		int speed ;
		int attack	;
		char tier;
	};
	struct pokemon pikachu ;
	printf("Enter attack of Pikachu: ");
	scanf("%d", pikachu.attack);
	pikachu.hp=50;
	pikachu.speed=100;
	pikachu.tier='A';
	printf("Pikachu\n: ");
	printf("%d\n", pikachu.attack);
	printf("%d\n", pikachu.hp);
	printf("%d\n", pikachu.speed);
	printf("%c\n", pikachu.tier);
	
	printf("\nCharizard:\n");
	struct pokemon charizard;
	charizard.attack=120;
	charizard.hp=50;
	charizard.speed=80;
	charizard.tier='S' ;
	printf("%d", charizard.attack);
	
	return 0;
}
