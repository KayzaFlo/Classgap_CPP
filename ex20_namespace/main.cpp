// ============================================================================
// EXEMPLES PRATIQUES DE NAMESPACES EN C++
// Compile avec : g++ -std=c++17 namespace_examples.cpp -o namespace_examples
// ============================================================================
 
#include "Library.hpp"
#include "Graphics.hpp"
#include "Company.hpp"
#include "MyGame.hpp"
#include "Utils.hpp"

// ============================================================================
// MAIN : Tous les exemples
// ============================================================================

int main() {
	std::cout << "========== NAMESPACE EXAMPLES ==========" << std::endl << std::endl;
	
	// --- EXEMPLE 1 : Namespace basique ---
	std::cout << "--- EXEMPLE 1 : Namespace basique ---" << std::endl;
	Library::greet();
	Library::Book book("The C++ Primer");
	book.display();
	std::cout << std::endl;
	
	// --- EXEMPLE 2 : Résoudre les conflits de noms ---
	std::cout << "--- EXEMPLE 2 : Conflits de noms résolus ---" << std::endl;
	Graphics::Shape graphic_shape;
	Games::Shape game_shape;
	graphic_shape.draw();
	game_shape.draw();
	std::cout << std::endl;
	
	// --- EXEMPLE 3 : Accès avec :: ---
	std::cout << "--- EXEMPLE 3 : Namespaces imbriqués ---" << std::endl;
	Company::Department::Team::work();
	Company::Department::Team::Employee emp("Alice");
	emp.introduce();
	std::cout << std::endl;
	
	// --- EXEMPLE 4 : C++17 nested namespaces ---
	std::cout << "--- EXEMPLE 4 : C++17 namespaces imbriqués ---" << std::endl;
	MyGame::Graphics::Rendering::Renderer renderer;
	renderer.render();
	std::cout << std::endl;
	
	// --- EXEMPLE 5a : Using declaration ---
	std::cout << "--- EXEMPLE 5a : Using declaration ---" << std::endl;
	{
		using Company::Department::Team::Employee;
		Employee emp2("Bob");
		emp2.introduce();
	}
	std::cout << std::endl;
	
	// --- EXEMPLE 5b : Using namespace ---
	std::cout << "--- EXEMPLE 5b : Using namespace ---" << std::endl;
	{
		using namespace Company::Department::Team;
		Employee emp3("Charlie");
		emp3.introduce();
		work();
	}
	std::cout << std::endl;
	
	// --- EXEMPLE 6 : Template functions dans un namespace ---
	std::cout << "--- EXEMPLE 6 : Template functions ---" << std::endl;
	{
		int a = 5, b = 10;
		std::cout << "Before swap: a=" << a << ", b=" << b << std::endl;
		Utils::swap(a, b);
		std::cout << "After swap: a=" << a << ", b=" << b << std::endl;
		std::cout << "Max: " << Utils::max(a, b) << std::endl;
		std::cout << "Min: " << Utils::min(a, b) << std::endl;
	}
	std::cout << std::endl;
	
	// --- EXEMPLE 7 : Alias de namespace ---
	std::cout << "--- EXEMPLE 7 : Alias de namespace ---" << std::endl;
	{
		namespace grend = MyGame::Graphics::Rendering;
		grend::Renderer r;
		r.render();
	}
	std::cout << std::endl;
	
	// --- EXEMPLE 8 : Utilisation avec la STL ---
	std::cout << "--- EXEMPLE 8 : Préfixe explicite vs using ---" << std::endl;
	{
		// Avec préfixe (plus explicite)
		std::string str1 = "Hello";
		std::cout << "Avec préfixe: " << str1 << std::endl;
		
		// Avec using declaration (moins verbeux)
		using std::string;
		string str2 = "World";
		std::cout << "Avec using: " << str2 << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "========== FIN DES EXEMPLES ==========" << std::endl;
	
	return 0;
}
