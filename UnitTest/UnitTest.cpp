#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_9.1/dod.cpp"
#include "../Lab_9.1/sum.cpp"
#include "../Lab_9.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1.0; 
			R = 2.0; 

			double expected_a = a * R; 

			dod();

			Assert::AreEqual(expected_a, a, 0.001, L"Correct dod() of not?");
		}
	};
}
