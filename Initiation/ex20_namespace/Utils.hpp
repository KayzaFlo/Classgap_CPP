#include <iostream>
#include <string>

// ============================================================================
// EXEMPLE 5 : Fonctions template dans un namespace
// ============================================================================
 
namespace Utils {
    template<typename T>
    void swap(T& a, T& b) {
        T tmp = a;
        a = b;
        b = tmp;
    }
    
    template<typename T>
    T max(T a, T b) {
        return (a > b) ? a : b;
    }
    
    template<typename T>
    T min(T a, T b) {
        return (a < b) ? a : b;
    }
}
