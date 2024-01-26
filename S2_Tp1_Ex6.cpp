//Ecrire un programme qui demande un nom sans extension pour un fichier,
//rajoute l’extension « .txt », et crée ce fichier. Ensuite le programme prendra des
//chaines saisies par l’utilisateur et les écrits dans le fichier. La condition d’arrêt
//étant une chaine ne contenant pas le caractère ‘#’.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	FILE *fp;
	char nom[10]; //le nom du fichier à ouvrir
	//char ligne[100]; //pour désigner chaque ligne du fichier
	char chaine[100]; //la chaine donnee par l'utilisateur
	
	//lire le nom du fichier a creer
	printf("donner le nom du fichier a ouvrir sans extension: ");
	gets(nom);
	
	// Ajouter l'extension ".txt" au nom du fichier
	strcat(nom,".txt");
	
	//creer le fichier en mode write 
	fp=fopen(nom,"w");
	
	//verifier si le pointeur du fichier est valide
	if (fp == NULL){
		printf("le fichier n'a pas put etre creer");
		return 0;
	}
	
	//// Lire et écrire des lignes dans le fichier jusqu'à ce que la chaîne ne contienne pas '#'
	do{
		printf("donner la ligne a ecrire avec le caractere # : ");
		gets (chaine);
		//ecrire la ligne dans le ficher
		fprintf(fp,"%s\n",chaine);	
	} while (strchr(chaine, '#') != NULL); // Continuer tant que la chaîne contient '#'
	
	
	//fermuture du fichier
	fclose(fp);
		
	
	
	return 0;
}
