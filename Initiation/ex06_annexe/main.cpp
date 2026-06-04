/* Attention cette classe bien que synaxiquement
* correcte aurait pu être mieux conçue.
* Elle représente des points du plan */

#include<cstdio>
#include<cstdlib>
class Point2D
{
double* xy=nullptr;
// les deux coordonnées sont
// mémorisées dans un tableau
// de 2 <double>
public :
	Point2D(double x,double y)
	{
		xy=(double*)malloc(sizeof(double)*2);
		if(xy==nullptr) { exit(1); }
		xy[0]=x;
		xy[1]=y;
	}
	double getX(){return *xy;}
	double getY(){return *(xy+1);}
	Point2D(const Point2D& p){
		xy=(double*)malloc(sizeof(double)*2);
		if(xy==nullptr) { exit(1); }
		xy[0]=p.xy[0];
		xy[1]=p.xy[1];
	}
	~Point2D() { free(xy); }
	const Point2D& operator = (const Point2D& p)
	{
		xy[0]=p.xy[0];
		xy[1]=p.xy[1];
		return *this;
	}
	void rotate(void){ // fait tourner le point d’un quart
		// de tour autour du point (0,0)
		double t=xy[0];
		xy[0]=-xy[1];
		xy[1]=t;
	}
	void affiche(void) {
		printf("(%5f,%5f)\n",xy[0],xy[1]);
	}
};

int main()
{
	Point2D a{4,2};
	a.rotate();
	a.affiche(); // doit afficher le point -2,4
}