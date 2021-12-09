#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1 iter/Lab8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			using namespace std;
			char lit_r[4] = "aa";
			bool l = false;
			l = Find(lit_r);
			Assert::AreEqual(l, true);
		}
	};
}
