#include "ABR.hpp"
	/* 			D�finition de la classe ABREtdiants			 */
	ABREtudiants::ABREtudiants(){
		hauteur=0;
	}
	ABREtudiants::ABREtudiants(int hauteur){
		this->hauteur=hauteur;
	}
	ABREtudiants::ABREtudiants(ABREtudiants &A){
		this->hauteur=A.hauteur;
	}
	int ABREtudiants::getHauteur(){
		return hauteur;
	}
	/* 				D�finition de la classe FILE			 */
	/* 				D�finition de la classe Etudiants			 */
	Etudiants::getMtr(){
		return mtr;
	}
	float Etudiants::getNote(int i){
		return notes[i];
	}
	/* 				D�finition de la classe ListeEtudiants			 */

	
	
