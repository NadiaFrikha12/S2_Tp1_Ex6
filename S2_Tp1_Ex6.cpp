//Ecrire un programme qui demande un nom sans extension pour un fichier,
//rajoute l�extension � .txt �, et cr�e ce fichier. Ensuite le programme prendra des
//chaines saisies par l�utilisateur et les �crits dans le fichier. La condition d�arr�t
//�tant une chaine ne contenant pas le caract�re �#�.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	FILE *fp;
	char nom[10]; //le nom du fichier � ouvrir
	//char ligne[100]; //pour d�signer chaque ligne du fichier
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
	
	//// Lire et �crire des lignes dans le fichier jusqu'� ce que la cha�ne ne contienne pas '#'
	do{
		printf("donner la ligne a ecrire avec le caractere # : ");
		gets (chaine);
		//ecrire la ligne dans le ficher
		fprintf(fp,"%s\n",chaine);	
	} while (strchr(chaine, '#') != NULL); // Continuer tant que la cha�ne contient '#'
	
	
	//fermuture du fichier
	fclose(fp);
		
	
	
	return 0;
}
