#include "pch.h"
#include "gtest/gtest.h"
#include "../Console/InvertMod.h"

TEST(testConsole, t1)
{
	InvertMod invert_mod;
	EXPECT_EQ(1, invert_mod.InvMod(1, 2));
	EXPECT_EQ(540840, invert_mod.InvMod(17931, 1717337));
}


