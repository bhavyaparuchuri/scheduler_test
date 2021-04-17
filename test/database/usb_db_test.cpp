#include "gtest/gtest.h"
#include <stdexcept>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
}

TEST(DB_UTILITY_TESTS, usb_write)
{
        EXPECT_EQ(write_to_db(USB_DB,USB_CONTINUOUS_RECORDING_U16,1),1);
}
