#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, trend_write)
{
        EXPECT_EQ(write_to_db(TREND_DB,DB_TREND_IHM_AVG_VM,1),1);
}
