#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTes3
{
	TEST_CLASS(UnitTes3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			int b[22] = { 3, 5, 7};
			t = Sum(b, 3);
			Assert::AreEqual(t, 15);

		}
	};
}
