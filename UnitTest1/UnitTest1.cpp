#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int m;
			int t = 0; int s = 0;
			m = pow(h(t * t, 1), 3) + h(1, t * s * s) / 1 + pow(h(s, t), 2);
			Assert::AreEqual(m, 1);
		}
	};
}
