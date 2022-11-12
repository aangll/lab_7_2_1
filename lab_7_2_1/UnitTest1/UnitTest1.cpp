#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_2_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 4; 
			int n = 4;
			int** y = new int* [k];
			for (int i = 0; i < k; i++)
				y[i] = new int[n];
			int t;
			t = iMax(y, k, n, 3);
			Assert::AreEqual(t, 0);
		}
	};
}
