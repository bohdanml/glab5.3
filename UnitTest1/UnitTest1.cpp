#include "pch.h"
#include "CppUnitTest.h"
#include"..\\glab5.3\lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = s(0.1);
			Assert::AreEqual(t, 1.03401, 0.1);
		}
	};
}
