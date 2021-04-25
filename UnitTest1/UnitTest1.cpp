#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1A/Triangle.h"
#include "../5.1A/Source.cpp"
#include "../5.1A/Triangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triangle a(3, 4);
			Assert::AreEqual(a.Cost(), 5);
		}
	};
}
