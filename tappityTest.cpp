/**
 * Unit Test suite
**/

#include <gtest/gtest.h>
#include "tappity.h"
 
class tappityTest : public ::testing::Test
{
	protected:
		tappityTest(){} 
		virtual ~tappityTest(){} 
		virtual void SetUp(){}
		virtual void TearDown(){}
};

//tests if constructor works
TEST(tappityTest, constructor)
{
	tappity test("test");
	//lets make sure tappity not null
	ASSERT_NE(&test, nullptr);
}

//tests if entry works and same size
TEST(tappityTest, entry_same_size)
{
	tappity test("test");
	test.entry("test");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.length_difference(), 0);
}

//tests if entry works and different size
TEST(tappityTest, entry_diff_size)
{
	tappity test("test");
	test.entry("test2");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.length_difference(), 1);
}

//tests size with empty string
TEST(tappityTest, entry_empty)
{
	tappity test("");
	test.entry("");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.length_difference(), 0);
}

//test initialize with one empty string
TEST(tappityTest, entry_one_empty)
{
	tappity test("test");
	test.entry("");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.length_difference(), 4);
}

//test initialize with one empty string
TEST(tappityTest, entry_one_empty2)
{
	tappity test("");
	test.entry("test");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.length_difference(), 4);
}
//other empty string
TEST(tappityTest, entry_one_empty3)
{
	tappity test("test");
	test.entry("");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.length_difference(), 4);
}

//test to make sure entry = reference
TEST(tappityTest, entry_same)
{
	tappity test("test");
	test.entry("test");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 100);
}

//equal size, but different
TEST(tappityTest, entry_diff)
{
	tappity test("test");
	test.entry("tes2");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 75);
}

//equal size, but different more
TEST(tappityTest, entry_diff_more)
{
	tappity test("test");
	test.entry("t2tt");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 50);
}

//equal size, but different more
TEST(tappityTest, entry_diff_more2)
{
	tappity test("test");
	test.entry("1111");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 0);
}

//tests a 10 size vs 5 size
TEST(tappityTest, entry_diff_size2)
{
	tappity test("testtest");
	test.entry("test");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 50);
}

//tests 0 size vs 5 size
TEST(tappityTest, entry_diff_size3)
{
	tappity test("");
	test.entry("test");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 0);
}

//tests 9 vs 10 size
TEST(tappityTest, entry_diff_size4)
{
	tappity test("testtestt");
	test.entry("testtesttt");
	//make sure inpuut is the same size as reference
	ASSERT_EQ(test.accuracy(), 90);
}

//accuracy two empty strings
TEST (tappityTest, accuracy_empty)
{
	tappity test("");
	test.entry("");
	ASSERT_EQ(test.accuracy(), 100);
}
