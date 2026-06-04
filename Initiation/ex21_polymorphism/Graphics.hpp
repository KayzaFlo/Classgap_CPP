
#include <iostream>
#include <string>
 
// ============================================================================
// EXEMPLE 2 : Conflits de noms (pourquoi les namespaces sont utiles)
// ============================================================================
 
namespace Graphics {
    class Shape {
    public:
        void draw() { std::cout << "Drawing a graphics shape" << std::endl; }
    };
}
 
namespace Games {
    class Shape {
    public:
        void draw() { std::cout << "Drawing a game shape" << std::endl; }
    };
}