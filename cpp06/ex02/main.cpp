#include "Base.hpp"
#include "Generator.hpp"

int main(void) {
	Base *base = Generator::generate();
	Generator::identify(base);
	Generator::identify(*base);
	delete (base);
}