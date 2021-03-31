#include "gtest/gtest.h"
#include <stdexcept>
#include "../inc/DB/DB_Control.h"
#include "../inc/main.h"

TEST(DB_control,value)
{
	  EXPECT_EQ(1,DB_ControlRead(MAINTENANCE_MODE_U16));
	  EXPECT_EQ(1,DB_ControlRead(CIRCUIT_CHECK_MODE_U16));
}
