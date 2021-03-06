#ifndef TB_CONFIG_H
#define TB_CONFIG_H

// build version
#define TB_CONFIG_VERSION_BUILD 		201404271907

// debug
#define TB_CONFIG_DEBUG					(1)

// small
#define TB_CONFIG_SMALL					(1)

// os
#define TB_CONFIG_OS_WINDOWS

// assembler
#if defined(_MSC_VER)
# 	define TB_CONFIG_ASSEMBLER_MASM
#elif defined(__GNUC__)
# 	define TB_CONFIG_ASSEMBLER_GAS
#endif

// type
#define TB_CONFIG_TYPE_FLOAT

// memory
//#define TB_CONFIG_MEMORY_UNALIGNED_ACCESS_ENABLE

// exception
#define TB_CONFIG_EXCEPTION_ENABLE

// semaphore
//#define TB_CONFIG_SEMAPHORE_HAVE_POSIX
//#define TB_CONFIG_SEMAPHORE_HAVE_SYSTEMV

// asio
#define TB_CONFIG_ASIO_HAVE_SELECT
//#define TB_CONFIG_ASIO_HAVE_EPOLL
//#define TB_CONFIG_ASIO_HAVE_POLL
//#define TB_CONFIG_ASIO_HAVE_PORT
//#define TB_CONFIG_ASIO_HAVE_KQUEUE

// libc
#define TB_CONFIG_LIBC_HAVE_MEMCPY
#define TB_CONFIG_LIBC_HAVE_MEMSET
#define TB_CONFIG_LIBC_HAVE_MEMMOV
#define TB_CONFIG_LIBC_HAVE_MEMCMP
#define TB_CONFIG_LIBC_HAVE_STRCAT
#define TB_CONFIG_LIBC_HAVE_STRNCAT
#define TB_CONFIG_LIBC_HAVE_STRCPY
#define TB_CONFIG_LIBC_HAVE_STRNCPY
//#define TB_CONFIG_LIBC_HAVE_STRLCPY
#define TB_CONFIG_LIBC_HAVE_STRLEN 
//#define TB_CONFIG_LIBC_HAVE_STRNLEN
#define TB_CONFIG_LIBC_HAVE_STRSTR
//#define TB_CONFIG_LIBC_HAVE_STRISTR
#define TB_CONFIG_LIBC_HAVE_STRCMP
//#define TB_CONFIG_LIBC_HAVE_STRICMP
//#define TB_CONFIG_LIBC_HAVE_STRNCMP
//#define TB_CONFIG_LIBC_HAVE_STRNICMP
#define TB_CONFIG_LIBC_HAVE_WCSCAT
#define TB_CONFIG_LIBC_HAVE_WCSNCAT
#define TB_CONFIG_LIBC_HAVE_WCSCPY
#define TB_CONFIG_LIBC_HAVE_WCSNCPY
//#define TB_CONFIG_LIBC_HAVE_WCSLCPY
#define TB_CONFIG_LIBC_HAVE_WCSLEN 
//#define TB_CONFIG_LIBC_HAVE_WCSNLEN
#define TB_CONFIG_LIBC_HAVE_WCSSTR
//#define TB_CONFIG_LIBC_HAVE_WCSISTR
#define TB_CONFIG_LIBC_HAVE_WCSCMP
//#define TB_CONFIG_LIBC_HAVE_WCSICMP
//#define TB_CONFIG_LIBC_HAVE_WCSNCMP
//#define TB_CONFIG_LIBC_HAVE_WCSNICMP
//#define TB_CONFIG_LIBC_HAVE_WCSTOMBS
//#define TB_CONFIG_LIBC_HAVE_MBSTOWCS
#define TB_CONFIG_LIBC_HAVE_GMTIME
#define TB_CONFIG_LIBC_HAVE_MKTIME
#define TB_CONFIG_LIBC_HAVE_LOCALTIME
#if !defined(_MSC_VER)
# 	define TB_CONFIG_LIBC_HAVE_SETJMP
#endif

// libm
#define TB_CONFIG_LIBM_HAVE_SINCOS
//#define TB_CONFIG_LIBM_HAVE_SINCOSF
#define TB_CONFIG_LIBM_HAVE_LOG2
//#define TB_CONFIG_LIBM_HAVE_LOG2F

// zlib
//#define TB_CONFIG_HAVE_ZLIB					

// openssl
//#define TB_CONFIG_HAVE_OPENSSL	

// polarssl
//#define TB_CONFIG_HAVE_POLARSSL	

#endif
