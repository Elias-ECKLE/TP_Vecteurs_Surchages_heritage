#include "CVect2D.h"
#include "CVect3D.h"
#include <iostream>

using namespace std;



int main() {


	//travail 3 :
	CVect3D c_v1_3D(1, 2, 3);
	c_v1_3D.affiche3D();
	CVect3D c_v2_3D(1, 2, 4);
	CVect3D c_v3_3D(7, 7, 7);
	CVect3D c_v4_3D;
	CVect3D c_v5_3D;
	CVect3D c_v6_3D;

	bool resultat = coincide3D(c_v1_3D, c_v2_3D);
	c_v3_3D = c_v1_3D + c_v2_3D;
	c_v4_3D = c_v1_3D - c_v2_3D;
	c_v5_3D = c_v1_3D * c_v3_3D;
	c_v6_3D = c_v1_3D / c_v3_3D;
	resultat = c_v1_3D != c_v3_3D;


	return 0;
};