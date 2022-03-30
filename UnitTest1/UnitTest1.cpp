#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.6/Real.h"
#include "../lab1.6/Real.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Real r1, r2, r;
			Real::Number n1, n2;
			n1.Init(2);
			n2.Init(3);

			r1.Init(n1);
			r2.Init(n2);

			std::string str = "8.000000";
			Assert::AreEqual(r.powReal(r1, r2).toString(), str);
		}
	};
}
