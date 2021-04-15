#include "gtest/gtest.h"
#include <stdexcept>
#include <stdio.h>
extern "C" {
#include "../../app/inc/database/write_to_db.h"
#include "../../app/inc/database/read_from_db.h"
#include "../../app/inc/database/control_db.h"
}

TEST(DB_UTILITY_TEST_2, control_write)
{
	EXPECT_EQ(write_to_db(CONTROL_DB,VENTIL_AUTHORIZATION_U16,1),1);
}

TEST(DB_UTILITY_TEST_2, control_read)
{
	printf("control_db[END_OF_OPERATION_U16] is: %d \n",control_db[END_OF_OPERATION_U16]);
	EXPECT_EQ(read_from_db(CONTROL_DB,VENTIL_AUTHORIZATION_U16),1);
}

