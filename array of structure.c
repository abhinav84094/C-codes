#include <stdio.h>
#include <string.h>
int main()
{
	typedef struct pokemon{
		char name[20];
		int hp;
		int speed;
		int attack;
		char tier;
	}pokemon;
	
	pokemon arr[3];
	
	strcpy(arr[0].name, "Mewtwo");
	arr[0].attack=50;
	arr[0].hp=100;
	arr[0].speed=30;
	arr[0].tier= 'A';
	
	strcpy(arr[1].name, "Pikachu");
	arr[1].attack=60;
	arr[1].hp=200;
	arr[1].speed=80;
	arr[1].tier= 'C';
	
	strcpy(arr[2].name, "Charizard");
	arr[2].attack=60;
	arr[2].hp=80;
	arr[2].speed=30;
	arr[2].tier= 'B';
	
	int i;
	for(i=0; i<=2; i++){
		printf("\n     %d      \n",i);
		printf("name: %s\n", arr[i].name);
		printf("attack: %d\n", arr[i].attack);
		printf("hp: %d\n", arr[i].hp);
		printf("speed: %d\n", arr[i].speed);	
		printf("tier: %c\n", arr[i].tier);
	
	}
	return 0;
}
