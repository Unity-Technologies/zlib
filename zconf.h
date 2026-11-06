/* zconf.h -- configuration of the zlib compression library
 * Copyright (C) 1995-2026 Jean-loup Gailly, Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */

/* @(#) $Id$ */

#ifndef ZCONF_H
#define ZCONF_H

/*
 * If you *really* need a unique prefix for all types and library functions,
 * compile with -DZ_PREFIX. The "standard" zlib should be compiled without it.
 * Even better than compiling with -DZ_PREFIX would be to use configure to set
 * this permanently in zconf.h using "./configure --zprefix".
 */

#ifndef UNITY_Z_PREFIX
#define UNITY_Z_PREFIX 1
#endif

#if UNITY_Z_PREFIX
#   define Z_PREFIX_SET

/* all linked symbols and init macros */
#  define _dist_code            unity_z__dist_code
#  define _length_code          unity_z__length_code
#  define _tr_align             unity_z__tr_align
#  define _tr_flush_bits        unity_z__tr_flush_bits
#  define _tr_flush_block       unity_z__tr_flush_block
#  define _tr_init              unity_z__tr_init
#  define _tr_stored_block      unity_z__tr_stored_block
#  define _tr_tally             unity_z__tr_tally
#  define adler32               unity_z_adler32
#  define adler32_combine       unity_z_adler32_combine
#  define adler32_combine64     unity_z_adler32_combine64
#  define adler32_z             unity_z_adler32_z
#  ifndef Z_SOLO
#    define compress              unity_z_compress
#    define compress2             unity_z_compress2
#    define compress_z            unity_z_compress_z
#    define compress2_z           unity_z_compress2_z
#    define compressBound         unity_z_compressBound
#    define compressBound_z       unity_z_compressBound_z
#  endif
#  define crc32                 unity_z_crc32
#  define crc32_combine         unity_z_crc32_combine
#  define crc32_combine64       unity_z_crc32_combine64
#  define crc32_combine_gen     unity_z_crc32_combine_gen
#  define crc32_combine_gen64   unity_z_crc32_combine_gen64
#  define crc32_combine_op      unity_z_crc32_combine_op
#  define crc32_z               unity_z_crc32_z
#  define deflate               unity_z_deflate
#  define deflateBound          unity_z_deflateBound
#  define deflateBound_z        unity_z_deflateBound_z
#  define deflateCopy           unity_z_deflateCopy
#  define deflateEnd            unity_z_deflateEnd
#  define deflateGetDictionary  unity_z_deflateGetDictionary
#  define deflateInit           unity_z_deflateInit
#  define deflateInit2          unity_z_deflateInit2
#  define deflateInit2_         unity_z_deflateInit2_
#  define deflateInit_          unity_z_deflateInit_
#  define deflateParams         unity_z_deflateParams
#  define deflatePending        unity_z_deflatePending
#  define deflatePrime          unity_z_deflatePrime
#  define deflateReset          unity_z_deflateReset
#  define deflateResetKeep      unity_z_deflateResetKeep
#  define deflateSetDictionary  unity_z_deflateSetDictionary
#  define deflateSetHeader      unity_z_deflateSetHeader
#  define deflateTune           unity_z_deflateTune
#  define deflateUsed           unity_z_deflateUsed
#  define deflate_copyright     unity_z_deflate_copyright
#  define get_crc_table         unity_z_get_crc_table
#  ifndef Z_SOLO
#    define gz_error              unity_z_gz_error
#    define gz_intmax             unity_z_gz_intmax
#    define gz_strwinerror        unity_z_gz_strwinerror
#    define gzbuffer              unity_z_gzbuffer
#    define gzclearerr            unity_z_gzclearerr
#    define gzclose               unity_z_gzclose
#    define gzclose_r             unity_z_gzclose_r
#    define gzclose_w             unity_z_gzclose_w
#    define gzdirect              unity_z_gzdirect
#    define gzdopen               unity_z_gzdopen
#    define gzeof                 unity_z_gzeof
#    define gzerror               unity_z_gzerror
#    define gzflush               unity_z_gzflush
#    define gzfread               unity_z_gzfread
#    define gzfwrite              unity_z_gzfwrite
#    define gzgetc                unity_z_gzgetc
#    define gzgetc_               unity_z_gzgetc_
#    define gzgets                unity_z_gzgets
#    define gzoffset              unity_z_gzoffset
#    define gzoffset64            unity_z_gzoffset64
#    define gzopen                unity_z_gzopen
#    define gzopen64              unity_z_gzopen64
#    ifdef _WIN32
#      define gzopen_w              unity_z_gzopen_w
#    endif
#    define gzprintf              unity_z_gzprintf
#    define gzputc                unity_z_gzputc
#    define gzputs                unity_z_gzputs
#    define gzread                unity_z_gzread
#    define gzrewind              unity_z_gzrewind
#    define gzseek                unity_z_gzseek
#    define gzseek64              unity_z_gzseek64
#    define gzsetparams           unity_z_gzsetparams
#    define gztell                unity_z_gztell
#    define gztell64              unity_z_gztell64
#    define gzungetc              unity_z_gzungetc
#    define gzvprintf             unity_z_gzvprintf
#    define gzwrite               unity_z_gzwrite
#  endif
#  define inflate               unity_z_inflate
#  define inflateBack           unity_z_inflateBack
#  define inflateBackEnd        unity_z_inflateBackEnd
#  define inflateBackInit       unity_z_inflateBackInit
#  define inflateBackInit_      unity_z_inflateBackInit_
#  define inflateCodesUsed      unity_z_inflateCodesUsed
#  define inflateCopy           unity_z_inflateCopy
#  define inflateEnd            unity_z_inflateEnd
#  define inflateGetDictionary  unity_z_inflateGetDictionary
#  define inflateGetHeader      unity_z_inflateGetHeader
#  define inflateInit           unity_z_inflateInit
#  define inflateInit2          unity_z_inflateInit2
#  define inflateInit2_         unity_z_inflateInit2_
#  define inflateInit_          unity_z_inflateInit_
#  define inflateMark           unity_z_inflateMark
#  define inflatePrime          unity_z_inflatePrime
#  define inflateReset          unity_z_inflateReset
#  define inflateReset2         unity_z_inflateReset2
#  define inflateResetKeep      unity_z_inflateResetKeep
#  define inflateSetDictionary  unity_z_inflateSetDictionary
#  define inflateSync           unity_z_inflateSync
#  define inflateSyncPoint      unity_z_inflateSyncPoint
#  define inflateUndermine      unity_z_inflateUndermine
#  define inflateValidate       unity_z_inflateValidate
#  define inflate_copyright     unity_z_inflate_copyright
#  define inflate_fast          unity_z_inflate_fast
#  define inflate_table         unity_z_inflate_table
#  define inflate_fixed         unity_z_inflate_fixed
#  ifndef Z_SOLO
#    define uncompress            unity_z_uncompress
#    define uncompress2           unity_z_uncompress2
#    define uncompress_z          unity_z_uncompress_z
#    define uncompress2_z         unity_z_uncompress2_z
#  endif
#  define zError                unity_z_zError
#  ifndef Z_SOLO
#    define zcalloc               unity_z_zcalloc
#    define zcfree                unity_z_zcfree
#  endif
#  define zlibCompileFlags      unity_z_zlibCompileFlags
#  define zlibVersion           unity_z_zlibVersion

/* all zlib typedefs in zlib.h and zconf.h */
#  define Byte                  unity_z_Byte
#  define Bytef                 unity_z_Bytef
#  define alloc_func            unity_z_alloc_func
#  define charf                 unity_z_charf
#  define free_func             unity_z_free_func
#  ifndef Z_SOLO
#    define gzFile                unity_z_gzFile
#  endif
#  define gz_header             unity_z_gz_header
#  define gz_headerp            unity_z_gz_headerp
#  define in_func               unity_z_in_func
#  define intf                  unity_z_intf
#  define out_func              unity_z_out_func
#  define uInt                  unity_z_uInt
#  define uIntf                 unity_z_uIntf
#  define uLong                 unity_z_uLong
#  define uLongf                unity_z_uLongf
#  define voidp                 unity_z_voidp
#  define voidpc                unity_z_voidpc
#  define voidpf                unity_z_voidpf

/* all zlib structs in zlib.h and zconf.h */
#  define gz_header_s           unity_z_gz_header_s
#  define internal_state        unity_z_internal_state

#endif

#if defined(__MSDOS__) && !defined(MSDOS)
#  define MSDOS
#endif
#if (defined(OS_2) || defined(__OS2__)) && !defined(OS2)
#  define OS2
#endif
#if defined(_WINDOWS) && !defined(WINDOWS)
#  define WINDOWS
#endif
#if defined(_WIN32) || defined(_WIN32_WCE) || defined(__WIN32__)
#  ifndef WIN32
#    define WIN32
#  endif
#endif
#if (defined(MSDOS) || defined(OS2) || defined(WINDOWS)) && !defined(WIN32)
#  if !defined(__GNUC__) && !defined(__FLAT__) && !defined(__386__)
#    ifndef SYS16BIT
#      define SYS16BIT
#    endif
#  endif
#endif

/* UNITY SPECIFIC */
/* we do not set this in ./configure (we dont run it at all) */
/* must be 1, not empty: zconf.h tests it with "#if HAVE_UNISTD_H-0" */
#if !defined(HAVE_UNISTD_H) && !defined(_MSC_VER)
    #define HAVE_UNISTD_H 1
#endif
/* END UNITY SPECIFIC */

/*
 * Compile with -DMAXSEG_64K if the alloc function cannot allocate more
 * than 64k bytes at a time (needed on systems with 16-bit int).
 */
#ifdef SYS16BIT
#  define MAXSEG_64K
#endif
#ifdef MSDOS
#  define UNALIGNED_OK
#endif

#ifdef __STDC_VERSION__
#  ifndef STDC
#    define STDC
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef STDC99
#      define STDC99
#    endif
#  endif
#endif
#if !defined(STDC) && (defined(__STDC__) || defined(__cplusplus))
#  define STDC
#endif
#if !defined(STDC) && (defined(__GNUC__) || defined(__BORLANDC__))
#  define STDC
#endif
#if !defined(STDC) && (defined(MSDOS) || defined(WINDOWS) || defined(WIN32))
#  define STDC
#endif
#if !defined(STDC) && (defined(OS2) || defined(__HOS_AIX__))
#  define STDC
#endif

#if defined(__OS400__) && !defined(STDC)    /* iSeries (formerly AS/400). */
#  define STDC
#endif

#ifndef STDC
#  ifndef const /* cannot use !defined(STDC) && !defined(const) on Mac */
#    define const       /* note: need a more gentle solution here */
#  endif
#endif

#ifndef z_const
#  ifdef ZLIB_CONST
#    define z_const const
#  else
#    define z_const
#  endif
#endif

#ifdef Z_SOLO
#  ifdef _WIN64
     typedef unsigned long long z_size_t;
#  else
     typedef unsigned long z_size_t;
#  endif
#else
#  define z_longlong long long
#  if defined(NO_SIZE_T)
     typedef unsigned NO_SIZE_T z_size_t;
#  elif defined(STDC)
#    include <stddef.h>
     typedef size_t z_size_t;
#  else
     typedef unsigned long z_size_t;
#  endif
#  undef z_longlong
#endif

/* Maximum value for memLevel in deflateInit2 */
#ifndef MAX_MEM_LEVEL
#  ifdef MAXSEG_64K
#    define MAX_MEM_LEVEL 8
#  else
#    define MAX_MEM_LEVEL 9
#  endif
#endif

/* Maximum value for windowBits in deflateInit2 and inflateInit2.
 * WARNING: reducing MAX_WBITS makes minigzip unable to extract .gz files
 * created by gzip. (Files created by minigzip can still be extracted by
 * gzip.)
 */
#ifndef MAX_WBITS
#  define MAX_WBITS   15 /* 32K LZ77 window */
#endif

/* The memory requirements for deflate are (in bytes):
            (1 << (windowBits+2)) +  (1 << (memLevel+9))
 that is: 128K for windowBits=15  +  128K for memLevel = 8  (default values)
 plus a few kilobytes for small objects. For example, if you want to reduce
 the default memory requirements from 256K to 128K, compile with
     make CFLAGS="-O -DMAX_WBITS=14 -DMAX_MEM_LEVEL=7"
 Of course this will generally degrade compression (there's no free lunch).

   The memory requirements for inflate are (in bytes) 1 << windowBits
 that is, 32K for windowBits=15 (default value) plus about 7 kilobytes
 for small objects.
*/

                        /* Type declarations */

#ifndef OF /* function prototypes */
#  ifdef STDC
#    define OF(args)  args
#  else
#    define OF(args)  ()
#  endif
#endif

/* The following definitions for FAR are needed only for MSDOS mixed
 * model programming (small or medium model with some far allocations).
 * This was tested only with MSC; for other MSDOS compilers you may have
 * to define NO_MEMCPY in zutil.h.  If you don't need the mixed model,
 * just define FAR to be empty.
 */
#ifdef SYS16BIT
#  if defined(M_I86SM) || defined(M_I86MM)
     /* MSC small or medium model */
#    define SMALL_MEDIUM
#    ifdef _MSC_VER
#      define FAR _far
#    else
#      define FAR far
#    endif
#  endif
#  if (defined(__SMALL__) || defined(__MEDIUM__))
     /* Turbo C small or medium model */
#    define SMALL_MEDIUM
#    ifdef __BORLANDC__
#      define FAR _far
#    else
#      define FAR far
#    endif
#  endif
#endif

#if defined(WINDOWS) || defined(WIN32)
   /* If building or using zlib as a DLL, define ZLIB_DLL.
    * This is not mandatory, but it offers a little performance increase.
    */
#  ifdef ZLIB_DLL
#    if defined(WIN32) && (!defined(__BORLANDC__) || (__BORLANDC__ >= 0x500))
#      ifdef ZLIB_INTERNAL
#        define ZEXTERN extern __declspec(dllexport)
#      else
#        define ZEXTERN extern __declspec(dllimport)
#      endif
#    endif
#  endif  /* ZLIB_DLL */
   /* If building or using zlib with the WINAPI/WINAPIV calling convention,
    * define ZLIB_WINAPI.
    * Caution: the standard ZLIB1.DLL is NOT compiled using ZLIB_WINAPI.
    */
#  ifdef ZLIB_WINAPI
#    ifdef FAR
#      undef FAR
#    endif
#    ifndef WIN32_LEAN_AND_MEAN
#      define WIN32_LEAN_AND_MEAN
#    endif
#    include <windows.h>
     /* No need for _export, use ZLIB.DEF instead. */
     /* For complete Windows compatibility, use WINAPI, not __stdcall. */
#    define ZEXPORT WINAPI
#    ifdef WIN32
#      define ZEXPORTVA WINAPIV
#    else
#      define ZEXPORTVA FAR CDECL
#    endif
#  endif
#endif

#if defined (__BEOS__)
#  ifdef ZLIB_DLL
#    ifdef ZLIB_INTERNAL
#      define ZEXPORT   __declspec(dllexport)
#      define ZEXPORTVA __declspec(dllexport)
#    else
#      define ZEXPORT   __declspec(dllimport)
#      define ZEXPORTVA __declspec(dllimport)
#    endif
#  endif
#endif

#ifndef ZEXTERN
#  define ZEXTERN extern
#endif
#ifndef ZEXPORT
#  define ZEXPORT
#endif
#ifndef ZEXPORTVA
#  define ZEXPORTVA
#endif

#ifndef FAR
#  define FAR
#endif

/* UNITY SPECIFIC: Byte is renamed by the prefix mapping above, so it must always be typedef'd
   (the __MACTYPES__ guard would leave unity_z_Byte undefined) */
typedef unsigned char  Byte;  /* 8 bits */
typedef unsigned int   uInt;  /* 16 bits or more */
typedef unsigned long  uLong; /* 32 bits or more */

#ifdef SMALL_MEDIUM
   /* Borland C/C++ and some old MSC versions ignore FAR inside typedef */
#  define Bytef Byte FAR
#else
   typedef Byte  FAR Bytef;
#endif
typedef char  FAR charf;
typedef int   FAR intf;
typedef uInt  FAR uIntf;
typedef uLong FAR uLongf;

#ifdef STDC
   typedef void const *voidpc;
   typedef void FAR   *voidpf;
   typedef void       *voidp;
#else
   typedef Byte const *voidpc;
   typedef Byte FAR   *voidpf;
   typedef Byte       *voidp;
#endif

#if !defined(Z_U4) && !defined(Z_SOLO) && defined(STDC)
#  include <limits.h>
#  if (UINT_MAX == 0xffffffffUL)
#    define Z_U4 unsigned
#  elif (ULONG_MAX == 0xffffffffUL)
#    define Z_U4 unsigned long
#  elif (USHRT_MAX == 0xffffffffUL)
#    define Z_U4 unsigned short
#  endif
#endif

#ifdef Z_U4
   typedef Z_U4 z_crc_t;
#else
   typedef unsigned long z_crc_t;
#endif

#if HAVE_UNISTD_H-0     /* may be set to #if 1 by ./configure */
#  define Z_HAVE_UNISTD_H
#endif

#if HAVE_STDARG_H-0     /* may be set to #if 1 by ./configure */
#  define Z_HAVE_STDARG_H
#endif

#ifdef STDC
#  ifndef Z_SOLO
#    include <sys/types.h>      /* for off_t */
#  endif
#endif

#if defined(STDC) || defined(Z_HAVE_STDARG_H)
#  ifndef Z_SOLO
#    include <stdarg.h>         /* for va_list */
#  endif
#endif

#ifdef _WIN32
#  ifndef Z_SOLO
#    include <stddef.h>         /* for wchar_t */
#  endif
#endif

/* a little trick to accommodate both "#define _LARGEFILE64_SOURCE" and
 * "#define _LARGEFILE64_SOURCE 1" as requesting 64-bit operations, (even
 * though the former does not conform to the LFS document), but considering
 * both "#undef _LARGEFILE64_SOURCE" and "#define _LARGEFILE64_SOURCE 0" as
 * equivalently requesting no 64-bit operations
 */
#if defined(_LARGEFILE64_SOURCE) && -_LARGEFILE64_SOURCE - -1 == 1
#  undef _LARGEFILE64_SOURCE
#endif

#ifndef Z_HAVE_UNISTD_H
#  if defined(__WATCOMC__) || defined(__GO32__) || \
      (defined(_LARGEFILE64_SOURCE) && !defined(_WIN32))
#    define Z_HAVE_UNISTD_H
#  endif
#endif
#ifndef Z_SOLO
#  if defined(Z_HAVE_UNISTD_H)
#    include <unistd.h>         /* for SEEK_*, off_t, and _LFS64_LARGEFILE */
#    ifdef VMS
#      include <unixio.h>       /* for off_t */
#    endif
#    ifndef z_off_t
#      define z_off_t off_t
#    endif
#  endif
#endif

#if defined(_LFS64_LARGEFILE) && _LFS64_LARGEFILE-0
#  define Z_LFS64
#endif

#if defined(_LARGEFILE64_SOURCE) && defined(Z_LFS64)
#  define Z_LARGE64
#endif

#if defined(_FILE_OFFSET_BITS) && _FILE_OFFSET_BITS-0 == 64 && defined(Z_LFS64)
#  define Z_WANT64
#endif

#if !defined(SEEK_SET) && !defined(Z_SOLO)
#  define SEEK_SET        0       /* Seek from beginning of file.  */
#  define SEEK_CUR        1       /* Seek from current position.  */
#  define SEEK_END        2       /* Set file pointer to EOF plus "offset" */
#endif

#ifndef z_off_t
#  define z_off_t long long
#endif

#if !defined(_WIN32) && defined(Z_LARGE64)
#  define z_off64_t off64_t
#elif defined(__MINGW32__)
#  define z_off64_t long long
#elif defined(_WIN32) && !defined(__GNUC__)
#  define z_off64_t __int64
#elif defined(__GO32__)
#  define z_off64_t offset_t
#else
#  define z_off64_t z_off_t
#endif

/* MVS linker does not support external names larger than 8 bytes */
#if defined(__MVS__)
  #pragma map(deflateInit_,"DEIN")
  #pragma map(deflateInit2_,"DEIN2")
  #pragma map(deflateEnd,"DEEND")
  #pragma map(deflateBound,"DEBND")
  #pragma map(inflateInit_,"ININ")
  #pragma map(inflateInit2_,"ININ2")
  #pragma map(inflateEnd,"INEND")
  #pragma map(inflateSync,"INSY")
  #pragma map(inflateSetDictionary,"INSEDI")
  #pragma map(compressBound,"CMBND")
  #pragma map(inflate_table,"INTABL")
  #pragma map(inflate_fast,"INFA")
  #pragma map(inflate_copyright,"INCOPY")
#endif

#endif /* ZCONF_H */
