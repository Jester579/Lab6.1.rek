#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = ((2 > 0 && 2 % 2 == 0));
			if (c == true)
				c = 1;
			else
				c = 0;

			Assert::AreEqual(c, 1, 0.1);
		}
	};
}
