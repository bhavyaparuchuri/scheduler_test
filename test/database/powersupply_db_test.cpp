#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, powersupply_write_testing)
{
	  EXPECT_EQ(write_to_db(POWERSUPPLY_DB,POWER_TYPE_U16,1),1);
}
