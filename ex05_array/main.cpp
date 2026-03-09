# include <iostream>
# include <cassert>

class Tableau
{
private:
	int *arr;
	

public :
	Tableau( void );									// Canonical		Constructor Default
	Tableau( int size );
	// Tableau( Tableau const & src );					// Canonical		Contructor Copy
	~Tableau( void );									// Canonical		Destructor

	// Tableau &		operator=( Tableau const & rhs );	// Canonical		Surcharge operator =

	int				taille( void );
};


Tableau::Tableau( void ) {
	std::cout << "Default constructor called\n";
}

Tableau::Tableau( int size ) : arr() {
	std::cout << "Custom Size constructor called\n";
	arr = (int*)malloc(size * sizeof(int));
}

// Tableau::Tableau( Tableau const & src ) {
// 	std::cout << "Copy constructor called\n";
// 	*this = src;
// }

Tableau::~Tableau( void ) {
	std::cout << "Destructor called\n";
}

// Tableau &	Tableau::operator=( Tableau const & rhs ) {
// 	std::cout << "Copy assignement operator called\n";
// 	return *this;
// }

int Tableau::taille() {
	std::cout << "taille function called\n";
	return 0;
}


int main()
{
	Tableau tab1{20}; // créer un tableau de taille 20
	// initialise chaque case avec la valeur 0
	// tab1.taille()==20;
	// assert(tab1.taille()==20); // renvoie la longueur du tableau

	// tab1=tab1; // rien ne doit se passer dans ce cas
	// for(int i=0;i<20;i++){
	// assert(tab1.getCase(i)==0);}
	// // tab1.setCase(20,4); Erreur à l’execution, message<il n’y a pas de case 20>
	// // tab1.getCase(-1); Erreur à l’execution, message<il n’y a pas de case -1>
	// tab1.setCase(4,2); // place 2 dans la cinquième case du tableau
	// assert(tab1.getCase(4)==2);
	// Tableau tab2{tab1}; // créer un nouveau tableau tab2, copie de tab1
	// assert(tab2.getCase(4)==tab1.getCase(4));
	// assert(tab2.getCase(4)==2);
	// tab2.setCase(0,1);
	// assert(tab2.getCase(0)!=tab1.getCase(0))
	// assert(f(tab2)==3);// <int f(Tableau);> renvoie la somme des éléments du tableau
	// tab2.setCase(3,1);
	// assert(f(tab2)==4);
	// Tableau tab3{6};
	// tab3.setCase(0,3);
	// tab2=tab3;
	// assert(tab2.getCase(0)==tab3.getCase(0))
	// tab3.setCase(0,2);
	// assert(tab2.getCase(0)!=tab3.getCase(0))
	// tab1.affiche(); // affiche le contenu du tableau sur la sortie
}
