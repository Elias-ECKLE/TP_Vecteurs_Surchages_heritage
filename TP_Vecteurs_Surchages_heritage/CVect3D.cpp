#include "CVect3D.h"

//constructeur :
CVect3D::CVect3D(float flt_z)
{
	this->m_flt_z = flt_z;
}
CVect3D::CVect3D(float flt_x, float flt_y, float flt_z) :CVect2D(flt_x, flt_y)
{
	this->m_flt_z = flt_z;
}

CVect3D::CVect3D(CVect3D& c_v) : CVect2D(c_v)
{
	this->m_flt_z = c_v.m_flt_z;
}


//constructeur de copie:




//destructeur :
CVect3D::~CVect3D()
{
	//std::cout << "Destructeur" << std::endl;
}




//asseceur :
float CVect3D::getZ() const
{
	return this->m_flt_z;
}





//mutateur :
void CVect3D::setZ(float flt_z)
{
	this->m_flt_z = flt_z;
}





//operateurs :
CVect3D CVect3D::operator=(const CVect3D& c_v_3D)
{

	this->setX(c_v_3D.getX());
	this->setY(c_v_3D.getY());
	this->m_flt_z = c_v_3D.m_flt_z;

	return *this;
}

CVect3D CVect3D::operator+(CVect3D& c_v_3D)
{

	CVect3D c_v_3DResult;

	float this_x = this->getX();
	float this_y = this->getY();
	float c_v_3D_x = c_v_3D.getX();
	float c_v_3D_y = c_v_3D.getY();

	c_v_3DResult.setX(this_x + c_v_3D_x);
	c_v_3DResult.setY(this_y + c_v_3D_y);


	c_v_3DResult.m_flt_z = this->m_flt_z + c_v_3D.m_flt_z;




	return c_v_3DResult;
}


CVect3D CVect3D::operator-(CVect3D& c_v_3D)
{
	CVect3D c_v_3DResult;
	float this_x = this->getX();
	float this_y = this->getY();
	float c_v_3D_x = c_v_3D.getX();
	float c_v_3D_y = c_v_3D.getY();

	c_v_3DResult.setX(this_x - c_v_3D_x);
	c_v_3DResult.setY(this_y - c_v_3D_y);
	c_v_3DResult.m_flt_z = this->m_flt_z - c_v_3D.m_flt_z;

	return c_v_3DResult;
}

CVect3D CVect3D::operator*(CVect3D& c_v_3D)
{
	CVect3D c_v_3DResult;
	float this_x = this->getX();
	float this_y = this->getY();
	float c_v_3D_x = c_v_3D.getX();
	float c_v_3D_y = c_v_3D.getY();

	c_v_3DResult.setX(this_x * c_v_3D_x);
	c_v_3DResult.setY(this_y * c_v_3D_y);
	c_v_3DResult.m_flt_z = this->m_flt_z * c_v_3D.m_flt_z;

	return c_v_3DResult;
}

CVect3D CVect3D::operator/(CVect3D& c_v_3D)
{
	CVect3D c_v_3DResult;
	float this_x = this->getX();
	float this_y = this->getY();
	float c_v_3D_x = c_v_3D.getX();
	float c_v_3D_y = c_v_3D.getY();

	if ((c_v_3D_x != 0) && (c_v_3D_y != 0) && (c_v_3D.m_flt_z != 0)) {
		c_v_3DResult.setX(this_x / c_v_3D_x);
		c_v_3DResult.setY(this_y / c_v_3D_y);
		c_v_3DResult.m_flt_z = this->m_flt_z / c_v_3D.m_flt_z;
	}


	return c_v_3DResult;
}

bool CVect3D::operator!=(CVect3D& c_v_3D)
{
	if ((this->getX() == c_v_3D.getX()) && (this->getY() == c_v_3D.getY()) && (this->m_flt_z == c_v_3D.m_flt_z)) {


		return false;
	}
	else {
		return true;
	}
}


ostream& operator<<(ostream& os, const CVect3D& c_v_3D)
{

	os <<"X :"<<c_v_3D.getX()<<" / "<<"Y : "<<c_v_3D.getY()<<" / "<< "Z :" <<c_v_3D.m_flt_z << endl;
	return os;
}







//methodes :

void CVect3D::affiche3D()
{
	CVect2D::affiche();
	cout << "Coordonnee X du vecteur : " << this->m_flt_z << endl;
}

bool coincide3D(CVect3D& c_v1_3D, CVect3D& c_v2_3D)
{

	if ((c_v1_3D.getX() == c_v2_3D.getX()) && (c_v2_3D.getY() == c_v2_3D.getY()) && (c_v1_3D.m_flt_z == c_v2_3D.m_flt_z)) {

		return true;
	}
	else {

		return false;
	}

}