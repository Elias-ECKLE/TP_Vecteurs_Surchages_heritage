#include "CVect2D.h"
#include <iostream>

using namespace std;



int main() {


	//travail 1 version 2 : Test 
	CVect2D c_v1(2, 2);
	CVect2D c_v2(2, 2);
	CVect2D c_v3(6, 10);
	CVect2D c_v4;
	CVect2D c_v5;
	CVect2D c_v6;
	bool resultat;



	c_v4 = c_v1 + c_v2;
	c_v6 = c_v1 - c_v2;
	c_v6 = c_v3 * c_v2;
	resultat = c_v3 != c_v2;
	c_v6 = c_v3 / c_v2;










	return 0;
}