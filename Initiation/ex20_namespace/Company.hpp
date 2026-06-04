#include <iostream>
#include <string>
 
// ============================================================================
// EXEMPLE 3 : Namespaces imbriqués
// ============================================================================
 
namespace Company {
    namespace Department {
        namespace Team {
            void work() {
                std::cout << "Team is working on a project" << std::endl;
            }
            
            class Employee {
            public:
                Employee(const std::string& name) : name_(name) {}
                void introduce() {
                    std::cout << "Hi, I'm " << name_ << " from Company::Department::Team" << std::endl;
                }
            private:
                std::string name_;
            };
        }
    }
}