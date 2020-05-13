// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
# 1 "/home/sujoy/Documents/VLSI_project/project21/aes.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/sujoy/Documents/VLSI_project/project21/aes.c" 2
# 38 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 33 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 402 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 403 "/usr/include/features.h" 2 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 68 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 81 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 97 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 111 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 34 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 39 "/home/sujoy/Documents/VLSI_project/project21/aes.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 31 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 34 "/usr/include/string.h" 2 3 4








extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 153 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 272 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 384 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 409 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 427 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));




# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/tools/Xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4
# 34 "/usr/include/strings.h" 3 4
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
# 432 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 40 "/home/sujoy/Documents/VLSI_project/project21/aes.c" 2
# 1 "/home/sujoy/Documents/VLSI_project/project21/aes.h" 1
# 43 "/home/sujoy/Documents/VLSI_project/project21/aes.h"
struct AES_ctx
{
  uint8_t RoundKey[176 ];

  uint8_t Iv[16];

};

void AES_init_ctx(struct AES_ctx* ctx, const uint8_t* key);

void AES_init_ctx_iv(struct AES_ctx* ctx, const uint8_t* key, const uint8_t* iv);
void AES_ctx_set_iv(struct AES_ctx* ctx, const uint8_t* iv);






void AES_ECB_encrypt(struct AES_ctx* ctx, uint8_t* buf);
void AES_ECB_decrypt(struct AES_ctx* ctx, uint8_t* buf);
# 72 "/home/sujoy/Documents/VLSI_project/project21/aes.h"
void AES_CBC_encrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
void AES_CBC_decrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
# 85 "/home/sujoy/Documents/VLSI_project/project21/aes.h"
void AES_CTR_xcrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
# 41 "/home/sujoy/Documents/VLSI_project/project21/aes.c" 2
# 73 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
typedef uint8_t state_t[4][4];






static const uint8_t sbox[256] = {

 0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
 0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
 0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
 0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
 0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
 0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
 0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
 0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
 0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
 0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
 0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
 0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
 0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
 0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
 0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
 0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16 };

static const uint8_t rsbox[256] = {
 0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,
 0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,
 0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
 0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,
 0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,
 0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
 0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,
 0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,
 0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,
 0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,
 0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,
 0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
 0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,
 0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,
 0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
 0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d };



static const uint8_t Rcon[11] = {
 0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36 };
# 152 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
void KeyExpansion(uint8_t RoundKey[240], const uint8_t Key[16])
{
 unsigned i, s, j, k, cnt = 4<<2, cnt2 = (4*10 + 4)<<2 ;
 uint8_t tempa[4];

#pragma HLS ARRAY_PARTITION variable=sbox cyclic factor=16 dim=1
#pragma HLS ARRAY_PARTITION variable=rsbox cyclic factor=16 dim=1
#pragma HLS ARRAY_PARTITION variable=Key cyclic factor=16 dim=1
#pragma HLS ARRAY_PARTITION variable=RoundKey cyclic factor=16 dim=1
#pragma HLS ARRAY_PARTITION variable=tempa complete dim=1

 for (j=0;j<16;j++){
#pragma HLS pipeline
#pragma HLS unroll factor=16
 RoundKey[j] = Key[j];
 }


 for (s = cnt; s < cnt2; s+=4)
 {
#pragma HLS pipeline
#pragma HLS unroll factor=4
#pragma HLS dependence variable=RoundKey inter true
 tempa[0] = RoundKey[s-4];
  tempa[1] = RoundKey[s-3];
  tempa[2] = RoundKey[s-2];
  tempa[3] = RoundKey[s-1];

  if (s % cnt == 0)
  {




   const uint8_t u8tmp0 = tempa[0], u8tmp1 = tempa[1], u8tmp2 = tempa[2], u8tmp3 = tempa[3];
   tempa[0] = u8tmp1;
   tempa[1] = u8tmp2;
   tempa[2] = u8tmp3;
   tempa[3] = u8tmp0;





   tempa[0] = (sbox[(tempa[0])]) ^ Rcon[s / cnt];
   tempa[1] = (sbox[(tempa[1])]);
   tempa[2] = (sbox[(tempa[2])]);
   tempa[3] = (sbox[(tempa[3])]);


  }
# 213 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
  RoundKey[s] = RoundKey[s-16] ^ tempa[0];
  RoundKey[s + 1] = RoundKey[s-15] ^ tempa[1];
  RoundKey[s + 2] = RoundKey[s-14] ^ tempa[2];
  RoundKey[s + 3] = RoundKey[s-13] ^ tempa[3];
 }
}

void AES_init_ctx(struct AES_ctx* ctx, const uint8_t* key)
{
 KeyExpansion(ctx->RoundKey, key);
}

void AES_init_ctx_iv(struct AES_ctx* ctx, const uint8_t* key, const uint8_t* iv)
{
 KeyExpansion(ctx->RoundKey, key);
 memcpy (ctx->Iv, iv, 16);
}
void AES_ctx_set_iv(struct AES_ctx* ctx, const uint8_t* iv)
{
 memcpy (ctx->Iv, iv, 16);
}




static void AddRoundKey(uint8_t round,state_t* state,uint8_t* RoundKey)
{
#pragma HLS INLINE
#pragma HLS ARRAY_PARTITION variable=state complete dim=0
#pragma HLS ARRAY_PARTITION variable=RoundKey cyclic factor=16 dim=1
 uint8_t i,j;
 const uint8_t c = 4*4*round;

 AddRoundKey_label38:for (i = 0; i < 4; ++i)
 {
#pragma HLS unroll
 AddRoundKey_label37:for (j = 0; j < 4; ++j)
  {
#pragma HLS unroll
 (*state)[i][j] ^= RoundKey[c + (i * 4) + j];
  }
 }
}



static void SubBytes(state_t* state)
{
#pragma HLS INLINE
#pragma HLS ARRAY_PARTITION variable=state complete dim=0
 uint8_t i, j;
 SubBytes_label35:for (i = 0; i < 4; ++i)
 {
#pragma HLS unroll
 SubBytes_label34:for (j = 0; j < 4; ++j)
  {
#pragma HLS unroll
 (*state)[j][i] = (sbox[((*state)[j][i])]);
  }
 }
}




static void ShiftRows(state_t* state)
{
#pragma HLS INLINE
 uint8_t temp;


 temp = (*state)[0][1];
 (*state)[0][1] = (*state)[1][1];
 (*state)[1][1] = (*state)[2][1];
 (*state)[2][1] = (*state)[3][1];
 (*state)[3][1] = temp;


 temp = (*state)[0][2];
 (*state)[0][2] = (*state)[2][2];
 (*state)[2][2] = temp;

 temp = (*state)[1][2];
 (*state)[1][2] = (*state)[3][2];
 (*state)[3][2] = temp;


 temp = (*state)[0][3];
 (*state)[0][3] = (*state)[3][3];
 (*state)[3][3] = (*state)[2][3];
 (*state)[2][3] = (*state)[1][3];
 (*state)[1][3] = temp;
}

static uint8_t xtime(uint8_t x)
{
 return ((x<<1) ^ (((x>>7) & 1) * 0x1b));
}


static void MixColumns(state_t* state)
{

 uint8_t i;
 uint8_t Tmp, Tm[4], t;

#pragma HLS ARRAY_PARTITION variable=Tm complete dim=1
 MixColumns_label36:for (i = 0; i < 4; ++i)
 {
#pragma HLS unroll
 Tm[0] = ((*state)[i][0] ^ (*state)[i][1]);
  Tm[1] = ((*state)[i][1] ^ (*state)[i][2]);
  Tm[2] = ((*state)[i][2] ^ (*state)[i][3]);
  Tm[3] = ((*state)[i][3] ^ (*state)[i][0]);
  Tmp = Tm[0] ^ Tm[2];

  (*state)[i][0] ^= xtime(Tm[0]) ^ Tmp ;
  (*state)[i][1] ^= xtime(Tm[1]) ^ Tmp ;
  (*state)[i][2] ^= xtime(Tm[2]) ^ Tmp ;
  (*state)[i][3] ^= xtime(Tm[3]) ^ Tmp ;
 }
}
# 363 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
static void InvMixColumns(state_t* state)
{
 int i;
 uint8_t a, b, c, d;
 for (i = 0; i < 4; ++i)
 {
  a = (*state)[i][0];
  b = (*state)[i][1];
  c = (*state)[i][2];
  d = (*state)[i][3];

  (*state)[i][0] = ( ((0x0e & 1) * a) ^ ((0x0e>>1 & 1) * xtime(a)) ^ ((0x0e>>2 & 1) * xtime(xtime(a))) ^ ((0x0e>>3 & 1) * xtime(xtime(xtime(a)))) ^ ((0x0e>>4 & 1) * xtime(xtime(xtime(xtime(a)))))) ^ ( ((0x0b & 1) * b) ^ ((0x0b>>1 & 1) * xtime(b)) ^ ((0x0b>>2 & 1) * xtime(xtime(b))) ^ ((0x0b>>3 & 1) * xtime(xtime(xtime(b)))) ^ ((0x0b>>4 & 1) * xtime(xtime(xtime(xtime(b)))))) ^ ( ((0x0d & 1) * c) ^ ((0x0d>>1 & 1) * xtime(c)) ^ ((0x0d>>2 & 1) * xtime(xtime(c))) ^ ((0x0d>>3 & 1) * xtime(xtime(xtime(c)))) ^ ((0x0d>>4 & 1) * xtime(xtime(xtime(xtime(c)))))) ^ ( ((0x09 & 1) * d) ^ ((0x09>>1 & 1) * xtime(d)) ^ ((0x09>>2 & 1) * xtime(xtime(d))) ^ ((0x09>>3 & 1) * xtime(xtime(xtime(d)))) ^ ((0x09>>4 & 1) * xtime(xtime(xtime(xtime(d))))));
  (*state)[i][1] = ( ((0x09 & 1) * a) ^ ((0x09>>1 & 1) * xtime(a)) ^ ((0x09>>2 & 1) * xtime(xtime(a))) ^ ((0x09>>3 & 1) * xtime(xtime(xtime(a)))) ^ ((0x09>>4 & 1) * xtime(xtime(xtime(xtime(a)))))) ^ ( ((0x0e & 1) * b) ^ ((0x0e>>1 & 1) * xtime(b)) ^ ((0x0e>>2 & 1) * xtime(xtime(b))) ^ ((0x0e>>3 & 1) * xtime(xtime(xtime(b)))) ^ ((0x0e>>4 & 1) * xtime(xtime(xtime(xtime(b)))))) ^ ( ((0x0b & 1) * c) ^ ((0x0b>>1 & 1) * xtime(c)) ^ ((0x0b>>2 & 1) * xtime(xtime(c))) ^ ((0x0b>>3 & 1) * xtime(xtime(xtime(c)))) ^ ((0x0b>>4 & 1) * xtime(xtime(xtime(xtime(c)))))) ^ ( ((0x0d & 1) * d) ^ ((0x0d>>1 & 1) * xtime(d)) ^ ((0x0d>>2 & 1) * xtime(xtime(d))) ^ ((0x0d>>3 & 1) * xtime(xtime(xtime(d)))) ^ ((0x0d>>4 & 1) * xtime(xtime(xtime(xtime(d))))));
  (*state)[i][2] = ( ((0x0d & 1) * a) ^ ((0x0d>>1 & 1) * xtime(a)) ^ ((0x0d>>2 & 1) * xtime(xtime(a))) ^ ((0x0d>>3 & 1) * xtime(xtime(xtime(a)))) ^ ((0x0d>>4 & 1) * xtime(xtime(xtime(xtime(a)))))) ^ ( ((0x09 & 1) * b) ^ ((0x09>>1 & 1) * xtime(b)) ^ ((0x09>>2 & 1) * xtime(xtime(b))) ^ ((0x09>>3 & 1) * xtime(xtime(xtime(b)))) ^ ((0x09>>4 & 1) * xtime(xtime(xtime(xtime(b)))))) ^ ( ((0x0e & 1) * c) ^ ((0x0e>>1 & 1) * xtime(c)) ^ ((0x0e>>2 & 1) * xtime(xtime(c))) ^ ((0x0e>>3 & 1) * xtime(xtime(xtime(c)))) ^ ((0x0e>>4 & 1) * xtime(xtime(xtime(xtime(c)))))) ^ ( ((0x0b & 1) * d) ^ ((0x0b>>1 & 1) * xtime(d)) ^ ((0x0b>>2 & 1) * xtime(xtime(d))) ^ ((0x0b>>3 & 1) * xtime(xtime(xtime(d)))) ^ ((0x0b>>4 & 1) * xtime(xtime(xtime(xtime(d))))));
  (*state)[i][3] = ( ((0x0b & 1) * a) ^ ((0x0b>>1 & 1) * xtime(a)) ^ ((0x0b>>2 & 1) * xtime(xtime(a))) ^ ((0x0b>>3 & 1) * xtime(xtime(xtime(a)))) ^ ((0x0b>>4 & 1) * xtime(xtime(xtime(xtime(a)))))) ^ ( ((0x0d & 1) * b) ^ ((0x0d>>1 & 1) * xtime(b)) ^ ((0x0d>>2 & 1) * xtime(xtime(b))) ^ ((0x0d>>3 & 1) * xtime(xtime(xtime(b)))) ^ ((0x0d>>4 & 1) * xtime(xtime(xtime(xtime(b)))))) ^ ( ((0x09 & 1) * c) ^ ((0x09>>1 & 1) * xtime(c)) ^ ((0x09>>2 & 1) * xtime(xtime(c))) ^ ((0x09>>3 & 1) * xtime(xtime(xtime(c)))) ^ ((0x09>>4 & 1) * xtime(xtime(xtime(xtime(c)))))) ^ ( ((0x0e & 1) * d) ^ ((0x0e>>1 & 1) * xtime(d)) ^ ((0x0e>>2 & 1) * xtime(xtime(d))) ^ ((0x0e>>3 & 1) * xtime(xtime(xtime(d)))) ^ ((0x0e>>4 & 1) * xtime(xtime(xtime(xtime(d))))));
 }
}




static void InvSubBytes(state_t* state)
{
 uint8_t i, j;
 for (i = 0; i < 4; ++i)
 {
  for (j = 0; j < 4; ++j)
  {
   (*state)[j][i] = (rsbox[((*state)[j][i])]);
  }
 }
}

static void InvShiftRows(state_t* state)
{
 uint8_t temp;


 temp = (*state)[3][1];
 (*state)[3][1] = (*state)[2][1];
 (*state)[2][1] = (*state)[1][1];
 (*state)[1][1] = (*state)[0][1];
 (*state)[0][1] = temp;


 temp = (*state)[0][2];
 (*state)[0][2] = (*state)[2][2];
 (*state)[2][2] = temp;

 temp = (*state)[1][2];
 (*state)[1][2] = (*state)[3][2];
 (*state)[3][2] = temp;


 temp = (*state)[0][3];
 (*state)[0][3] = (*state)[1][3];
 (*state)[1][3] = (*state)[2][3];
 (*state)[2][3] = (*state)[3][3];
 (*state)[3][3] = temp;
}



void Cipher(state_t* state, uint8_t RoundKey[240])
{
 uint8_t round = 0;


 AddRoundKey(0, state, RoundKey);




 Cipher_label33:for (round = 1; round < 10; ++round)
 {
#pragma HLS pipeline
 SubBytes(state);
  ShiftRows(state);
  MixColumns(state);
  AddRoundKey(round, state, RoundKey);
 }



 SubBytes(state);
 ShiftRows(state);
 AddRoundKey(10, state, RoundKey);
}


void InvCipher(state_t* state,uint8_t RoundKey[240])
{
 uint8_t round = 0;


 AddRoundKey(10, state, RoundKey);




 for (round = (10 - 1); round > 0; --round)
 {
  InvShiftRows(state);
  InvSubBytes(state);
  AddRoundKey(round, state, RoundKey);
  InvMixColumns(state);
 }



 InvShiftRows(state);
 InvSubBytes(state);
 AddRoundKey(0, state, RoundKey);
}
# 485 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
#ifndef HLS_FASTSIM
#ifndef HLS_FASTSIM
#include "apatb_Cipher.h"
#endif
# 485 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
void AES_ECB_encrypt(struct AES_ctx *ctx, uint8_t* buf)
{

 
#ifndef HLS_FASTSIM
#define Cipher AESL_WRAP_Cipher
#endif
# 488 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
Cipher((state_t*)buf, ctx->RoundKey);
#undef Cipher
# 488 "/home/sujoy/Documents/VLSI_project/project21/aes.c"

}
#endif
# 489 "/home/sujoy/Documents/VLSI_project/project21/aes.c"


void AES_ECB_decrypt(struct AES_ctx* ctx, uint8_t* buf)
{

 InvCipher((state_t*)buf, ctx->RoundKey);
}




#ifndef HLS_FASTSIM
#ifndef HLS_FASTSIM
#include "apatb_Cipher.h"
#endif
# 500 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
void AES_ECB_encrypt2(struct AES_ctx *ctx, state_t* buf)
{

 
#ifndef HLS_FASTSIM
#define Cipher AESL_WRAP_Cipher
#endif
# 503 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
Cipher(buf, ctx->RoundKey);
#undef Cipher
# 503 "/home/sujoy/Documents/VLSI_project/project21/aes.c"

}
#endif
# 504 "/home/sujoy/Documents/VLSI_project/project21/aes.c"


void AES(struct AES_ctx* ctx, uint8_t key[16], state_t* in)
{
 AES_init_ctx(ctx, key);
 AES_ECB_encrypt2(ctx, in);
}






static void XorWithIv(uint8_t* buf, uint8_t* Iv)
{
 uint8_t i;
 for (i = 0; i < 16; ++i)
 {
  buf[i] ^= Iv[i];
 }
}

#ifndef HLS_FASTSIM
#ifndef HLS_FASTSIM
#include "apatb_Cipher.h"
#endif
# 526 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
void AES_CBC_encrypt_buffer(struct AES_ctx *ctx,uint8_t* buf, uint32_t length)
{
 uintptr_t i;
 uint8_t *Iv = ctx->Iv;
 for (i = 0; i < length; i += 16)
 {
  XorWithIv(buf, Iv);
  
#ifndef HLS_FASTSIM
#define Cipher AESL_WRAP_Cipher
#endif
# 533 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
Cipher((state_t*)buf, ctx->RoundKey);
#undef Cipher
# 533 "/home/sujoy/Documents/VLSI_project/project21/aes.c"

  Iv = buf;
  buf += 16;

 }

 memcpy(ctx->Iv, Iv, 16);
}
#endif
# 540 "/home/sujoy/Documents/VLSI_project/project21/aes.c"


void AES_CBC_decrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length)
{
 uintptr_t i;
 uint8_t storeNextIv[16];
 for (i = 0; i < length; i += 16)
 {
  memcpy(storeNextIv, buf, 16);
  InvCipher((state_t*)buf, ctx->RoundKey);
  XorWithIv(buf, ctx->Iv);
  memcpy(ctx->Iv, storeNextIv, 16);
  buf += 16;
 }

}
# 564 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
#ifndef HLS_FASTSIM
#ifndef HLS_FASTSIM
#include "apatb_Cipher.h"
#endif
# 564 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
void AES_CTR_xcrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length)
{
 uint8_t buffer[16];

 unsigned i;
 int bi;
 for (i = 0, bi = 16; i < length; ++i, ++bi)
 {
  if (bi == 16)
  {

   memcpy(buffer, ctx->Iv, 16);
   
#ifndef HLS_FASTSIM
#define Cipher AESL_WRAP_Cipher
#endif
# 576 "/home/sujoy/Documents/VLSI_project/project21/aes.c"
Cipher((state_t*)buffer,ctx->RoundKey);
#undef Cipher
# 576 "/home/sujoy/Documents/VLSI_project/project21/aes.c"



   for (bi = (16 - 1); bi >= 0; --bi)
   {

    if (ctx->Iv[bi] == 255)
    {
     ctx->Iv[bi] = 0;
     continue;
    }
    ctx->Iv[bi] += 1;
    break;
   }
   bi = 0;
  }

  buf[i] = (buf[i] ^ buffer[bi]);
 }
}
#endif
# 595 "/home/sujoy/Documents/VLSI_project/project21/aes.c"

