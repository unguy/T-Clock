/* Note: to use integer defines as strings, use for example STR(VER_REVISION) */
#pragma once
#ifndef AUTOVERSION_H
#define AUTOVERSION_H
#	define XSTR(x) #x
#	define STR(x) XSTR(x)
/** Version **/
#	define VER_MAJOR 2
#	define VER_MINOR 2
#	define VER_BUILD 0
#	define VER_STATUS 1
#	define VER_STATUS_FULL "Beta"
#	define VER_STATUS_SHORT "b"
#	define VER_STATUS_GREEK "β"
#	define VER_REVISION 75
#	define VER_FULL "2.2.0 Beta"
#	define VER_SHORT "2.2b0"
#	define VER_SHORT_DOTS "2.2.0"
#	define VER_SHORT_GREEK "2.2β0"
#	define VER_RC_REVISION 2, 2, 0, 75
#	define VER_RC_STATUS 2, 2, 1, 0
/** Subversion Information **/
#	define VER_REVISION_URL "git@github.com:White-Tiger/T-Clock.git"
#	define VER_REVISION_DATE "2014-09-09 14:16:43 +0000 (Tue, Sep 09 2014)"
#	define VER_REVISION_HASH "ab8a21b"
/** Date/Time **/
#	define VER_TIMESTAMP 1410276761
#	define VER_TIME_SEC 41
#	define VER_TIME_MIN 32
#	define VER_TIME_HOUR 15
#	define VER_TIME_DAY 9
#	define VER_TIME_MONTH 9
#	define VER_TIME_YEAR 2014
#	define VER_TIME_WDAY 2
#	define VER_TIME_YDAY 251
#	define VER_TIME_WDAY_SHORT "Tue"
#	define VER_TIME_WDAY_FULL "Tuesday"
#	define VER_TIME_MONTH_SHORT "Sep"
#	define VER_TIME_MONTH_FULL "September"
#	define VER_TIME "15:32:41"
#	define VER_DATE "2014-09-09"
#	define VER_DATE_LONG "Tue, Sep 09, 2014 15:32:41 UTC"
#	define VER_DATE_SHORT "2014-09-09 15:32:41 UTC"
#	define VER_DATE_ISO "2014-09-09T15:32:41Z"
#endif