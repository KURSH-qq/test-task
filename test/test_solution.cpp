#include <gtest.h>
#include <solution.h>

TEST(TEST_SOLUTION, test_1) {
	int n = 8;
	int stress[] = { 2,1,11,11,10,9,11,11 };
	int day[] = { 1,3,4,4,3,3,4,4 };
	EXPECT_EQ(solve_task(n, day, stress), 22);
}

TEST(TEST_SOLUTION, test_2) {
	int n = 10;
	int day[] = {1,2,2,1,3,3,1,5,5,3};
	int stress[] = {10,4,5,9,4,8,6,4,3,1};
	EXPECT_EQ(solve_task(n, day, stress), 24);

}

TEST(TEST_SOLUTION, test_3) {

	int n = 8;
	int stress[] = { 2,1,11,11,11,9,10,11 };
	int day[] = { 1,3,5,5,3,3,5,5 };
	EXPECT_EQ(solve_task(n, day, stress), 12);
}


TEST(TEST_SOLUTION, test_4) {

	int n = 5;
	int stress[] = { 3,4,1,1,4};
	int day[] = { 1,2,3,4,2 };
	EXPECT_EQ(solve_task(n, day, stress), 3);
}

TEST(TEST_SOLUTION, test_5) {

	int n = 6;
	int stress[] = { 3,4,1,1,4,4};
	int day[] = { 1,2,3,4,2,1};
	EXPECT_EQ(solve_task(n, day, stress), 7);
}

TEST(TEST_SOLUTION, test_6) {

	int n = 13;
	int stress[] = { 11,7,8,10,9,11,6,3,8,7,4,1,1};
	int day[] = { 2,3,3,1,1,2,1,6,7,7,6,7,3};
	EXPECT_EQ(solve_task(n, day, stress), 34);
}

TEST(TEST_SOLUTION, test_7) {

	int n = 14;
	int stress[] = { 11,7,8,10,9,11,6,3,8,7,4,1,1,8};
	int day[] = { 2,3,3,1,1,2,1,6,7,7,6,7,3,12 };
	EXPECT_EQ(solve_task(n, day, stress), 34);
}

TEST(TEST_SOLUTION, test_8) {

	int n = 2;
	int stress[] = { 2,1 };
	int day[] = { 1,2 };
	EXPECT_EQ(solve_task(n, day, stress), 0);
}

TEST(TEST_SOLUTION, test_9) {
	int n = 14;
	int stress[] = { 10,11,9,9,3,4,5,12,1,1,1,1,1,1};
	int day[] = { 1,2,2,4,4,4,4,7,7,7,7,7,7,7};
	EXPECT_EQ(solve_task(n, day, stress), 20);
}

