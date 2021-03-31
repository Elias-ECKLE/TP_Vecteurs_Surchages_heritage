#pragma once
#include "CVect2D.h"

class CVect3D : public CVect2D {


private:
	float m_flt_z;

public:

	//constructeur :
	CVect3D(float flt_z = 0);
	CVect3D(float flt_x, float flt_y, float flt_z);

	//constructeur de copie :
	CVect3D(CVect3D& c_v);

	//destructeur
	~CVect3D();

	//Asseceurs :
	float getZ()const;

	//Mutateurs :
	void setZ(float flt_z);



	//Methodes :

		//operateurs :
	CVect3D operator=(const CVect3D&);

	//BUT :faire la somme des deux vecteurs
	//ENTREE:ref instance CVect2D
	//SORTIE :nouvelle instance CVect3D
	CVect3D operator+(CVect3D&);

	//BUT :faire la soustraction des deux vecteurs
	//ENTREE:ref instance CVect3D
	//SORTIE :nouvelle instance CVect3D
	CVect3D operator-(CVect3D&);

	//BUT :faire la multiplication des deux vecteurs
	//ENTREE:ref instance CVect3D
	//SORTIE :nouvelle instance CVect3D
	CVect3D operator*(CVect3D&);

	//BUT :faire la division des deux vecteurs
	//ENTREE:ref instance CVect3D
	//SORTIE :nouvelle instance CVect3D
	CVect3D operator/(CVect3D&);

	//BUT :voir si c'est différent ou pas
	//ENTREE:ref instance CVect3D
	//SORTIE :boolean
	bool operator!=(CVect3D&);



	//autre :
		//BUT :comparer les coordonnées des vecteurs et voir s'ils sont les mêmes
		//ENTREE: 2 refs instance CVect3D
		//SORTIE : valeur booleen
	friend bool coincide3D(CVect3D&, CVect3D&);

	//BUT :afficher les coords x et y et z du vecteur
	//ENTREE: ras
	//SORTIE : ras
	void affiche3D();





};