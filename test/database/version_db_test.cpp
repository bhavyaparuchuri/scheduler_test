#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, version_write)
{
	 EXPECT_EQ(write_to_db(VERSION_DB,VERSION_NUMBER_2,1),1);
}
