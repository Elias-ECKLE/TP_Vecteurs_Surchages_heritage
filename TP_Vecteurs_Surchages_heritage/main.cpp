#include "CVect2D.h"
#include "CVect3D.h"
#include <iostream>
#include <string.h>

using namespace std;
void affichageValeurs2D(string valeurTexte, float flt_val1_X, float flt_val1_Y, float flt_val2_X, float flt_val2_Y);
void affichageValeurs3D(string valeurTexte, float flt_val1_X, float flt_val1_Y, float flt_val1_Z, float flt_val2_X, float flt_val2_Y, float flt_val2_Z);


int main() {

	


	//test Vecteurs 2D :

	cout << "_________________________________________________TEST VECTEURS 2D__________________________________________" << endl << endl;
		CVect2D c_v1(2, 2);
		CVect2D c_v2(2, 2);
		CVect2D c_v3(6, 10);
		CVect2D c_v4;
		CVect2D c_v5;
		CVect2D c_v6;
		bool resultat1;


		//addition :
		c_v4 = c_v3 + c_v2;
		affichageValeurs2D("Addition", c_v3.getX(), c_v3.getY(), c_v2.getX(), c_v2.getY());
		c_v4.affiche();
		cout << endl;

		//soustraction :
		affichageValeurs2D("Soustraction", c_v3.getX(), c_v3.getY(), c_v2.getX(), c_v2.getY());
		c_v6 = c_v3 - c_v2;
		c_v6.affiche();
		cout << endl;

		//multiplication :
		c_v6 = c_v3 * c_v2;
		affichageValeurs2D("Multiplication", c_v3.getX(), c_v3.getY(), c_v2.getX(), c_v2.getY());
		c_v6.affiche();
		cout << endl;

		//division
		affichageValeurs2D("Division", c_v3.getX(), c_v3.getY(), c_v2.getX(), c_v2.getY());
		c_v6 = c_v3 / c_v2;
		c_v6.affiche();
		cout << endl;

		//différence :
		affichageValeurs2D("Les vecteurs 32D sont - ils differents entre", c_v3.getX(), c_v3.getY(), c_v2.getX(), c_v2.getY());
		resultat1 = c_v3 != c_v2;
		cout << resultat1 << endl;
		
		cout << "Les vecteurs 2D coincident-ils ou pas " << endl;
		//coincide :
		cout<<coincide2D(c_v6, c_v3);
		cout << endl;







	//test Vecteurs 3D :

		cout << endl<< "_________________________________________________TEST VECTEURS 3D__________________________________________" << endl << endl;

		CVect3D c_v1_3D(1, 2, 3);
		CVect3D c_v2_3D(1, 2, 4);
		CVect3D c_v3_3D(7, 7, 7);
		CVect3D c_v4_3D;
		CVect3D c_v5_3D;
		CVect3D c_v6_3D;

	
		//coincide 3D 
		cout << "Les vecteurs 3D coincident-ils ou pas " << endl;
		bool resultat2 = coincide3D(c_v1_3D, c_v2_3D);
		cout << resultat2 << endl;
		cout << endl;

		//addition :
		c_v3_3D = c_v1_3D + c_v2_3D;
		affichageValeurs3D("Addition",c_v1_3D.getX(),c_v1_3D.getY(), c_v1_3D.getZ(),c_v2_3D.getX(),c_v2_3D.getY(),c_v2_3D.getZ());
		c_v3_3D.affiche3D();
		cout << endl;

		//soustraction
		c_v4_3D = c_v1_3D - c_v2_3D;
		affichageValeurs3D("Soustraction", c_v1_3D.getX(), c_v1_3D.getY(), c_v1_3D.getZ(), c_v2_3D.getX(), c_v2_3D.getY(), c_v2_3D.getZ());
		c_v4_3D.affiche3D();
		cout << endl;


		//multiplication :
		c_v5_3D = c_v1_3D * c_v2_3D;
		affichageValeurs3D("Multiplication", c_v1_3D.getX(), c_v1_3D.getY(), c_v1_3D.getZ(), c_v2_3D.getX(), c_v2_3D.getY(), c_v2_3D.getZ());
		c_v5_3D.affiche3D();
		cout << endl;


		//division:
		c_v6_3D = c_v1_3D / c_v2_3D;
		affichageValeurs3D("Division", c_v1_3D.getX(), c_v1_3D.getY(), c_v1_3D.getZ(), c_v2_3D.getX(), c_v2_3D.getY(), c_v2_3D.getZ());
		c_v6_3D.affiche3D();
		cout << endl;


		//différent
		resultat2 = c_v1_3D != c_v2_3D;
		affichageValeurs3D("Les vecteurs 3D sont - ils differents entre", c_v1_3D.getX(), c_v1_3D.getY(), c_v1_3D.getZ(), c_v2_3D.getX(), c_v2_3D.getY(), c_v2_3D.getZ());
		cout << resultat2 << endl;
		cout << endl;


		//affichage par le flux cout 
		cout << "Affichage par le surcharge de flux :" << endl; ;
		cout << c_v6_3D;


		cout << endl << endl << endl;
	return 0;
};







void affichageValeurs2D(string valeurTexte, float flt_val1_X, float flt_val1_Y, float flt_val2_X, float flt_val2_Y) {

	cout << valeurTexte << " vecteurs 2D entre : " << flt_val1_X << " et " << flt_val2_X << " pour X / ";
	cout << "entre " << flt_val1_Y << " et " << flt_val2_Y << " pour Y / " << endl;
}
void affichageValeurs3D(string valeurTexte,float flt_val1_X, float flt_val1_Y, float flt_val1_Z, float flt_val2_X, float flt_val2_Y, float flt_val2_Z) {

	cout << valeurTexte <<" vecteurs 3D entre : " << flt_val1_X << " et " << flt_val2_X << " pour X / ";
	cout << "entre " << flt_val1_Y << " et " << flt_val2_Y<< " pour Y / ";
	cout << "entre " << flt_val1_Z << " et " << flt_val2_Z << " pour Z " << endl;
}