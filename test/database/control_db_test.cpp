#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
#include "../../app/inc/database/read_from_db.h"
#include "../../app/inc/database/control_db.h"
}

TEST(DB_UTILITY_TESTS, writefunctiontesting)
{
	  EXPECT_EQ(write_to_db(CONTROL_DB,END_OF_OPERATION_U16,1),1);
}

TEST(DB_UTILITY_TESTS, readfunctiontesting)
{
	  EXPECT_EQ(read_from_db(CONTROL_DB,END_OF_OPERATION_U16),1);
}
