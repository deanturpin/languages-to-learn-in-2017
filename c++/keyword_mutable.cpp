#include <iostream>

namespace tst
{
	void keyword_mutable()
	{
		using namespace std;

		struct A
		{
			// Variable is increment despite being a const method
			void const_member_function() const { ++m; }
			mutable int m;
		};

		A a;
		a.const_member_function(); 
	}
}
