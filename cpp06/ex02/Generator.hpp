#pragma once
#include "Base.hpp"

class Generator {
	public:
		static Base *	generate(void);
		static void		identify(Base *p);
		static void		identify(Base &p);
};