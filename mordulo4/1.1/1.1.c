#include<stdio.h>

typedef struct Base {
	float altura;
	int idade;
} Base;

enum CLASSE {Guerreiro, Mago, Sacerdote};

typedef struct Personagem {
	enum CLASSE sub;
	Base status;
	union {
		struct { int forca; }; 
		struct { float magia; }; 
		struct { int reza; }; 
	};
} Personagem;

int main () {
	Personagem p1 = { Guerreiro, {1.8, 23}, {.forca=60}};
	Personagem p2 = { Mago, {1.6, 46}, {.magia=90}};
	
	printf("Guerreiro possui a Altura: %f, Idade: %d e Forca: %d", p1.status.altura, p1.status.idade, p1.forca);
	printf("\n");
	printf("Mago possui a Altura: %f, Idade: %d e Magia: %f", p2.status.altura, p2.status.idade, p2.magia);
	
	return 0;
}
