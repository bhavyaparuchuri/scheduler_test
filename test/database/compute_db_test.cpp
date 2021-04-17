#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, compute_write_testing)
{
	EXPECT_EQ(write_to_db(COMPUTE_DB,BLOWER_COMMAND_U16,1),1);
}
