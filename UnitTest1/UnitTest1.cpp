#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1(it)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int test[size] = {-12, 1, 4, 6, 0};
			int S = Sum(test, size);
			Assert::AreEqual(S, -11);
		}
	};
}
