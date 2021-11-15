#include<stdio.h>

typedef struct Base {
	float height;
	int age;
} Base;

enum CLASSE {Guerreiro, Mago, Sacerdote};

typedef struct Personagem {
	enum CLASSE sub;
	base status;
	union {
		struct { int power; }; 
		struct { float magic; }; 
		struct { int pray; }; 
	};
} Personagem;

int main () {
	Personagem p1 = { Guerreiro, {2.0, 25}, {.power=60}};
	Personagem p2 = { Mago, {1.8, 48}, {.magic=90}};
	
	printf("Guerreiro possui a Altura: %f, Idade: %d e Forca: %d", p1.status.height, p1.status.age, p1.power);
	printf("\n\n");
	printf("Mago possui a Altura: %f, Idade: %d e Magia: %f", p2.status.height, p2.status.age, p2.magic);
	
	return 0;
}
