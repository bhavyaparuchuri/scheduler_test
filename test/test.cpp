#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, writefunctiontesting)
{
	  EXPECT_EQ(write_to_db(CONTROL_DB,END_OF_OPERATION_U16,1),1);	  
}
