#include "CVect2D.h"
#include <iostream>

using namespace std;



int main() {


	//travail 1 : Test 
	CVect2D c_v1(2, 2);
	CVect2D c_v2(2, 2);
	CVect2D c_v3(6, 10);
	CVect2D c_v4;
	CVect2D c_v5;

	c_v4 = c_v1.addition(c_v2);
	c_v1.soustraction(c_v3);
	c_v5 = c_v2.multiplication(c_v4);

	bool bl_result;
	bl_result = coincide2D(c_v1, c_v2);










	return 0;
}