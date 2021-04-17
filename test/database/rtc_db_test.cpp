#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, rtc_write_testing)
{
       	EXPECT_EQ(write_to_db(RTC_DB,DB_RTC_MINUTE_U16,1),1);
}
