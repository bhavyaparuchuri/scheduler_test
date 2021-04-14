#ifndef RTC_DB_H_ 
#define RTC_DB_H_


/*DB_RTC*/
    #define tADJUST_RTC_REQ								{0,2,1,0}
    #define tADJUST_RTC_SECOND 							{0,59,1,0}
    #define tADJUST_RTC_MINUTE 							{0,59,1,0}
    #define tADJUST_RTC_HOUR 							{0,23,1,0}
    #define tADJUST_RTC_DAY 							{1,31,1,1}
    #define tADJUST_RTC_MONTH 							{1,12,1,1}
    #define tADJUST_RTC_YEAR 							{4,99,1,6}

typedef enum {
	DB_RTC_SECOND_U16=0,
	DB_RTC_MINUTE_U16,
	DB_RTC_HOUR_U16,
	DB_RTC_DAY_U16,
	DB_RTC_MONTH_U16,
	DB_RTC_YEAR_U16,
	ADJUST_RTC_REQ_U16,
	ADJUST_RTC_SECOND_U16,
	ADJUST_RTC_MINUTE_U16,
	ADJUST_RTC_HOUR_U16,
	ADJUST_RTC_DAY_U16,
	ADJUST_RTC_MONTH_U16,
	ADJUST_RTC_YEAR_U16,
	end_of_db_rtc_table
} e_DB_RTC;


#endif
