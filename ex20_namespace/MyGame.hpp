#include <iostream>
#include <string>

// ============================================================================
// EXEMPLE 4 : Namespace imbriqué (C++17 style)
// ============================================================================
 
namespace MyGame::Graphics::Rendering {
    class Renderer {
    public:
        void render() {
            std::cout << "Rendering with MyGame::Graphics::Rendering::Renderer" << std::endl;
        }
    };
}