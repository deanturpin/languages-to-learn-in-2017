#include <iostream>
#include <chrono>

namespace tst
{
	using namespace std;

	void literals()
	{
		cout << "\nLiterals" << endl;
		cout << R"((?:[0-9]{1,3}\.?){4}\s+\S+)" << endl;

		cout << 1'000'000'000 << endl;
		cout << hex << 0x0000'1111'2222'3333 << dec << endl;
		cout << hex << 0b0000'1111'0000'1111 << dec << endl;

		// Time related
		auto time1 = 90s;
		auto time2 = 1min;
		auto time3 = time1 + time2;

		cout << "Total time " << time3.count() << endl;
	}
}
