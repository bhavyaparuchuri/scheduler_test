#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS_1, config_write)
{
	  EXPECT_EQ(write_to_db(CONFIG_DB,PREVIOUS_MODE_U16,1),1);
	  	  
}
