#include <iostream>
#include <string>
 
// ============================================================================
// EXEMPLE 1 : Namespace basique
// ============================================================================
 
namespace Library {
    void greet() {
        std::cout << "Hello from Library!" << std::endl;
    }
    
    class Book {
    public:
        Book(const std::string& title) : title_(title) {}
        
        void display() {
            std::cout << "Book: " << title_ << std::endl;
        }
    
    private:
        std::string title_;
    };
}
