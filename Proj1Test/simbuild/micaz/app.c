#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 37 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__ 
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__ 
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
#line 126
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 292
#line 288
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 44 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 128
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 143
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h" 3
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 262 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 67 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h" 3
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 102
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/i386-linux-gnu/bits/types.h" 3
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




__extension__ 
#line 47
typedef signed long long int __int64_t;
__extension__ 
#line 48
typedef unsigned long long int __uint64_t;







__extension__ 
#line 56
typedef long long int __quad_t;
__extension__ 
#line 57
typedef unsigned long long int __u_quad_t;
#line 134
__extension__ 
#line 134
typedef __u_quad_t __dev_t;
__extension__ 
#line 135
typedef unsigned int __uid_t;
__extension__ 
#line 136
typedef unsigned int __gid_t;
__extension__ 
#line 137
typedef unsigned long int __ino_t;
__extension__ 
#line 138
typedef __u_quad_t __ino64_t;
__extension__ 
#line 139
typedef unsigned int __mode_t;
__extension__ 
#line 140
typedef unsigned int __nlink_t;
__extension__ 
#line 141
typedef long int __off_t;
__extension__ 
#line 142
typedef __quad_t __off64_t;
__extension__ 
#line 143
typedef int __pid_t;
__extension__ 
#line 144
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
__extension__ 
#line 145
typedef long int __clock_t;
__extension__ 
#line 146
typedef unsigned long int __rlim_t;
__extension__ 
#line 147
typedef __u_quad_t __rlim64_t;
__extension__ 
#line 148
typedef unsigned int __id_t;
__extension__ 
#line 149
typedef long int __time_t;
__extension__ 
#line 150
typedef unsigned int __useconds_t;
__extension__ 
#line 151
typedef long int __suseconds_t;

__extension__ 
#line 153
typedef int __daddr_t;
__extension__ 
#line 154
typedef long int __swblk_t;
__extension__ 
#line 155
typedef int __key_t;


__extension__ 
#line 158
typedef int __clockid_t;


__extension__ 
#line 161
typedef void *__timer_t;


__extension__ 
#line 164
typedef long int __blksize_t;




__extension__ 
#line 169
typedef long int __blkcnt_t;
__extension__ 
#line 170
typedef __quad_t __blkcnt64_t;


__extension__ 
#line 173
typedef unsigned long int __fsblkcnt_t;
__extension__ 
#line 174
typedef __u_quad_t __fsblkcnt64_t;


__extension__ 
#line 177
typedef unsigned long int __fsfilcnt_t;
__extension__ 
#line 178
typedef __u_quad_t __fsfilcnt64_t;

__extension__ 
#line 180
typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ 
#line 189
typedef int __intptr_t;


__extension__ 
#line 192
typedef unsigned int __socklen_t;
# 34 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 201
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/i386-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/i386-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 31 "/usr/include/i386-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/i386-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 76
#line 65
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 32 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 36 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 39
typedef union __nesc_unnamed4252 {

  char __size[36];
  long int __align;
} pthread_attr_t;





#line 46
typedef struct __pthread_internal_slist {

  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 73
#line 54
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union  {

      int __spins;
      __pthread_slist_t __list;
    } ;
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;





#line 75
typedef union __nesc_unnamed4254 {

  char __size[4];
  long int __align;
} pthread_mutexattr_t;
#line 99
#line 84
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 101
typedef union __nesc_unnamed4257 {

  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 139
#line 119
typedef union __nesc_unnamed4258 {

  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;





#line 141
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 156
typedef union __nesc_unnamed4261 {

  char __size[20];
  long int __align;
} pthread_barrier_t;





#line 162
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x40398a98, const void *arg_0x40398c30);
#line 776
__extension__ 
#line 793
__extension__ 
# 36 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3
typedef long double float_t;

typedef long double double_t;
# 110 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 155
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 186
extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 252
extern double erfc(double arg_0x403dfda8) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 203 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 303
#line 296
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 321
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 48 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h" 3
#line 22
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#line 53
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 172 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 172
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 208
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 273
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 366
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 80 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 111
typedef _G_fpos_t fpos_t;
#line 169
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 243
extern int fflush(FILE *__stream);
#line 307
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 357
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 387
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 855
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 9 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x4053b320), 
int (*key_eq_fn)(void *arg_0x4053b768, void *arg_0x4053b8e0));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 364U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 57 "/usr/include/i386-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 233 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x4066f558, int arg_0x4066f6b0);
static double RandomUniform(void );
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/home/ubuntu/local/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/ubuntu/local/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[64];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 41 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4280 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4281 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4282 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4283 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 13 "/home/ubuntu/workspace/Proj1Test/src/socket.h"
#line 4
typedef enum socketState {
  SOCK_ESTABLISHED = 0, 
  SOCK_LISTEN = 1, 
  SOCK_CLOSED = 2, 
  SOCK_SYN_SENT = 3, 
  SOCK_CLOSE_WAIT = 4, 
  SOCK_FIN_WAIT_1 = 5, 
  SOCK_FIN_WAIT_2 = 6, 
  SOCK_SYN_RCVD = 7
} socketState;

enum __nesc_unnamed4284 {
  SOCKET_SEND_BUFFER_SIZE = 128, 
  SOCKET_RECEIVE_BUFFER_SIZE = 128, 
  NULL_SOCKET = 0
};






#line 21
typedef nx_struct socket_addr_t {
  nx_uint8_t srcPort;
  nx_uint8_t destPort;
  nx_uint16_t srcAddr;
  nx_uint16_t destAddr;
} __attribute__((packed)) socket_addr_t;
#line 45
#line 28
typedef struct socket_storage_t {
  socketState state;
  socket_addr_t sockAddr;
  uint8_t sendBuff[SOCKET_SEND_BUFFER_SIZE];
  uint8_t recBuff[SOCKET_RECEIVE_BUFFER_SIZE];
  uint16_t lastByteSent;
  uint16_t lastByteWritten;
  uint16_t lastByteAck;
  uint16_t lastByteRec;
  uint16_t lastByteRead;
  uint16_t lastByteExpected;

  uint16_t isnA_native;
  uint16_t isnB_native;
  uint16_t isnA_foreign;
  uint16_t isnB_foreign;
  uint8_t effectiveWindow;
} socket_storage_t;

typedef uint16_t socket_t;
# 25 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4285 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4286 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4287 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4288 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4289 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4290 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4291 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4292 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4293 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4294 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4295 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4296 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4297 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4298 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4299 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 7 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/hashmap.h"
typedef uint8_t hashType;

enum __nesc_unnamed4300 {
  HASH_MAX_SIZE = 20
};




#line 13
typedef struct hashmapEntry {
  uint16_t key;
  hashType value;
} hashmapEntry;





#line 18
typedef struct hashmap {
  hashmapEntry map[HASH_MAX_SIZE];
  uint8_t keys[HASH_MAX_SIZE];
  uint8_t numofVals;
} hashmap;
# 14 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/iterator.h"
#line 10
typedef struct iterator {
  hashType values[HASH_MAX_SIZE];
  uint16_t size;
  uint16_t position;
} iterator;
# 12 "/home/ubuntu/workspace/Proj1Test/src/command.h"
enum __nesc_unnamed4301 {
  CMD_PING = '0', 
  CMD_NEIGHBOR_DUMP = '1', 
  CMD_LINKLIST_DUMP = '2', 
  CMD_ROUTETABLE_DUMP = '3', 
  CMD_TEST_CLIENT = '4', 
  CMD_TEST_SERVER = '5', 
  CMD_KILL = '6', 
  CMD_TEST_CLIENT_END = '7', 
  CMD_HELLO = '8', 
  CMD_ERROR = '9', 
  CMD_MSG = 'a', 
  CMD_WISP = 'b', 
  CMD_LISTUSR = 'c'
};


enum __nesc_unnamed4302 {
  CMD_LENGTH = 1
};

static inline bool isPing(uint8_t *array, uint8_t size);



static inline bool isNgbrdmp(uint8_t *array, uint8_t size);



static inline bool isRTdmp(uint8_t *array, uint8_t size);



static inline bool isTstSrvr(uint8_t *array, uint8_t size);






static inline bool isTstClnt(uint8_t *array, uint8_t size);





static inline bool isTstClntEnd(uint8_t *array, uint8_t size);






static inline bool isHello(uint8_t *array, uint8_t size);






static inline bool isWisp(uint8_t *array, uint8_t size);






static inline bool isMsg(uint8_t *array, uint8_t size);






static inline bool isListUsr(uint8_t *array, uint8_t size);
#line 102
static int getCMD(uint8_t *array, uint8_t size);
# 8 "/home/ubuntu/workspace/Proj1Test/src/protocol.h"
enum __nesc_unnamed4303 {
  PROTOCOL_PING = 0, 
  PROTOCOL_PINGREPLY = 1, 
  PROTOCOL_LINKEDLIST = 2, 
  PROTOCOL_NAME = 3, 
  PROTOCOL_TCP = 4, 
  PROTOCOL_DISTANCE_VECTOR = 5, 
  PROTOCOL_CMD = 99
};
# 15 "/home/ubuntu/workspace/Proj1Test/src/packet.h"
enum __nesc_unnamed4304 {

  PACKET_HEADER_LENGTH = 8, 
  PACKET_MAX_PAYLOAD_SIZE = 64 - PACKET_HEADER_LENGTH, 

  MAX_TTL = 15
};









#line 24
typedef nx_struct pack {
  nx_uint16_t dest;
  nx_uint16_t src;
  nx_uint16_t seq;
  nx_uint8_t TTL;
  nx_uint8_t protocol;
  nx_uint8_t payload[PACKET_MAX_PAYLOAD_SIZE];
} __attribute__((packed)) pack;
#line 44
enum __nesc_unnamed4305 {
  AM_PACK = 6
};
# 8 "/home/ubuntu/workspace/Proj1Test/src/sendInfo.h"
enum __nesc_unnamed4306 {
  SEND_BUFFER_SIZE = 128
};





#line 12
typedef struct sendInfo {
  pack packet;
  uint16_t src;
  uint16_t dest;
} sendInfo;
# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/pingInfo.h"
#line 5
typedef struct pingInfo {
  uint16_t dest;
  uint32_t timeSent;
  uint8_t msg[PACKET_MAX_PAYLOAD_SIZE];
} pingInfo;
# 5 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/pingList.h"
typedef pingInfo pingType;







#line 10
typedef struct pingList {
  pingType values[30];
  uint8_t numValues;
} pingList;
# 7 "/home/ubuntu/workspace/Proj1Test/src/ping.h"
enum __nesc_unnamed4307 {
  PING_TIMER_PERIOD = 5333, 
  PING_TIMEOUT = 5000
};
# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/pair.h"
#line 6
typedef struct pair {
  uint8_t src;
  uint8_t seq;
} pair;
# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/dvr.h"
#line 5
typedef struct dvr {
  uint8_t dest;
  uint8_t cost;
  uint8_t nextHop;
} dvr;
# 6 "/home/ubuntu/workspace/Proj1Test/src/transport.h"
enum __nesc_unnamed4308 {
  TRANSPORT_HEADER_LENGTH = 9, 
  TRANSPORT_MAX_PAYLOAD_SIZE = PACKET_MAX_PAYLOAD_SIZE - TRANSPORT_HEADER_LENGTH
};

enum __nesc_unnamed4309 {
  TRANSPORT_SYN = 1, 
  TRANSPORT_ACK = 2, 
  TRANSPORT_FIN = 4, 
  TRANSPORT_DATA = 8
};










#line 18
typedef nx_struct transport {
  nx_uint8_t srcPort;
  nx_uint8_t destPort;
  nx_uint16_t seq;
  nx_uint16_t ack;
  nx_uint8_t flags;
  nx_uint8_t window;
  nx_uint8_t length;
  nx_uint8_t payload[TRANSPORT_MAX_PAYLOAD_SIZE];
} __attribute__((packed)) transport;
# 7 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/dvrTransmission.h"
#line 4
typedef struct dvrTransmission {
  uint8_t dest;
  uint8_t cost;
} dvrTransmission;
# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4310 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4311 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4312 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4313 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4314 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4315 {

  uint8_t flat;
  struct __nesc_unnamed4316 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4317 {

  uint8_t flat;
  struct __nesc_unnamed4318 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4321 {

  uint8_t flat;
  struct __nesc_unnamed4322 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4323 {

  uint8_t flat;
  struct __nesc_unnamed4324 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4325 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4326 {

  uint8_t flat;
  struct __nesc_unnamed4327 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4328 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4329 {

  uint8_t flat;
  struct __nesc_unnamed4330 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4331 {

  uint8_t flat;
  struct __nesc_unnamed4332 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4333 {

  uint8_t flat;
  struct __nesc_unnamed4334 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4335 {

  uint8_t flat;
  struct __nesc_unnamed4336 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 13 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/../../appData.h"
#line 4
typedef struct appData {
  uint16_t length;
  uint16_t data[1000];
  uint16_t marker;

  uint16_t lengthRec;
  uint16_t dataRec[1000];
  uint16_t markerRec;
} 
appData;
# 9 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/../../userMap.h"
#line 4
typedef struct userMap {
  uint8_t userName[20];
  uint16_t fileDesc;
} 

userMap;
# 7 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/../../cmdHist.h"
#line 4
typedef struct cmdHist {
  uint16_t fd;
  uint16_t num;
} cmdHist;
typedef TMilli Node$periodicTimer$precision_tag;
typedef TMilli Node$RTtimer$precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
typedef sendInfo SimpleSendP$Pool$t;
typedef sendInfo *SimpleSendP$Queue$t;
typedef TMilli SimpleSendP$sendTimer$precision_tag;
enum AMQueueP$__nesc_unnamed4337 {
  AMQueueP$NUM_CLIENTS = 1U
};
typedef sendInfo /*SimpleSendC.PoolC*/PoolC$0$pool_t;
typedef /*SimpleSendC.PoolC*/PoolC$0$pool_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t;
typedef /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$t;
typedef sendInfo */*SimpleSendC.QueueC*/QueueC$0$queue_t;
typedef /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$t;
typedef TMilli TransportP$synTimer$precision_tag;
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x4070c1b8);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x4070c1b8);
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 47 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408dd148, 
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408da1b8, 
# 71 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
#line 94
static void TossimActiveMessageC$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$default$receive(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408ddb08, 
# 71 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 76
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 68 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 133
message_t * amsg);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 104 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 59
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 48
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
# 113 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void Node$AMControl$startDone(error_t error);
#line 138
static void Node$AMControl$stopDone(error_t error);
# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void Node$Boot$booted(void );
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$periodicTimer$fired(void );
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Node$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$RTtimer$fired(void );
# 18 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
static uint16_t FloodSendP$FloodSend$neighborSize(void );
#line 10
static void FloodSendP$FloodSend$HistoryPushBack(pair one);

static void FloodSendP$FloodSend$NeighborPrintNeighbors(void );
#line 6
static void FloodSendP$FloodSend$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
#line 4
static void FloodSendP$FloodSend$handlePing(pack *myMsg, pair one);
#line 24
static void FloodSendP$FloodSend$handleDV(pack *myMsg);
#line 14
static void FloodSendP$FloodSend$NeighborDecrementNeighborPing(void );




static uint8_t FloodSendP$FloodSend$getNeighbor(uint16_t position);



static void FloodSendP$FloodSend$printRT(void );
#line 15
static void FloodSendP$FloodSend$SimpleSendSend(pack msg, uint16_t dest);









static void FloodSendP$FloodSend$populateRtngTabl(void );
#line 5
static void FloodSendP$FloodSend$handlePingReply(pack *myMsg, pair one);







static void FloodSendP$FloodSend$NeighborRefreshNeighbors(void );
#line 7
static void FloodSendP$FloodSend$makePair(pair *pear, uint8_t src, uint8_t seq);
#line 21
static void FloodSendP$FloodSend$writeToPayloadFromRT(uint8_t *payld, uint8_t ngbr);
#line 8
static void FloodSendP$FloodSend$NeighborsClearAll(void );
# 6 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/HistoryList.nc"
static void /*NodeC.HistListC*/HistoryListC$0$HistoryList$pushback(pair input);
# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$clearAll(void );
#line 31
static uint8_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$costFromDest(uint8_t dest);
#line 17
static bool /*NodeC.neighborListC*/NeighborListC$0$NeighborList$neighborsContains(uint8_t toFind);



static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$refreshNeighbors(void );
#line 16
static pair /*NodeC.neighborListC*/NeighborListC$0$NeighborList$get(uint16_t position);






static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$incrementANeighbor(uint8_t toIncr);
#line 18
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printNeighbors(void );








static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$writeToPayloadFromRoutingTable(uint8_t *payld, uint8_t neighbor);
#line 6
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$delete(uint16_t position);
#line 30
static uint8_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$nextHopFromDest(uint8_t dest);
#line 29
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printRoutingTable(void );
#line 19
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$decrementNeighborPing(void );








static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$updateRoutingTable(uint8_t *payld, uint8_t source);
#line 7
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$pushback(pair input);


static pair /*NodeC.neighborListC*/NeighborListC$0$NeighborList$popback(void );
#line 25
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$populateRoutingTable(void );
#line 22
static void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$deleteNeighbor(uint8_t toDelete);
#line 15
static uint16_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$size(void );
# 109 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c753a8);
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c753a8);
# 92 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c753a8);
# 64 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c753a8, 
# 64 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c753a8, 
# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 5 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$populateTable(pair *list, uint16_t listSize);





static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$printTable(void );
#line 10
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotAdded(uint8_t element);


static uint8_t /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$cstFromDst(uint8_t dest);
#line 9
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$updateTable(uint8_t *payld, uint8_t source);
#line 6
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$pushback(dvr element);
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$writeToPayload(uint8_t *payld, uint8_t neigbr);
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotDeleted(uint8_t element);



static uint8_t /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$nxtHopFrmDst(uint8_t dest);
# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 46
static uint32_t RandomMlcgC$Random$rand32(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 4 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/SimpleSend.nc"
static error_t SimpleSendP$SimpleSend$send(pack msg, uint16_t dest);
# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void SimpleSendP$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimpleSendP$sendBufferTask$runTask(void );
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void SimpleSendP$sendTimer$fired(void );
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40d44730, 
# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 46 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40d47cb0, 
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 46 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40d47cb0, 
# 96 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 97 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
/*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$t * 


/*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get(void );
#line 61
static bool /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty(void );
#line 89
static error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(
#line 85
/*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$t * newVal);
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init(void );
# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
/*SimpleSendC.QueueC*/QueueC$0$Queue$t  

/*SimpleSendC.QueueC*/QueueC$0$Queue$head(void );
#line 90
static error_t /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(
#line 86
/*SimpleSendC.QueueC*/QueueC$0$Queue$t  newVal);
#line 65
static uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*SimpleSendC.QueueC*/QueueC$0$Queue$t  

/*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*SimpleSendC.QueueC*/QueueC$0$Queue$empty(void );







static uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$size(void );
# 20 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
static socket_t TransportP$Transport$searchNewSock_default(socket_addr_t *addr);
#line 11
static uint16_t TransportP$Transport$listen(socket_t fd);
#line 8
static error_t TransportP$Transport$receive(pack *package);
#line 21
static void TransportP$Transport$resetRecBuff(uint16_t fd);
#line 17
static error_t TransportP$Transport$release(socket_t fd);
#line 9
static uint16_t TransportP$Transport$read(uint16_t fd, uint8_t *buff, uint16_t bufflen);
#line 5
static error_t TransportP$Transport$bind(socket_t fd, socket_addr_t *addr);










static socket_t TransportP$Transport$socket(void );





static void TransportP$Transport$resetSendBuff(uint16_t fd);
#line 13
static error_t TransportP$Transport$connect(socket_t fd, socket_addr_t *addr);
#line 6
static socket_t TransportP$Transport$accept(socket_t fd, socket_addr_t *addr);
static uint16_t TransportP$Transport$write(uint16_t fd, uint8_t *buff, uint16_t bufflen);
#line 19
static void TransportP$Transport$initUpdateTimer(void );
#line 14
static error_t TransportP$Transport$close(socket_t fd);
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportP$synTimer$fired(void );
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TransportP$update$runTask(void );
# 17 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
static void AppyP$Appy$handleListUsr(pack *package);
#line 15
static void AppyP$Appy$handleWisp(pack *package);



static void AppyP$Appy$initializeUsers(void );
#line 8
static appData *AppyP$Appy$getBufferAddr(void );



static void AppyP$Appy$handleTestClient(pack *package);

static void AppyP$Appy$handleHello(pack *package);






static uint16_t AppyP$Appy$getCN(void );
#line 16
static void AppyP$Appy$handleMsg(pack *package);
#line 11
static void AppyP$Appy$handleTestServer(pack *package);

static void AppyP$Appy$handleTestClientEnd(pack *package);






static void AppyP$Appy$insertFD(uint16_t fd);
#line 18
static void AppyP$Appy$processData(socket_addr_t sockAddr, uint16_t sequence);
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 61
static inline error_t MotePlatformP$SubInit$default$init(void );
# 59 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x4070c1b8);



enum SimSchedulerBasicP$__nesc_unnamed4338 {

  SimSchedulerBasicP$NUM_TASKS = 9U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 139
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 180
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 205
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 47 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408dd148, 
# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$receive(
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408da1b8, 
# 71 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$receive(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408ddb08, 
# 71 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);




static inline void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);




static inline void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 85 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 76
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 113 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 138
static void TossimPacketModelC$Control$stopDone(error_t error);
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 96 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4339 {
#line 96
  TossimPacketModelC$startDoneTask = 0U
};
#line 96
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4340 {
#line 101
  TossimPacketModelC$stopDoneTask = 1U
};
#line 101
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 145
enum TossimPacketModelC$__nesc_unnamed4341 {
#line 145
  TossimPacketModelC$sendDoneTask = 2U
};
#line 145
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 70
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static error_t TossimPacketModelC$Control$start(void );
#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 159
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 211
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];









static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 88
static inline am_addr_t ActiveMessageAddressC$amAddress(void );
# 104 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t Node$AMControl$start(void );
# 18 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
static uint16_t Node$FS$neighborSize(void );
#line 10
static void Node$FS$HistoryPushBack(pair one);

static void Node$FS$NeighborPrintNeighbors(void );
#line 4
static void Node$FS$handlePing(pack *myMsg, pair one);
#line 24
static void Node$FS$handleDV(pack *myMsg);
#line 14
static void Node$FS$NeighborDecrementNeighborPing(void );




static uint8_t Node$FS$getNeighbor(uint16_t position);



static void Node$FS$printRT(void );
#line 15
static void Node$FS$SimpleSendSend(pack msg, uint16_t dest);









static void Node$FS$populateRtngTabl(void );
#line 5
static void Node$FS$handlePingReply(pack *myMsg, pair one);







static void Node$FS$NeighborRefreshNeighbors(void );







static void Node$FS$writeToPayloadFromRT(uint8_t *payld, uint8_t ngbr);
#line 8
static void Node$FS$NeighborsClearAll(void );
# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t Node$Random$rand16(void );
# 136 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t Node$periodicTimer$getNow(void );
#line 64
static void Node$periodicTimer$startPeriodic(uint32_t dt);
# 8 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
static error_t Node$TR$receive(pack *package);










static void Node$TR$initUpdateTimer(void );
# 64 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$RTtimer$startPeriodic(uint32_t dt);
# 35 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
uint8_t Node$iteration[1000];
pack Node$sendPackage[1000];

pack Node$routingPackage[1000];
pack Node$ngbrPackage[1000];

pair Node$one[1000];

uint16_t Node$randNum[1000];
uint16_t Node$seqNO[1000];
char Node$someNum[1000];


error_t Node$handle[1000];


static void Node$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);
static inline void Node$makePair(pair *pear, uint8_t src, uint8_t seq);


static inline void Node$Boot$booted(void );
#line 69
static inline void Node$AMControl$startDone(error_t err);
#line 90
static inline void Node$AMControl$stopDone(error_t err);

static inline message_t *Node$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 315
static void Node$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
#line 335
static inline void Node$makePair(pair *pear, uint8_t src, uint8_t seq);




static inline void Node$periodicTimer$fired(void );
#line 352
static inline void Node$RTtimer$fired(void );
# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
static void FloodSendP$neighborList$clearAll(void );
#line 31
static uint8_t FloodSendP$neighborList$costFromDest(uint8_t dest);
#line 17
static bool FloodSendP$neighborList$neighborsContains(uint8_t toFind);



static void FloodSendP$neighborList$refreshNeighbors(void );
#line 16
static pair FloodSendP$neighborList$get(uint16_t position);






static void FloodSendP$neighborList$incrementANeighbor(uint8_t toIncr);
#line 18
static void FloodSendP$neighborList$printNeighbors(void );








static void FloodSendP$neighborList$writeToPayloadFromRoutingTable(uint8_t *payld, uint8_t neighbor);


static uint8_t FloodSendP$neighborList$nextHopFromDest(uint8_t dest);
#line 29
static void FloodSendP$neighborList$printRoutingTable(void );
#line 19
static void FloodSendP$neighborList$decrementNeighborPing(void );








static void FloodSendP$neighborList$updateRoutingTable(uint8_t *payld, uint8_t source);
#line 7
static void FloodSendP$neighborList$pushback(pair input);
#line 25
static void FloodSendP$neighborList$populateRoutingTable(void );
#line 15
static uint16_t FloodSendP$neighborList$size(void );
# 6 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/HistoryList.nc"
static void FloodSendP$histList$pushback(pair input);
# 4 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/SimpleSend.nc"
static error_t FloodSendP$Sender$send(pack msg, uint16_t dest);
# 10 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
pair FloodSendP$two[1000];
pack FloodSendP$sendPackage[1000];





static inline void FloodSendP$FloodSend$handleDV(pack *myMsg);



static void FloodSendP$FloodSend$handlePing(pack *myMsg, pair one);
#line 48
static void FloodSendP$FloodSend$handlePingReply(pack *myMsg, pair one);
#line 83
static void FloodSendP$FloodSend$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);







static inline void FloodSendP$FloodSend$makePair(pair *pear, uint8_t src, uint8_t seq);



static inline void FloodSendP$FloodSend$NeighborsClearAll(void );





static inline void FloodSendP$FloodSend$HistoryPushBack(pair one);





static inline void FloodSendP$FloodSend$NeighborPrintNeighbors(void );


static inline void FloodSendP$FloodSend$NeighborRefreshNeighbors(void );





static inline void FloodSendP$FloodSend$NeighborDecrementNeighborPing(void );


static inline void FloodSendP$FloodSend$SimpleSendSend(pack msg, uint16_t dest);






static inline void FloodSendP$FloodSend$writeToPayloadFromRT(uint8_t *payld, uint8_t ngbr);





static inline void FloodSendP$FloodSend$printRT(void );


static inline void FloodSendP$FloodSend$populateRtngTabl(void );


static inline uint16_t FloodSendP$FloodSend$neighborSize(void );


static inline uint8_t FloodSendP$FloodSend$getNeighbor(uint16_t position);
# 6 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/HistoryListC.nc"
uint16_t /*NodeC.HistListC*/HistoryListC$0$MAX_SIZE[1000];

pair /*NodeC.HistListC*/HistoryListC$0$container[1000][30];
uint16_t /*NodeC.HistListC*/HistoryListC$0$size[1000];

static void /*NodeC.HistListC*/HistoryListC$0$HistoryList$pushback(pair input);
# 5 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
static void /*NodeC.neighborListC*/NeighborListC$0$RT$populateTable(pair *list, uint16_t listSize);





static void /*NodeC.neighborListC*/NeighborListC$0$RT$printTable(void );
#line 10
static void /*NodeC.neighborListC*/NeighborListC$0$RT$NeighborGotAdded(uint8_t element);


static uint8_t /*NodeC.neighborListC*/NeighborListC$0$RT$cstFromDst(uint8_t dest);
#line 9
static void /*NodeC.neighborListC*/NeighborListC$0$RT$updateTable(uint8_t *payld, uint8_t source);
#line 7
static void /*NodeC.neighborListC*/NeighborListC$0$RT$writeToPayload(uint8_t *payld, uint8_t neigbr);
static void /*NodeC.neighborListC*/NeighborListC$0$RT$NeighborGotDeleted(uint8_t element);



static uint8_t /*NodeC.neighborListC*/NeighborListC$0$RT$nxtHopFrmDst(uint8_t dest);
# 8 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
uint16_t /*NodeC.neighborListC*/NeighborListC$0$MAX_SIZE[1000];

pair /*NodeC.neighborListC*/NeighborListC$0$container[1000][30];
uint16_t /*NodeC.neighborListC*/NeighborListC$0$size[1000];




static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$pushback(pair input);
#line 48
static inline pair /*NodeC.neighborListC*/NeighborListC$0$NeighborList$popback(void );






static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$clearAll(void );
#line 90
static inline uint16_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$size(void );



static inline pair /*NodeC.neighborListC*/NeighborListC$0$NeighborList$get(uint16_t position);



static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$delete(uint16_t position);






static bool /*NodeC.neighborListC*/NeighborListC$0$NeighborList$neighborsContains(uint8_t toFind);
#line 120
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printNeighbors(void );








static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$decrementNeighborPing(void );
#line 142
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$refreshNeighbors(void );








static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$deleteNeighbor(uint8_t toDelete);
#line 168
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$incrementANeighbor(uint8_t toIncr);








static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$populateRoutingTable(void );





static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$writeToPayloadFromRoutingTable(uint8_t *payld, uint8_t neighbor);


static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$updateRoutingTable(uint8_t *payld, uint8_t source);



static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printRoutingTable(void );



static inline uint8_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$nextHopFromDest(uint8_t dest);



static inline uint8_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$costFromDest(uint8_t dest);
# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4342 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4343 {
#line 74
  AlarmToTimerC$0$fired = 3U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c753a8);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4344 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 4U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4345 {

  VirtualizeTimerC$0$NUM_TIMERS = 4U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4346 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);









static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 17 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
static bool /*NodeC.RoutTableC*/RoutingTableC$0$NeighborList$neighborsContains(uint8_t toFind);
# 6 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
dvr /*NodeC.RoutTableC*/RoutingTableC$0$table[1000][20];
uint16_t /*NodeC.RoutTableC*/RoutingTableC$0$MAX_SIZE[1000];
uint16_t /*NodeC.RoutTableC*/RoutingTableC$0$size[1000];





static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$populateTable(pair *list, uint16_t listSize);
#line 43
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$pushback(dvr element);






static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$writeToPayload(uint8_t *payld, uint8_t neigbr);
#line 69
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotDeleted(uint8_t element);









static uint8_t /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$nxtHopFrmDst(uint8_t dest);









static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$updateTable(uint8_t *payld, uint8_t source);
#line 141
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotAdded(uint8_t element);



static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$printTable(void );










static uint8_t /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$cstFromDst(uint8_t dest);
# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
#line 69
static uint32_t RandomMlcgC$Random$rand32(void );
#line 89
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 97 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
SimpleSendP$Pool$t * 


SimpleSendP$Pool$get(void );
#line 61
static bool SimpleSendP$Pool$empty(void );
#line 89
static error_t SimpleSendP$Pool$put(
#line 85
SimpleSendP$Pool$t * newVal);
# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
SimpleSendP$Queue$t  

SimpleSendP$Queue$head(void );
#line 90
static error_t SimpleSendP$Queue$enqueue(
#line 86
SimpleSendP$Queue$t  newVal);
#line 81
static 
#line 79
SimpleSendP$Queue$t  

SimpleSendP$Queue$dequeue(void );
#line 50
static bool SimpleSendP$Queue$empty(void );
# 126 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 123
void * 


SimpleSendP$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t SimpleSendP$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t SimpleSendP$Random$rand16(void );
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SimpleSendP$sendBufferTask$postTask(void );
# 92 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool SimpleSendP$sendTimer$isRunning(void );
#line 73
static void SimpleSendP$sendTimer$startOneShot(uint32_t dt);
# 58 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
enum SimpleSendP$__nesc_unnamed4347 {
#line 58
  SimpleSendP$sendBufferTask = 5U
};
#line 58
typedef int SimpleSendP$__nesc_sillytask_sendBufferTask[SimpleSendP$sendBufferTask];
#line 28
bool SimpleSendP$busy[1000];
message_t SimpleSendP$pkt[1000];

static inline error_t SimpleSendP$send(uint16_t src, uint16_t dest, pack *message);

static void SimpleSendP$postSendTask(void );





static error_t SimpleSendP$SimpleSend$send(pack msg, uint16_t dest);
#line 58
static inline void SimpleSendP$sendBufferTask$runTask(void );
#line 76
static inline void SimpleSendP$sendTimer$fired(void );
#line 91
static inline error_t SimpleSendP$send(uint16_t src, uint16_t dest, pack *message);
#line 111
static inline void SimpleSendP$AMSend$sendDone(message_t *msg, error_t error);
# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40d44730, 
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 46 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40d47cb0, 
# 96 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4348 {
#line 126
  AMQueueImplP$0$CancelTask = 6U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4349 {
#line 169
  AMQueueImplP$0$errorTask = 7U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4350 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/system/PoolP.nc"
uint8_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[1000];
uint8_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[1000];
/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t * /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[1000][30];
/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[1000][30];

static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init(void );









static inline bool /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty(void );
#line 88
static inline /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t */*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get(void );
#line 103
static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t *newVal);
# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/system/QueueC.nc"
/*SimpleSendC.QueueC*/QueueC$0$queue_t  /*SimpleSendC.QueueC*/QueueC$0$queue[1000][30];
uint8_t /*SimpleSendC.QueueC*/QueueC$0$head[1000];
uint8_t /*SimpleSendC.QueueC*/QueueC$0$tail[1000];
uint8_t /*SimpleSendC.QueueC*/QueueC$0$size[1000];

static inline bool /*SimpleSendC.QueueC*/QueueC$0$Queue$empty(void );



static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$size(void );



static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize(void );



static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$head(void );



static void /*SimpleSendC.QueueC*/QueueC$0$printQueue(void );
#line 85
static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 97
static inline error_t /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(/*SimpleSendC.QueueC*/QueueC$0$queue_t newVal);
# 17 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
static void TransportP$Appy$handleListUsr(pack *package);
#line 15
static void TransportP$Appy$handleWisp(pack *package);



static void TransportP$Appy$initializeUsers(void );
#line 8
static appData *TransportP$Appy$getBufferAddr(void );



static void TransportP$Appy$handleTestClient(pack *package);

static void TransportP$Appy$handleHello(pack *package);






static uint16_t TransportP$Appy$getCN(void );
#line 16
static void TransportP$Appy$handleMsg(pack *package);
#line 11
static void TransportP$Appy$handleTestServer(pack *package);

static void TransportP$Appy$handleTestClientEnd(pack *package);






static void TransportP$Appy$insertFD(uint16_t fd);
#line 18
static void TransportP$Appy$processData(socket_addr_t sockAddr, uint16_t sequence);
# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportP$synTimer$startOneShot(uint32_t dt);
# 10 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
static void TransportP$FloodSend$HistoryPushBack(pair one);
#line 4
static void TransportP$FloodSend$handlePing(pack *myMsg, pair one);
static void TransportP$FloodSend$handlePingReply(pack *myMsg, pair one);
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t TransportP$update$postTask(void );
# 36 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
enum TransportP$__nesc_unnamed4351 {
#line 36
  TransportP$update = 8U
};
#line 36
typedef int TransportP$__nesc_sillytask_update[TransportP$update];
#line 18
appData *TransportP$buffers[1000];
uint8_t TransportP$congPack[1000];
transport TransportP$tcpPack[1000];


pack TransportP$sendPackage[1000];
pair TransportP$one[1000];

socket_t TransportP$newSock[1000];
socket_storage_t TransportP$sockList[1000][12];
uint8_t TransportP$size[1000];
uint32_t TransportP$EstimatedRTT[1000];
uint32_t TransportP$SampleRTT[1000];
uint8_t TransportP$numSent[1000];
uint8_t TransportP$numRec[1000];
error_t TransportP$handle[1000];
uint8_t TransportP$repeat[1000][12];
uint8_t TransportP$repeat2[1000][12];

static inline void TransportP$printSendBuffer(uint16_t fd);
static void TransportP$printRecBuffer(uint16_t fd);

static void TransportP$makeTcpPacket(transport *tcpPacket, uint8_t srcPort, uint8_t destPort, uint16_t seq, uint16_t ack, uint8_t flags, uint8_t window, uint8_t length, uint8_t *payload);
static void TransportP$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
static inline socket_t TransportP$searchNewSock_listen(socket_addr_t *addr);

static error_t TransportP$Transport$bind(socket_t fd, socket_addr_t *addr);
#line 86
static inline socket_t TransportP$Transport$accept(socket_t fd, socket_addr_t *addr);
#line 128
static uint16_t TransportP$Transport$write(uint16_t fd, uint8_t *buff, uint16_t bufflen);
#line 160
static error_t TransportP$Transport$receive(pack *package);
#line 622
static uint16_t TransportP$Transport$read(uint16_t fd, uint8_t *buff, uint16_t bufflen);
#line 643
static inline uint16_t TransportP$Transport$listen(socket_t fd);




static error_t TransportP$Transport$connect(socket_t fd, socket_addr_t *addr);
#line 664
static inline error_t TransportP$Transport$close(socket_t fd);
#line 677
static socket_t TransportP$Transport$socket(void );
#line 696
static error_t TransportP$Transport$release(socket_t fd);







static inline void TransportP$Transport$initUpdateTimer(void );
#line 718
static void TransportP$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);







static void TransportP$makeTcpPacket(transport *tcpPacket, uint8_t srcPort, uint8_t destPort, uint16_t seq, uint16_t ack, uint8_t flags, uint8_t window, uint8_t length, uint8_t *payload);
#line 738
static inline socket_t TransportP$searchNewSock_listen(socket_addr_t *addr);
#line 754
static socket_t TransportP$Transport$searchNewSock_default(socket_addr_t *addr);
#line 775
static inline void TransportP$update$runTask(void );
#line 1010
static inline void TransportP$synTimer$fired(void );
#line 1030
static inline void TransportP$printSendBuffer(uint16_t fd);
#line 1043
static void TransportP$printRecBuffer(uint16_t fd);
#line 1055
static void TransportP$Transport$resetRecBuff(uint16_t fd);








static void TransportP$Transport$resetSendBuff(uint16_t fd);
# 20 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
static socket_t AppyP$Transport$searchNewSock_default(socket_addr_t *addr);
#line 11
static uint16_t AppyP$Transport$listen(socket_t fd);









static void AppyP$Transport$resetRecBuff(uint16_t fd);
#line 5
static error_t AppyP$Transport$bind(socket_t fd, socket_addr_t *addr);










static socket_t AppyP$Transport$socket(void );





static void AppyP$Transport$resetSendBuff(uint16_t fd);
#line 13
static error_t AppyP$Transport$connect(socket_t fd, socket_addr_t *addr);
#line 7
static uint16_t AppyP$Transport$write(uint16_t fd, uint8_t *buff, uint16_t bufflen);






static error_t AppyP$Transport$close(socket_t fd);
# 13 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
appData AppyP$buffers[1000][12];
cmdHist AppyP$commandHistory[1000][10];
userMap AppyP$users[1000][7];
uint16_t AppyP$usrSiz[1000];
uint16_t AppyP$chSiz[1000];
uint16_t AppyP$commandNum[1000];
static inline void AppyP$endlessWrite(uint16_t location, uint16_t length);
static inline uint16_t AppyP$addUser(uint8_t *user, uint16_t fd);
static uint16_t AppyP$findFDFromUsr(uint8_t *usr);
static uint16_t AppyP$findCNHist(uint16_t inputFd, uint16_t inputSN);
static void AppyP$insertCNHist(uint16_t inputFd, uint16_t inputSN);



static inline appData *AppyP$Appy$getBufferAddr(void );





static inline void AppyP$Appy$handleTestServer(pack *package);
#line 61
static inline void AppyP$Appy$handleTestClient(pack *package);
#line 120
static inline void AppyP$Appy$handleTestClientEnd(pack *package);
#line 152
static inline void AppyP$Appy$handleHello(pack *package);
#line 219
static inline void AppyP$Appy$handleWisp(pack *package);
#line 293
static inline void AppyP$Appy$handleMsg(pack *package);
#line 355
static inline void AppyP$Appy$handleListUsr(pack *package);
#line 399
static void AppyP$Appy$processData(socket_addr_t sockAddr, uint16_t sequence);
#line 623
static inline void AppyP$endlessWrite(uint16_t location, uint16_t length);





static inline uint16_t AppyP$addUser(uint8_t *user, uint16_t fd);
#line 653
static uint16_t AppyP$findFDFromUsr(uint8_t *usr);
#line 678
static inline void AppyP$Appy$initializeUsers(void );
#line 692
static inline void AppyP$Appy$insertFD(uint16_t fd);


static inline uint16_t AppyP$Appy$getCN(void );


static uint16_t AppyP$findCNHist(uint16_t inputFd, uint16_t inputSN);








static void AppyP$insertCNHist(uint16_t inputFd, uint16_t inputSN);
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(136U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 185
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 185
{
  return 64;
}

# 88 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$amAddress(void )
#line 88
{
  return ActiveMessageAddressC$ActiveMessageAddress$amAddress();
}

# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 136
{
  return TossimActiveMessageC$amAddress();
}

#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 310
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 4 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$handlePing(pack *myMsg, pair one){
#line 4
  FloodSendP$FloodSend$handlePing(myMsg, one);
#line 4
}
#line 4
# 17 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static bool /*NodeC.RoutTableC*/RoutingTableC$0$NeighborList$neighborsContains(uint8_t toFind){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*NodeC.neighborListC*/NeighborListC$0$NeighborList$neighborsContains(toFind);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 89 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$updateTable(uint8_t *payld, uint8_t source)
#line 89
{

  uint8_t msgSize;
  dvrTransmission *iter;
  dvr toAdd;
  uint16_t i;
  uint16_t j;
  uint8_t newCost;
  uint8_t foundDest;

#line 98
  msgSize = payld[0];

  iter = payld + 1;
  if (/*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()] != 0) {
      for (i = 0; i < (uint16_t )msgSize; i++) {
          if (TOS_NODE_ID != iter[i].dest) {
              foundDest = 0;
              newCost = iter[i].cost + /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$cstFromDst(source);
              if (newCost >= 16) {
                  newCost = 16;
                }
              for (j = 0; j < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; j++) {

                  if (iter[i].dest == /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].dest) {
                      if (newCost == 16 && source == /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].nextHop && !/*NodeC.RoutTableC*/RoutingTableC$0$NeighborList$neighborsContains(iter[i].dest)) {
                          /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].cost = 16;
                          foundDest = 1;
                        }
                      else {
#line 116
                        if (newCost < /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].cost) {
                            /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].cost = newCost;
                            /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].nextHop = source;
                            foundDest = 1;
                          }
                        else {
#line 121
                          if (newCost >= /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].cost) {
                              foundDest = 1;
                            }
                          }
                        }
                    }
                }
#line 126
              if (foundDest == 0) {
                  toAdd.dest = iter[i].dest;
                  toAdd.cost = newCost;
                  toAdd.nextHop = source;
                  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$pushback(toAdd);
                }
            }
        }
    }
}

# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static void /*NodeC.neighborListC*/NeighborListC$0$RT$updateTable(uint8_t *payld, uint8_t source){
#line 9
  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$updateTable(payld, source);
#line 9
}
#line 9
# 186 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$updateRoutingTable(uint8_t *payld, uint8_t source)
#line 186
{
  /*NodeC.neighborListC*/NeighborListC$0$RT$updateTable(payld, source);
}

# 28 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$updateRoutingTable(uint8_t *payld, uint8_t source){
#line 28
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$updateRoutingTable(payld, source);
#line 28
}
#line 28
# 17 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$handleDV(pack *myMsg)
#line 17
{
  FloodSendP$neighborList$updateRoutingTable(myMsg->payload, __nesc_ntoh_uint16(myMsg->src.nxdata));
}

# 24 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$handleDV(pack *myMsg){
#line 24
  FloodSendP$FloodSend$handleDV(myMsg);
#line 24
}
#line 24
#line 5
inline static void Node$FS$handlePingReply(pack *myMsg, pair one){
#line 5
  FloodSendP$FloodSend$handlePingReply(myMsg, one);
#line 5
}
#line 5
# 145 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$printTable(void )
#line 145
{
  uint16_t i = 0;

#line 147
  sim_log_debug(221U, "Project2DV", " Routing Table: \n");
  sim_log_debug(222U, "Project2DV", "Dest\tHop\tCount\n");
  for (i = 0; i < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; i++) {
      sim_log_debug(223U, "Project2DV", "%d\t%d\t%d\n", /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].dest, /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].nextHop, /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].cost);
    }
}

# 11 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static void /*NodeC.neighborListC*/NeighborListC$0$RT$printTable(void ){
#line 11
  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$printTable();
#line 11
}
#line 11
# 190 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printRoutingTable(void )
#line 190
{
  /*NodeC.neighborListC*/NeighborListC$0$RT$printTable();
}

# 29 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$printRoutingTable(void ){
#line 29
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printRoutingTable();
#line 29
}
#line 29
# 132 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$printRT(void )
#line 132
{
  FloodSendP$neighborList$printRoutingTable();
}

# 23 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$printRT(void ){
#line 23
  FloodSendP$FloodSend$printRT();
#line 23
}
#line 23
# 120 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printNeighbors(void )
#line 120
{
  uint16_t i = 0;

#line 122
  sim_log_debug(191U, "Project2DV", " printing neighbors: ");
  for (i = 0; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; i++) {
      sim_log_debug_clear(192U, "Project2DV", "[ %d, p %d ]", /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].src, /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].seq);
    }

  sim_log_debug_clear(193U, "Project2DV", "\n");
}

# 18 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$printNeighbors(void ){
#line 18
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$printNeighbors();
#line 18
}
#line 18
# 107 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$NeighborPrintNeighbors(void )
#line 107
{
  FloodSendP$neighborList$printNeighbors();
}

# 12 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$NeighborPrintNeighbors(void ){
#line 12
  FloodSendP$FloodSend$NeighborPrintNeighbors();
#line 12
}
#line 12
# 6 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/HistoryList.nc"
inline static void FloodSendP$histList$pushback(pair input){
#line 6
  /*NodeC.HistListC*/HistoryListC$0$HistoryList$pushback(input);
#line 6
}
#line 6
# 101 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$HistoryPushBack(pair one)
#line 101
{
  FloodSendP$histList$pushback(one);
}

# 10 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$HistoryPushBack(pair one){
#line 10
  FloodSendP$FloodSend$HistoryPushBack(one);
#line 10
}
#line 10
# 8 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static error_t Node$TR$receive(pack *package){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = TransportP$Transport$receive(package);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 335 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline void Node$makePair(pair *pear, uint8_t src, uint8_t seq)
#line 335
{
  pear->src = src;
  pear->seq = seq;
}

# 222 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 189 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
}

# 136 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t Node$periodicTimer$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(0U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 92 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline message_t *Node$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 92
{







  if (len == sizeof(pack )) {
      pack *myMsg = (pack *)payload;

#line 102
      if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == AM_BROADCAST_ADDR) {
          sim_log_debug(179U, "proj1N", " TTL no %d, src no %d, seq no %d, dest no %d time no %d\n", __nesc_ntoh_uint8(myMsg->TTL.nxdata), __nesc_ntoh_uint16(myMsg->src.nxdata), __nesc_ntoh_uint16(myMsg->seq.nxdata), __nesc_ntoh_uint16(myMsg->dest.nxdata), Node$periodicTimer$getNow());
        }
      else {
          sim_log_debug(180U, "genDebug", " TTL no %d, src no %d, seq no %d, dest no %d time no %d\n", __nesc_ntoh_uint8(myMsg->TTL.nxdata), __nesc_ntoh_uint16(myMsg->src.nxdata), __nesc_ntoh_uint16(myMsg->seq.nxdata), __nesc_ntoh_uint16(myMsg->dest.nxdata), Node$periodicTimer$getNow());
        }
      Node$makePair(&Node$one[sim_node()], (uint8_t )__nesc_ntoh_uint16(myMsg->src.nxdata), (uint8_t )__nesc_ntoh_uint16(myMsg->seq.nxdata));
      if (TOS_NODE_ID == __nesc_ntoh_uint16(myMsg->dest.nxdata)) {
          sim_log_debug(181U, "genDebug", "Packet from %d has arrived! Msg: %s \n", __nesc_ntoh_uint16(myMsg->src.nxdata), myMsg->payload);
          switch (__nesc_ntoh_uint8(myMsg->protocol.nxdata)) {
              uint8_t createMsg[PACKET_MAX_PAYLOAD_SIZE];
              uint16_t dest;

              case PROTOCOL_TCP: 
                Node$handle[sim_node()] = Node$TR$receive(myMsg);
              break;

              case PROTOCOL_PING: 
                if (__nesc_ntoh_uint8(myMsg->TTL.nxdata) >= 1) {
#line 138
                    sim_log_debug(182U, "genDebug", "Sending Ping Reply to %d! \n", __nesc_ntoh_uint16(myMsg->src.nxdata));


                    Node$makePack(&Node$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(myMsg->src.nxdata), MAX_TTL, 
                    PROTOCOL_PINGREPLY, __nesc_ntoh_uint16(myMsg->seq.nxdata), (uint8_t *)myMsg->payload, sizeof  myMsg->payload);

                    Node$FS$HistoryPushBack(Node$one[sim_node()]);


                    Node$FS$handlePingReply(&Node$sendPackage[sim_node()], Node$one[sim_node()]);
                  }
#line 163
              break;

              case PROTOCOL_PINGREPLY: 
#line 183
                Node$makePair(&Node$one[sim_node()], (uint8_t )__nesc_ntoh_uint16(myMsg->src.nxdata), (uint8_t )__nesc_ntoh_uint16(myMsg->seq.nxdata));
              sim_log_debug(183U, "genDebug", "Received a Ping Reply from %d!\n", __nesc_ntoh_uint16(myMsg->src.nxdata));
              Node$FS$HistoryPushBack(Node$one[sim_node()]);

              break;

              case PROTOCOL_CMD: 
                Node$handle[sim_node()] = Node$TR$receive(myMsg);
              if (Node$handle[sim_node()] == FAIL) {
                  switch (getCMD((uint8_t *)& myMsg->payload, sizeof  myMsg->payload)) {

                      case CMD_PING: 
                        memcpy(&createMsg, myMsg->payload + CMD_LENGTH + 1, sizeof  myMsg->payload - CMD_LENGTH + 1);
                      memcpy(&dest, myMsg->payload + CMD_LENGTH, sizeof(uint8_t ));
                      Node$makePack(&Node$sendPackage[sim_node()], TOS_NODE_ID, (dest - 48) & 0x00FF, 
                      MAX_TTL, PROTOCOL_PING, Node$seqNO[sim_node()]++, (uint8_t *)createMsg, sizeof createMsg);

                      Node$FS$HistoryPushBack(Node$one[sim_node()]);

                      Node$FS$handlePing(&Node$sendPackage[sim_node()], Node$one[sim_node()]);
                      break;

                      case CMD_NEIGHBOR_DUMP: 
                        Node$FS$NeighborPrintNeighbors();

                      break;
                      case CMD_ROUTETABLE_DUMP: 
                        Node$FS$printRT();
                      break;
#line 274
                      default: 
                        break;
                    }
                }
              break;

              default: 
                break;
            }
        }
      else {
          switch (__nesc_ntoh_uint8(myMsg->protocol.nxdata)) {

              case PROTOCOL_PING: 
                Node$FS$handlePing(myMsg, Node$one[sim_node()]);
              break;
              case PROTOCOL_PINGREPLY: 
                Node$FS$handlePingReply(myMsg, Node$one[sim_node()]);
              break;
              case PROTOCOL_DISTANCE_VECTOR: 
                Node$FS$handleDV(myMsg);


              break;
              case PROTOCOL_TCP: 
                Node$FS$handlePing(myMsg, Node$one[sim_node()]);
              break;
              default: 
                sim_log_debug(184U, "genDebug", "protocol %s\n", __nesc_ntoh_uint8(myMsg->protocol.nxdata));
              break;
            }
        }

      return msg;
    }

  sim_log_debug(185U, "genDebug", "Unknown Packet Type \n");
  return msg;
}

# 212 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x408ddb08, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x408ddb08) {
#line 78
    case 6:
#line 78
      __nesc_result = Node$Receive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC$Receive$default$receive(arg_0x408ddb08, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 127 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4321 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 33 "/home/ubuntu/workspace/Proj1Test/src/command.h"
static inline bool isPing(uint8_t *array, uint8_t size)
#line 33
{
  if (array[0] == CMD_PING) {
#line 34
    return TRUE;
    }
#line 35
  return FALSE;
}

#line 37
static inline bool isNgbrdmp(uint8_t *array, uint8_t size)
#line 37
{
  if (array[0] == CMD_NEIGHBOR_DUMP) {
#line 38
    return TRUE;
    }
#line 39
  return FALSE;
}

#line 41
static inline bool isRTdmp(uint8_t *array, uint8_t size)
#line 41
{
  if (array[0] == CMD_ROUTETABLE_DUMP) {
#line 42
    return TRUE;
    }
#line 43
  return FALSE;
}

#line 45
static inline bool isTstSrvr(uint8_t *array, uint8_t size)
#line 45
{
  if (array[0] == CMD_TEST_SERVER) {

      return TRUE;
    }
  return FALSE;
}

#line 52
static inline bool isTstClnt(uint8_t *array, uint8_t size)
#line 52
{
  if (array[0] == CMD_TEST_CLIENT) {
      return TRUE;
    }
  return FALSE;
}

#line 58
static inline bool isTstClntEnd(uint8_t *array, uint8_t size)
#line 58
{
  if (array[0] == CMD_TEST_CLIENT_END) {
      return TRUE;
    }
  return FALSE;
}

static inline bool isHello(uint8_t *array, uint8_t size)
#line 65
{
  if (array[0] == CMD_HELLO) {
      return TRUE;
    }
  return FALSE;
}

static inline bool isWisp(uint8_t *array, uint8_t size)
#line 72
{
  if (array[0] == CMD_WISP) {
      return TRUE;
    }
  return FALSE;
}

static inline bool isMsg(uint8_t *array, uint8_t size)
#line 79
{
  if (array[0] == CMD_MSG) {
      return TRUE;
    }
  return FALSE;
}

static inline bool isListUsr(uint8_t *array, uint8_t size)
#line 86
{
  if (array[0] == CMD_LISTUSR) {
      return TRUE;
    }
  return FALSE;
}

# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 643 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline uint16_t TransportP$Transport$listen(socket_t fd)
#line 643
{
  TransportP$sockList[sim_node()][(uint16_t )fd].state = SOCK_LISTEN;
  return 0;
}

# 11 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static uint16_t AppyP$Transport$listen(socket_t fd){
#line 11
  unsigned short __nesc_result;
#line 11

#line 11
  __nesc_result = TransportP$Transport$listen(fd);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
#line 5
inline static error_t AppyP$Transport$bind(socket_t fd, socket_addr_t *addr){
#line 5
  unsigned char __nesc_result;
#line 5

#line 5
  __nesc_result = TransportP$Transport$bind(fd, addr);
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
#line 16
inline static socket_t AppyP$Transport$socket(void ){
#line 16
  unsigned short __nesc_result;
#line 16

#line 16
  __nesc_result = TransportP$Transport$socket();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 33 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$handleTestServer(pack *package)
#line 33
{
  uint8_t *cmdParams;
  uint8_t portDest;
  socket_t sock2;
  socket_addr_t tempAddr2;
  uint16_t listenHandle;
  error_t handle;

#line 40
  cmdParams = package->payload + CMD_LENGTH;
  portDest = (cmdParams[0] - 48) & 0x00FF;
  sim_log_debug(320U, "Project3TDbg", "Start server port %d\n", portDest);


  sock2 = AppyP$Transport$socket();

  __nesc_hton_uint16(tempAddr2.destAddr.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(tempAddr2.destPort.nxdata, portDest);
  __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, 0);
  __nesc_hton_uint8(tempAddr2.srcPort.nxdata, 0);

  handle = AppyP$Transport$bind(sock2, &tempAddr2);
  listenHandle = AppyP$Transport$listen(sock2);
}

# 11 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleTestServer(pack *package){
#line 11
  AppyP$Appy$handleTestServer(package);
#line 11
}
#line 11
# 27 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline appData *AppyP$Appy$getBufferAddr(void )
#line 27
{
  return AppyP$buffers[sim_node()];
}

# 8 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static appData *TransportP$Appy$getBufferAddr(void ){
#line 8
  struct appData *__nesc_result;
#line 8

#line 8
  __nesc_result = AppyP$Appy$getBufferAddr();
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 13 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static error_t AppyP$Transport$connect(socket_t fd, socket_addr_t *addr){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = TransportP$Transport$connect(fd, addr);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
#line 7
inline static uint16_t AppyP$Transport$write(uint16_t fd, uint8_t *buff, uint16_t bufflen){
#line 7
  unsigned short __nesc_result;
#line 7

#line 7
  __nesc_result = TransportP$Transport$write(fd, buff, bufflen);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 623 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$endlessWrite(uint16_t location, uint16_t length)
#line 623
{
  uint16_t i;

#line 625
  for (i = 0; i < length; i++) {
      AppyP$buffers[sim_node()][location].data[i] = i;
    }
}

#line 61
static inline void AppyP$Appy$handleTestClient(pack *package)
#line 61
{
  uint8_t *cmdParams;
  uint8_t portDest;
  uint8_t portSrc;
  uint8_t dest;
  socket_t sock2;
  socket_addr_t tempAddr2;
  error_t handle;
  uint16_t transfer;
  appData *operator;
  uint16_t reference;

#line 72
  cmdParams = package->payload + CMD_LENGTH;
  dest = (cmdParams[0] - 48) & 0x00FF;
  portSrc = (cmdParams[1] - 48) & 0x00FF;
  portDest = (cmdParams[2] - 48) & 0x00FF;
  cmdParams = cmdParams + 3;
  transfer = 0;
  while (cmdParams[0] != 32) {

      transfer = transfer * 10;
      transfer = transfer + ((cmdParams[0] - 48) & 0x00FF);
      cmdParams = cmdParams + 1;
    }
  sim_log_debug(321U, "Project3TDbg", "sending SYN dest %d port %d transfer %d\n", dest, portDest, transfer);

  sock2 = AppyP$Transport$socket();

  __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(tempAddr2.destAddr.nxdata, dest);
  __nesc_hton_uint8(tempAddr2.srcPort.nxdata, portSrc);
  __nesc_hton_uint8(tempAddr2.destPort.nxdata, portDest);

  handle = AppyP$Transport$bind(sock2, &tempAddr2);

  AppyP$buffers[sim_node()][(uint16_t )sock2].length = transfer;



  operator = AppyP$buffers[sim_node()] + (uint16_t )sock2;
  AppyP$endlessWrite((uint16_t )sock2, transfer);

  AppyP$buffers[sim_node()][(uint16_t )sock2].marker = AppyP$Transport$write((uint16_t )sock2, operator->data, AppyP$buffers[sim_node()][(uint16_t )sock2].length * 2) / 2;


  sim_log_debug(322U, "Project3TDbg", "data\n");
  for (reference = 0; reference < transfer; reference++) {
      sim_log_debug_clear(323U, "Project3TDbg", " %d ", AppyP$buffers[sim_node()][(uint16_t )sock2].data[reference]);
    }
  sim_log_debug_clear(324U, "Project3TDbg", "\n");
  sim_log_debug(325U, "Project3TDbg", "data send buffer\n");






  handle = AppyP$Transport$connect(sock2, &tempAddr2);
}

# 12 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleTestClient(pack *package){
#line 12
  AppyP$Appy$handleTestClient(package);
#line 12
}
#line 12
# 1030 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline void TransportP$printSendBuffer(uint16_t fd)
#line 1030
{
  uint16_t i;

#line 1032
  i = 0;
  sim_log_debug(307U, "Project3TDbg", "SendBuffer\n");
  sim_log_debug(308U, "Project3TDbg", "lastByteWritten %d\n", TransportP$sockList[sim_node()][fd].lastByteWritten);
  sim_log_debug(309U, "Project3TDbg", "lastByteSent %d\n", TransportP$sockList[sim_node()][fd].lastByteSent);
  sim_log_debug(310U, "Project3TDbg", "lastByteAck %d\n", TransportP$sockList[sim_node()][fd].lastByteAck);
  sim_log_debug(311U, "Project3TDbg", "fd %d\n", fd);
  for (i = 0; i < SOCKET_SEND_BUFFER_SIZE; i++) {
      sim_log_debug_clear(312U, "Project3TDbg", " %d ", TransportP$sockList[sim_node()][fd].sendBuff[i]);
    }
  sim_log_debug_clear(313U, "Project3TDbg", "\n");
}

# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline bool /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty(void )
#line 75
{
  sim_log_debug(232U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]);
  return /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()] == 0;
}

# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static bool SimpleSendP$Pool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 88 "/home/ubuntu/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t */*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get(void )
#line 88
{
  if (/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]) {
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t *rval = /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()]];

#line 91
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()]] = (void *)0;
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]--;
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()]++;
      if (/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] == 30) {
          /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] = 0;
        }
      sim_log_debug(234U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static SimpleSendP$Pool$t * SimpleSendP$Pool$get(void ){
#line 97
  struct sendInfo *__nesc_result;
#line 97

#line 97
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 30;
}

#line 57
static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$size(void )
#line 57
{
  return /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()];
}

#line 97
static inline error_t /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(/*SimpleSendC.QueueC*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*SimpleSendC.QueueC*/QueueC$0$Queue$size() < /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize()) {
      sim_log_debug(242U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]);
      /*SimpleSendC.QueueC*/QueueC$0$queue[sim_node()][/*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()]] = newVal;
      /*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()]++;
      if (/*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()] == 30) {
#line 102
        /*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()] = 0;
        }
#line 103
      /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]++;
      /*SimpleSendC.QueueC*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static error_t SimpleSendP$Queue$enqueue(SimpleSendP$Queue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 169 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning;
}

# 92 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static bool SimpleSendP$sendTimer$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(3U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 73
inline static void SimpleSendP$sendTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 73
}
#line 73
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 89 "/home/ubuntu/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t SimpleSendP$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 12 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static uint8_t /*NodeC.neighborListC*/NeighborListC$0$RT$nxtHopFrmDst(uint8_t dest){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$nxtHopFrmDst(dest);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 194 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline uint8_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$nextHopFromDest(uint8_t dest)
#line 194
{
  return /*NodeC.neighborListC*/NeighborListC$0$RT$nxtHopFrmDst(dest);
}

# 30 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static uint8_t FloodSendP$neighborList$nextHopFromDest(uint8_t dest){
#line 30
  unsigned char __nesc_result;
#line 30

#line 30
  __nesc_result = /*NodeC.neighborListC*/NeighborListC$0$NeighborList$nextHopFromDest(dest);
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 13 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static uint8_t /*NodeC.neighborListC*/NeighborListC$0$RT$cstFromDst(uint8_t dest){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$cstFromDst(dest);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 198 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline uint8_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$costFromDest(uint8_t dest)
#line 198
{
  return /*NodeC.neighborListC*/NeighborListC$0$RT$cstFromDst(dest);
}

# 31 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static uint8_t FloodSendP$neighborList$costFromDest(uint8_t dest){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = /*NodeC.neighborListC*/NeighborListC$0$NeighborList$costFromDest(dest);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 4 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void TransportP$FloodSend$handlePing(pack *myMsg, pair one){
#line 4
  FloodSendP$FloodSend$handlePing(myMsg, one);
#line 4
}
#line 4
# 664 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline error_t TransportP$Transport$close(socket_t fd)
#line 664
{
  transport tcpPack3;
  pack sendPackage3;

#line 667
  if (fd == (uint16_t )-1) {
#line 667
      return FAIL;
    }
  else 
#line 668
    {
      TransportP$sockList[sim_node()][(uint16_t )fd].state = SOCK_FIN_WAIT_1;
      TransportP$makeTcpPacket(&tcpPack3, __nesc_ntoh_uint8(TransportP$sockList[sim_node()][(uint16_t )fd].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][(uint16_t )fd].sockAddr.destPort.nxdata), 0, 0, TRANSPORT_FIN, 0, 0, fd);
      TransportP$makePack(&sendPackage3, TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][(uint16_t )fd].sockAddr.destAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack3.seq.nxdata), &tcpPack3, sizeof tcpPack3);
      TransportP$FloodSend$handlePing(&sendPackage3, TransportP$one[sim_node()]);
    }
  return SUCCESS;
}

# 14 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static error_t AppyP$Transport$close(socket_t fd){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = TransportP$Transport$close(fd);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14






inline static socket_t AppyP$Transport$searchNewSock_default(socket_addr_t *addr){
#line 20
  unsigned short __nesc_result;
#line 20

#line 20
  __nesc_result = TransportP$Transport$searchNewSock_default(addr);
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 120 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$handleTestClientEnd(pack *package)
#line 120
{
  uint8_t *cmdParams;
  uint8_t portDest;
  uint8_t portSrc;
  uint8_t dest;
  socket_t sock2;
  socket_addr_t tempAddr2;
  error_t handle;
  uint16_t transfer;



  cmdParams = package->payload + CMD_LENGTH;
  dest = (cmdParams[0] - 48) & 0x00FF;
  portSrc = (cmdParams[1] - 48) & 0x00FF;
  portDest = (cmdParams[2] - 48) & 0x00FF;
  sim_log_debug(326U, "Project3TDbg", "sending FIN to dest %d port %d\n", dest, portDest);



  __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(tempAddr2.destAddr.nxdata, dest);
  __nesc_hton_uint8(tempAddr2.srcPort.nxdata, portSrc);
  __nesc_hton_uint8(tempAddr2.destPort.nxdata, portDest);

  sock2 = AppyP$Transport$searchNewSock_default(&tempAddr2);


  handle = AppyP$Transport$close(sock2);
}

# 13 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleTestClientEnd(pack *package){
#line 13
  AppyP$Appy$handleTestClientEnd(package);
#line 13
}
#line 13
# 629 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline uint16_t AppyP$addUser(uint8_t *user, uint16_t fd)
#line 629
{
  uint8_t *ptr;
  uint16_t i;

  i = 0;
  ptr = AppyP$users[sim_node()][AppyP$usrSiz[sim_node()]].userName;
  AppyP$users[sim_node()][AppyP$usrSiz[sim_node()]].fileDesc = fd;



  while (user[0] != 32) {
      ptr[0] = user[0];
      user = user + 1;
      ptr = ptr + 1;
      i++;
    }
  AppyP$usrSiz[sim_node()]++;
  while (i < 20) {
      ptr[0] = 32;
      ptr = ptr + 1;
      i++;
    }
  return AppyP$usrSiz[sim_node()] - 1;
}

#line 152
static inline void AppyP$Appy$handleHello(pack *package)
#line 152
{
  uint8_t *cmdParams;
  uint8_t portDest;
  uint8_t portSrc;
  uint8_t dest;

  socket_t sock2;
  socket_addr_t tempAddr2;
  error_t handle;
  uint8_t *wr;
  uint16_t usrIndx;
  uint16_t j;
  appData *operator;

#line 165
  AppyP$commandNum[sim_node()]++;
  cmdParams = package->payload + CMD_LENGTH;
  portSrc = (cmdParams[0] - 48) & 0x00FF;
  portDest = 41;
  dest = 1;
  cmdParams = cmdParams + 1;



  __nesc_hton_uint16(tempAddr2.destAddr.nxdata, dest);
  __nesc_hton_uint8(tempAddr2.destPort.nxdata, portDest);
  __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(tempAddr2.srcPort.nxdata, portSrc);

  sock2 = AppyP$Transport$socket();
  handle = AppyP$Transport$bind(sock2, &tempAddr2);

  usrIndx = AppyP$addUser(cmdParams, (uint16_t )sock2);

  wr = AppyP$buffers[sim_node()][(uint16_t )sock2].data;
  wr[0] = 'h';
  wr[1] = 'e';
  wr[2] = 'l';
  wr[3] = 'l';
  wr[4] = 'o';
  wr[5] = ' ';
  AppyP$buffers[sim_node()][(uint16_t )sock2].length = 6;
  wr = wr + 7 - 1;
  for (j = 0; j < 20; j++) {
      wr[j] = AppyP$users[sim_node()][usrIndx].userName[j];
    }
  AppyP$buffers[sim_node()][(uint16_t )sock2].length += 20;
  wr = wr + 20 + 1 - 1;
  wr[0] = ' ';
  wr = wr + 1;
  wr[0] = (uint16_t )sock2 + 48;


  wr[1] = '\r';

  wr[2] = '\n';
  wr[3] = 0;
  wr[4] = 0;

  sim_log_debug(327U, "Project3TDbg", "start command message: %s\n", AppyP$buffers[sim_node()][sock2].data);
  AppyP$buffers[sim_node()][(uint16_t )sock2].length += 6;
  AppyP$buffers[sim_node()][(uint16_t )sock2].length = AppyP$buffers[sim_node()][(uint16_t )sock2].length / 2;

  operator = AppyP$buffers[sim_node()] + (uint16_t )sock2;
  AppyP$buffers[sim_node()][(uint16_t )sock2].marker = AppyP$Transport$write((uint16_t )sock2, operator->data, AppyP$buffers[sim_node()][(uint16_t )sock2].length * 2) / 2;
  handle = AppyP$Transport$connect(sock2, &tempAddr2);
}

# 14 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleHello(pack *package){
#line 14
  AppyP$Appy$handleHello(package);
#line 14
}
#line 14
# 22 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static void AppyP$Transport$resetSendBuff(uint16_t fd){
#line 22
  TransportP$Transport$resetSendBuff(fd);
#line 22
}
#line 22
# 219 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$handleWisp(pack *package)
#line 219
{
  uint8_t sampleUsr[20];
  uint8_t *cmdParams;
  uint16_t i;


  uint16_t sock2;
  uint8_t *wr;
  appData *operator;

#line 228
  i = 0;
  AppyP$commandNum[sim_node()]++;
  cmdParams = package->payload + CMD_LENGTH;
  while (cmdParams[0] != 32) {
      sampleUsr[i] = cmdParams[0];
      cmdParams = cmdParams + 1;
      i++;
    }
  while (i < 20) {
      sampleUsr[i] = 32;
      i++;
    }
  cmdParams = cmdParams + 1;




  if (AppyP$usrSiz[sim_node()] != 0) {





      sock2 = AppyP$users[sim_node()][0].fileDesc;
      wr = AppyP$buffers[sim_node()][sock2].data;
      wr[0] = 'w';
      wr[1] = 'h';
      wr[2] = 'i';
      wr[3] = 's';
      wr[4] = 'p';
      wr[5] = 'e';
      wr[6] = 'r';
      wr[7] = ' ';
      wr = wr + 8;
      for (i = 0; i < 20; i++) {
          wr[i] = sampleUsr[i];
        }
      wr = wr + 20;
      wr[0] = ' ';
      wr = wr + 1;
      AppyP$Transport$resetSendBuff(sock2);
      AppyP$buffers[sim_node()][sock2].length = 8 + 20 + 1;
      while (!(cmdParams[0] == 13 && cmdParams[1] == 10)) {
          wr[0] = cmdParams[0];
          cmdParams = cmdParams + 1;
          wr = wr + 1;
          AppyP$buffers[sim_node()][sock2].length++;
        }
      if (AppyP$buffers[sim_node()][sock2].length % 2 != 0) {
          wr[0] = ' ';
          wr = wr + 1;
          AppyP$buffers[sim_node()][sock2].length++;
        }
      wr[0] = '\r';
      wr[1] = '\n';
      wr[2] = 0;
      wr[3] = 0;
      sim_log_debug(328U, "Project3TDbg", "start command message: %s\n", AppyP$buffers[sim_node()][sock2].data);
      AppyP$buffers[sim_node()][sock2].length += 4;
      AppyP$buffers[sim_node()][sock2].length = AppyP$buffers[sim_node()][sock2].length / 2;
      operator = AppyP$buffers[sim_node()] + sock2;

      AppyP$buffers[sim_node()][sock2].marker = AppyP$Transport$write((uint16_t )sock2, operator->data, AppyP$buffers[sim_node()][sock2].length * 2) / 2;
    }
}

# 15 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleWisp(pack *package){
#line 15
  AppyP$Appy$handleWisp(package);
#line 15
}
#line 15
# 293 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$handleMsg(pack *package)
#line 293
{
  uint8_t *cmdParams;

  uint16_t sock2;
  uint8_t *wr;
  uint16_t len;
  appData *operator;

#line 300
  sim_log_debug(329U, "Project3TDbg", "Are we even here?\n");
  AppyP$commandNum[sim_node()]++;
  cmdParams = package->payload + CMD_LENGTH;
  len = 0;
  if (AppyP$usrSiz[sim_node()] > 0) {
      sim_log_debug(330U, "Project3TDbg", "layer 1\n");






      sock2 = AppyP$users[sim_node()][0].fileDesc;


      sim_log_debug(331U, "Project3TDbg", "layer 2\n");

      wr = AppyP$buffers[sim_node()][sock2].data;
      wr[0] = 'm';
      wr[1] = 's';
      wr[2] = 'g';
      wr[3] = ' ';
      wr = wr + 4;
      while (!(cmdParams[0] == 13 && cmdParams[1] == 10)) {
          wr[0] = cmdParams[0];
          cmdParams = cmdParams + 1;
          wr = wr + 1;
          len++;
        }
      len = len + 4;
      if (len % 2 != 0) {
          wr[0] = ' ';
          wr = wr + 1;
          len++;
        }
      wr[0] = '\r';
      wr[1] = '\n';
      wr[2] = 0;
      wr[3] = 0;
      sim_log_debug(332U, "Project3TDbg", "start command message: %s\n", AppyP$buffers[sim_node()][sock2].data);

      AppyP$Transport$resetSendBuff(sock2);
      AppyP$buffers[sim_node()][sock2].length = len + 4;




      AppyP$buffers[sim_node()][sock2].length = AppyP$buffers[sim_node()][sock2].length / 2;
      operator = AppyP$buffers[sim_node()] + sock2;

      AppyP$buffers[sim_node()][sock2].marker = AppyP$Transport$write((uint16_t )sock2, operator->data, AppyP$buffers[sim_node()][sock2].length * 2) / 2;
    }
}

# 16 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleMsg(pack *package){
#line 16
  AppyP$Appy$handleMsg(package);
#line 16
}
#line 16
# 355 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$handleListUsr(pack *package)
#line 355
{

  socket_t sock2;
  uint8_t *wr;
  appData *operator;

#line 360
  sim_log_debug(333U, "Project3TDbg", "begin command listusr\n");
  AppyP$commandNum[sim_node()]++;
  if (AppyP$usrSiz[sim_node()] > 0) {
      sim_log_debug(334U, "Project3TDbg", "layer 1\n");






      sock2 = AppyP$users[sim_node()][0].fileDesc;


      sim_log_debug(335U, "Project3TDbg", "layer 2\n");

      wr = AppyP$buffers[sim_node()][sock2].data;
      wr[0] = 'l';
      wr[1] = 'i';
      wr[2] = 's';
      wr[3] = 't';
      wr[4] = 'u';
      wr[5] = 's';
      wr[6] = 'r';
      wr[7] = ' ';
      wr[8] = '\r';
      wr[9] = '\n';
      wr[10] = 0;
      wr[11] = 0;
      sim_log_debug(336U, "Project3TDbg", "start command message: %s\n", AppyP$buffers[sim_node()][sock2].data);
      AppyP$Transport$resetSendBuff(sock2);
      AppyP$buffers[sim_node()][sock2].length = 12;
      AppyP$buffers[sim_node()][sock2].length = AppyP$buffers[sim_node()][sock2].length / 2;
      operator = AppyP$buffers[sim_node()] + sock2;


      AppyP$buffers[sim_node()][sock2].marker = AppyP$Transport$write((uint16_t )sock2, operator->data, AppyP$buffers[sim_node()][sock2].length * 2) / 2;
    }
}

# 17 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$handleListUsr(pack *package){
#line 17
  AppyP$Appy$handleListUsr(package);
#line 17
}
#line 17
# 738 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline socket_t TransportP$searchNewSock_listen(socket_addr_t *addr)
#line 738
{
  uint16_t i;


  if (TransportP$size[sim_node()] == 0) {
      return -1;
    }
  for (i = 0; i < TransportP$size[sim_node()]; i++) {

      if (__nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata) == 0 && __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata) == 0 && __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata) == __nesc_ntoh_uint8(addr->destPort.nxdata)) {
          return (socket_t )i;
        }
    }
  return -1;
}

# 5 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void TransportP$FloodSend$handlePingReply(pack *myMsg, pair one){
#line 5
  FloodSendP$FloodSend$handlePingReply(myMsg, one);
#line 5
}
#line 5





inline static void TransportP$FloodSend$HistoryPushBack(pair one){
#line 10
  FloodSendP$FloodSend$HistoryPushBack(one);
#line 10
}
#line 10
# 692 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$insertFD(uint16_t fd)
#line 692
{
  AppyP$users[sim_node()][AppyP$usrSiz[sim_node()]].fileDesc = fd;
}

# 20 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$insertFD(uint16_t fd){
#line 20
  AppyP$Appy$insertFD(fd);
#line 20
}
#line 20
# 86 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline socket_t TransportP$Transport$accept(socket_t fd, socket_addr_t *addr)
#line 86
{

  transport tcpPack3;
  pack sendPackage3;

#line 90
  if (fd == (uint16_t )-1) {
      TransportP$makeTcpPacket(&tcpPack3, __nesc_ntoh_uint8(addr->srcPort.nxdata), __nesc_ntoh_uint8(addr->destPort.nxdata), 0, 0, TRANSPORT_FIN, 0, 0, &TransportP$repeat[sim_node()]);
      TransportP$makePack(&sendPackage3, TOS_NODE_ID, __nesc_ntoh_uint16(addr->srcAddr.nxdata), MAX_TTL, 
      PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack3.seq.nxdata), &tcpPack3, sizeof tcpPack3);

      TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


      TransportP$FloodSend$handlePingReply(&sendPackage3, TransportP$one[sim_node()]);
      return NULL_SOCKET;
    }

  if (TransportP$sockList[sim_node()][(uint16_t )fd].state == SOCK_LISTEN) {
      TransportP$newSock[sim_node()] = TransportP$Transport$socket();
      TransportP$handle[sim_node()] = TransportP$Transport$bind(TransportP$newSock[sim_node()], addr);
      TransportP$sockList[sim_node()][(uint16_t )TransportP$newSock[sim_node()]].state = SOCK_SYN_RCVD;
      TransportP$makeTcpPacket(&tcpPack3, __nesc_ntoh_uint8(addr->srcPort.nxdata), __nesc_ntoh_uint8(addr->destPort.nxdata), 0, 0, TRANSPORT_SYN | TRANSPORT_ACK, 0, 0, &TransportP$repeat[sim_node()]);
      TransportP$makePack(&sendPackage3, TOS_NODE_ID, __nesc_ntoh_uint16(addr->srcAddr.nxdata), MAX_TTL, 
      PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack3.seq.nxdata), &tcpPack3, sizeof tcpPack3);

      TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


      TransportP$Appy$insertFD((uint16_t )TransportP$newSock[sim_node()]);
      TransportP$FloodSend$handlePingReply(&sendPackage3, TransportP$one[sim_node()]);
      return TransportP$newSock[sim_node()];
    }

  TransportP$makeTcpPacket(&tcpPack3, __nesc_ntoh_uint8(addr->srcPort.nxdata), __nesc_ntoh_uint8(addr->destPort.nxdata), 0, 0, TRANSPORT_FIN, 0, 0, &TransportP$repeat[sim_node()]);
  TransportP$makePack(&sendPackage3, TOS_NODE_ID, __nesc_ntoh_uint16(addr->srcAddr.nxdata), MAX_TTL, 
  PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack3.seq.nxdata), &tcpPack3, sizeof tcpPack3);

  TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


  TransportP$FloodSend$handlePingReply(&sendPackage3, TransportP$one[sim_node()]);
  return NULL_SOCKET;
}

# 17 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static bool FloodSendP$neighborList$neighborsContains(uint8_t toFind){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*NodeC.neighborListC*/NeighborListC$0$NeighborList$neighborsContains(toFind);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 91 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$makePair(pair *pear, uint8_t src, uint8_t seq)
#line 91
{
  pear->src = src;
  pear->seq = seq;
}

# 141 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotAdded(uint8_t element)
#line 141
{
}

# 10 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static void /*NodeC.neighborListC*/NeighborListC$0$RT$NeighborGotAdded(uint8_t element){
#line 10
  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotAdded(element);
#line 10
}
#line 10
# 16 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$pushback(pair input)
#line 16
{

  /*NodeC.neighborListC*/NeighborListC$0$RT$NeighborGotAdded(input.src);

  if (/*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] < /*NodeC.neighborListC*/NeighborListC$0$MAX_SIZE[sim_node()]) {
      /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][/*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]] = input;
      /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]++;
    }
  else {
      uint16_t i;

#line 26
      for (i = 0; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] - 1; i++) {
          /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i] = /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i + 1];
        }
      /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][/*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] - 1] = input;
    }
}

# 7 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$pushback(pair input){
#line 7
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$pushback(input);
#line 7
}
#line 7
# 168 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$incrementANeighbor(uint8_t toIncr)
#line 168
{
  uint16_t j = 0;

#line 170
  for (j; j < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; j++) {
      if (/*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][j].src == toIncr) {
          /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][j].seq += 1;
        }
    }
}

# 23 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$incrementANeighbor(uint8_t toIncr){
#line 23
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$incrementANeighbor(toIncr);
#line 23
}
#line 23
# 18 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$processData(socket_addr_t sockAddr, uint16_t sequence){
#line 18
  AppyP$Appy$processData(sockAddr, sequence);
#line 18
}
#line 18
# 21 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static void AppyP$Transport$resetRecBuff(uint16_t fd){
#line 21
  TransportP$Transport$resetRecBuff(fd);
#line 21
}
#line 21
# 216 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x408da1b8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x408da1b8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(123U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 120 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 125
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 104 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t Node$AMControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC$Control$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void TransportP$synTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 73
}
#line 73
# 678 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline void AppyP$Appy$initializeUsers(void )
#line 678
{
  uint16_t i;
  uint16_t j;

#line 681
  for (i = 0; i < 7; i++) {
      for (j = 0; j < 20; j++) {
          AppyP$users[sim_node()][i].userName[j] = -1;
        }
      AppyP$users[sim_node()][i].fileDesc = -2;
    }
  for (i = 0; i < 10; i++) {
      AppyP$commandHistory[sim_node()][i].fd = 0;
      AppyP$commandHistory[sim_node()][i].num = 0;
    }
}

# 19 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static void TransportP$Appy$initializeUsers(void ){
#line 19
  AppyP$Appy$initializeUsers();
#line 19
}
#line 19
# 704 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline void TransportP$Transport$initUpdateTimer(void )
#line 704
{
  uint16_t i;

  for (i = 0; i < 12; i++) {
      __nesc_hton_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata, 0);
      __nesc_hton_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata, 0);
      __nesc_hton_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata, 0);
      __nesc_hton_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata, 0);
    }

  TransportP$Appy$initializeUsers();
  TransportP$synTimer$startOneShot(6000);
}

# 19 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Transport.nc"
inline static void Node$TR$initUpdateTimer(void ){
#line 19
  TransportP$Transport$initUpdateTimer();
#line 19
}
#line 19
# 64 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void Node$RTtimer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(1U, dt);
#line 64
}
#line 64
inline static void Node$periodicTimer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 64
}
#line 64
# 69 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline void Node$AMControl$startDone(error_t err)
#line 69
{






  if (err == SUCCESS) {
      sim_log_debug(178U, "genDebug", "Radio On\n");
      Node$periodicTimer$startPeriodic(Node$randNum[sim_node()]);
      Node$RTtimer$startPeriodic(Node$randNum[sim_node()] + 7000);
      Node$TR$initUpdateTimer();
    }
  else 

    {

      Node$AMControl$start();
    }
}

# 113 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 113
  Node$AMControl$startDone(error);
#line 113
}
#line 113
# 96 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 96
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 90 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline void Node$AMControl$stopDone(error_t err)
#line 90
{
}

# 138 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 138
  Node$AMControl$stopDone(error);
#line 138
}
#line 138
# 101 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 101
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x408dd148, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x408dd148, msg, error);
#line 110
}
#line 110
# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 76 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 76
}
#line 76
# 82 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 139 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/system/QueueC.nc"
static inline bool /*SimpleSendC.QueueC*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()] == 0;
}

# 50 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static bool SimpleSendP$Queue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t *newVal)
#line 103
{
  if (/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()] >= 30) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] + /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()];

#line 109
      if (emptyIndex >= 30) {
          emptyIndex -= 30;
        }
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][emptyIndex] = newVal;
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]++;
      sim_log_debug(235U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]);
      return SUCCESS;
    }
}

# 89 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static error_t SimpleSendP$Pool$put(SimpleSendP$Pool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/system/QueueC.nc"
static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$head(void )
#line 65
{
  return /*SimpleSendC.QueueC*/QueueC$0$queue[sim_node()][/*SimpleSendC.QueueC*/QueueC$0$head[sim_node()]];
}

#line 85
static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*SimpleSendC.QueueC*/QueueC$0$queue_t t = /*SimpleSendC.QueueC*/QueueC$0$Queue$head();

#line 87
  sim_log_debug(241U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]);
  if (!/*SimpleSendC.QueueC*/QueueC$0$Queue$empty()) {
      /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()]++;
      if (/*SimpleSendC.QueueC*/QueueC$0$head[sim_node()] == 30) {
#line 90
        /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()] = 0;
        }
#line 91
      /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]--;
      /*SimpleSendC.QueueC*/QueueC$0$printQueue();
    }
  return t;
}

# 81 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static SimpleSendP$Queue$t  SimpleSendP$Queue$dequeue(void ){
#line 81
  struct sendInfo *__nesc_result;
#line 81

#line 81
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40d44730, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x40d44730, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 181
static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 94 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(227U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(228U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(229U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(230U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 170 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 162 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
# 145 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 6);
  return /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 80 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t SimpleSendP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 189 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 64) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * SimpleSendP$Packet$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 91 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
static inline error_t SimpleSendP$send(uint16_t src, uint16_t dest, pack *message)
#line 91
{
  if (!SimpleSendP$busy[sim_node()]) {
      pack *msg = (pack *)SimpleSendP$Packet$getPayload(&SimpleSendP$pkt[sim_node()], sizeof(pack ));

#line 94
      *msg = *message;

      if (SimpleSendP$AMSend$send(dest, &SimpleSendP$pkt[sim_node()], sizeof(pack )) == SUCCESS) {
          SimpleSendP$busy[sim_node()] = TRUE;
          return SUCCESS;
        }
      else 
#line 99
        {
          sim_log_debug(224U, "genDebug", "The radio is busy, or something\n");
          return FAIL;
        }
    }
  else 
#line 103
    {
      sim_log_debug(225U, "genDebug", "The radio is busy");
      return EBUSY;
    }
  sim_log_debug(226U, "genDebug", "FAILED!?");
  return FAIL;
}

# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static SimpleSendP$Queue$t  SimpleSendP$Queue$head(void ){
#line 73
  struct sendInfo *__nesc_result;
#line 73

#line 73
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 58 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
static inline void SimpleSendP$sendBufferTask$runTask(void )
#line 58
{
  if (!SimpleSendP$Queue$empty() && !SimpleSendP$busy[sim_node()]) {
      sendInfo *info;

#line 61
      info = SimpleSendP$Queue$head();

      if (SUCCESS == SimpleSendP$send(info->src, info->dest, & info->packet)) {

          SimpleSendP$Queue$dequeue();
          SimpleSendP$Pool$put(info);
        }
    }


  if (!SimpleSendP$Queue$empty()) {
      SimpleSendP$postSendTask();
    }
}

# 169 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

# 111 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
static inline void SimpleSendP$AMSend$sendDone(message_t *msg, error_t error)
#line 111
{

  if (&SimpleSendP$pkt[sim_node()] == msg) {
      SimpleSendP$busy[sim_node()] = FALSE;
      SimpleSendP$postSendTask();
    }
}

# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  SimpleSendP$AMSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 215 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40d47cb0, message_t * msg, error_t error){
#line 100
  switch (arg_0x40d47cb0) {
#line 100
    case 0U:
#line 100
      /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40d47cb0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 695 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static inline uint16_t AppyP$Appy$getCN(void )
#line 695
{
  return AppyP$commandNum[sim_node()];
}

# 21 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/Appy.nc"
inline static uint16_t TransportP$Appy$getCN(void ){
#line 21
  unsigned short __nesc_result;
#line 21

#line 21
  __nesc_result = AppyP$Appy$getCN();
#line 21

#line 21
  return __nesc_result;
#line 21
}
#line 21
# 775 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline void TransportP$update$runTask(void )
#line 775
{
  uint16_t i;
  uint8_t *locator;
  uint16_t j;
  uint16_t *locator2;
  uint8_t numPackets;
  uint16_t temp;
  uint8_t locatorz[32];

  if (TransportP$size[sim_node()] > 0) {
      for (i = 0; i < TransportP$size[sim_node()]; i++) {
          switch (TransportP$sockList[sim_node()][i].state) {
              case SOCK_ESTABLISHED: 

                if (TOS_NODE_ID == __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata)) {


                    sim_log_debug(283U, "Project3TDbg", "Server: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));

                    sim_log_debug(284U, "Project3TDbg", "isnA_foreign %d isnB_foreign %d\n", TransportP$sockList[sim_node()][i].isnA_foreign, TransportP$sockList[sim_node()][i].isnB_foreign);
#line 806
                    sim_log_debug(285U, "Project3TDbg", "isnA_native %d isnB_native %d buffers[i].length %d i %d\n", TransportP$sockList[sim_node()][i].isnA_native, TransportP$sockList[sim_node()][i].isnB_native, TransportP$buffers[sim_node()][i].length, i);



                    if (TransportP$sockList[sim_node()][i].isnB_native < TransportP$buffers[sim_node()][i].length * 2) {
                        sim_log_debug(286U, "Project3TDbg", "We are sending something from the server\n");
                        if (TransportP$sockList[sim_node()][i].isnA_native > TransportP$sockList[sim_node()][i].isnB_native) {
                            if (TransportP$congPack[sim_node()] > 1) {
#line 813
                                TransportP$congPack[sim_node()]--;
                              }
#line 814
                            TransportP$sockList[sim_node()][i].isnA_native = TransportP$sockList[sim_node()][i].isnB_native;
                            TransportP$sockList[sim_node()][i].lastByteSent = TransportP$sockList[sim_node()][i].isnA_native % SOCKET_SEND_BUFFER_SIZE;


                            numPackets = 0;
                            sim_log_debug(287U, "Project3TDbg", "congPack adjusted to %d\n", TransportP$congPack[sim_node()]);
                            do {
                                j = 0;

                                do {
                                    locatorz[j] = TransportP$sockList[sim_node()][i].sendBuff[TransportP$sockList[sim_node()][i].lastByteSent];
                                    j++;
                                    TransportP$sockList[sim_node()][i].lastByteSent++;
                                    TransportP$sockList[sim_node()][i].lastByteSent = TransportP$sockList[sim_node()][i].lastByteSent % SOCKET_SEND_BUFFER_SIZE;
                                    TransportP$sockList[sim_node()][i].isnA_native++;
                                  }
                                while (
#line 829
                                j < 32 && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);


                                sim_log_debug(288U, "Project3TDbg", "sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", numPackets, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
                                TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), TransportP$sockList[sim_node()][i].isnA_native, 0, TRANSPORT_DATA, 0, j, locatorz);
                                TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                                numPackets++;
                                sim_log_debug(289U, "Project3TDbg", "do we seg fault here?\n");
                                TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                              }
                            while (numPackets < TransportP$congPack[sim_node()] && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);
                          }
                        else {
                            TransportP$congPack[sim_node()]++;
                            numPackets = 0;
                            sim_log_debug(290U, "Project3TDbg", "congPack adjusted to %d\n", TransportP$congPack[sim_node()]);
                            do {
                                j = 0;

                                do {
                                    locatorz[j] = TransportP$sockList[sim_node()][i].sendBuff[TransportP$sockList[sim_node()][i].lastByteSent];
                                    j++;
                                    TransportP$sockList[sim_node()][i].lastByteSent++;
                                    TransportP$sockList[sim_node()][i].lastByteSent = TransportP$sockList[sim_node()][i].lastByteSent % SOCKET_SEND_BUFFER_SIZE;
                                    TransportP$sockList[sim_node()][i].isnA_native++;
                                  }
                                while (
#line 854
                                j < 32 && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);

                                sim_log_debug(291U, "Project3TDbg", "sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", numPackets, TOS_NODE_ID, __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
                                TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), TransportP$sockList[sim_node()][i].isnA_native, 0, TRANSPORT_DATA, 0, j, locatorz);
                                TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                                numPackets++;
                                TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                              }
                            while (
#line 861
                            numPackets < TransportP$congPack[sim_node()] && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);
                          }
                      }
                    else 
                      {
                        TransportP$sockList[sim_node()][i].isnB_native = 0;
                        TransportP$sockList[sim_node()][i].isnA_native = 0;
                        TransportP$buffers[sim_node()][i].length = 0;
                        TransportP$buffers[sim_node()][i].marker = 0;
                        TransportP$sockList[sim_node()][i].lastByteSent = 0;
                        TransportP$sockList[sim_node()][i].lastByteWritten = 0;
                        TransportP$sockList[sim_node()][i].lastByteAck = 0;
                        sim_log_debug(292U, "Project3TDbg", "done sending!\n");
                      }
                  }
                else {
#line 876
                  if (TOS_NODE_ID == __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata)) {

                      sim_log_debug(293U, "Project3TDbg", "Client: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));

                      sim_log_debug(294U, "Project3TDbg", "isnA_native %d isnB_native %d buffers[i].length %d\n", TransportP$sockList[sim_node()][i].isnA_native, TransportP$sockList[sim_node()][i].isnB_native, TransportP$buffers[sim_node()][i].length);

                      sim_log_debug(295U, "Project3TDbg", "effective window size before sending %d\n", TransportP$sockList[sim_node()][i].effectiveWindow);
                      if (TransportP$sockList[sim_node()][i].isnB_native < TransportP$buffers[sim_node()][i].length * 2) {
                          if (TransportP$sockList[sim_node()][i].isnA_native > TransportP$sockList[sim_node()][i].isnB_native) {
                              if (TransportP$congPack[sim_node()] > 1) {
#line 885
                                  TransportP$congPack[sim_node()]--;
                                }
#line 886
                              TransportP$sockList[sim_node()][i].isnA_native = TransportP$sockList[sim_node()][i].isnB_native;
                              TransportP$sockList[sim_node()][i].lastByteSent = TransportP$sockList[sim_node()][i].isnA_native % SOCKET_SEND_BUFFER_SIZE;


                              numPackets = 0;
                              sim_log_debug(296U, "Project3TDbg", "congPack adjusted to %d\n", TransportP$congPack[sim_node()]);
                              do {
                                  j = 0;

                                  do {
                                      locatorz[j] = TransportP$sockList[sim_node()][i].sendBuff[TransportP$sockList[sim_node()][i].lastByteSent];
                                      j++;
                                      TransportP$sockList[sim_node()][i].lastByteSent++;
                                      TransportP$sockList[sim_node()][i].lastByteSent = TransportP$sockList[sim_node()][i].lastByteSent % SOCKET_SEND_BUFFER_SIZE;
                                      TransportP$sockList[sim_node()][i].isnA_native++;
                                    }
                                  while (
#line 901
                                  j < 32 && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);


                                  sim_log_debug(297U, "Project3TDbg", "sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", numPackets, TOS_NODE_ID, __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
                                  TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), TransportP$sockList[sim_node()][i].isnA_native, 0, TRANSPORT_DATA, 0, j, locatorz);
                                  TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), MAX_TTL, PROTOCOL_TCP, TransportP$Appy$getCN(), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                                  numPackets++;
                                  TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                                }
                              while (numPackets < TransportP$congPack[sim_node()] && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);
                            }
                          else {
                              TransportP$congPack[sim_node()]++;
                              numPackets = 0;
                              sim_log_debug(298U, "Project3TDbg", "congPack adjusted to %d\n", TransportP$congPack[sim_node()]);
                              do {
                                  j = 0;

                                  do {
                                      locatorz[j] = TransportP$sockList[sim_node()][i].sendBuff[TransportP$sockList[sim_node()][i].lastByteSent];
                                      j++;
                                      TransportP$sockList[sim_node()][i].lastByteSent++;
                                      TransportP$sockList[sim_node()][i].lastByteSent = TransportP$sockList[sim_node()][i].lastByteSent % SOCKET_SEND_BUFFER_SIZE;
                                      TransportP$sockList[sim_node()][i].isnA_native++;
                                    }
                                  while (
#line 925
                                  j < 32 && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);

                                  sim_log_debug(299U, "Project3TDbg", "sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", numPackets, TOS_NODE_ID, __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
                                  TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), TransportP$sockList[sim_node()][i].isnA_native, 0, TRANSPORT_DATA, 0, j, locatorz);
                                  TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), MAX_TTL, PROTOCOL_TCP, TransportP$Appy$getCN(), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                                  numPackets++;
                                  TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                                }
                              while (
#line 932
                              numPackets < TransportP$congPack[sim_node()] && TransportP$sockList[sim_node()][i].lastByteSent != TransportP$sockList[sim_node()][i].lastByteWritten && TransportP$sockList[sim_node()][i].isnA_native < TransportP$buffers[sim_node()][i].length * 2);
                            }
                        }
                      else 
                        {
                          TransportP$sockList[sim_node()][i].isnB_native = 0;
                          TransportP$sockList[sim_node()][i].isnA_native = 0;
                          TransportP$buffers[sim_node()][i].length = 0;
                          TransportP$buffers[sim_node()][i].marker = 0;
                          TransportP$sockList[sim_node()][i].lastByteSent = 0;
                          TransportP$sockList[sim_node()][i].lastByteWritten = 0;
                          TransportP$sockList[sim_node()][i].lastByteAck = 0;
                          sim_log_debug(300U, "Project3TDbg", "done sending!\n");
                        }
                    }
                  }
              break;
              case SOCK_CLOSED: 
                __nesc_hton_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata, 0);
              __nesc_hton_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata, 0);
              __nesc_hton_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata, 0);
              __nesc_hton_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata, 0);
              TransportP$sockList[sim_node()][i].lastByteSent = 0;
              TransportP$sockList[sim_node()][i].lastByteWritten = 0;
              TransportP$sockList[sim_node()][i].lastByteAck = 0;
              TransportP$sockList[sim_node()][i].lastByteRec = 0;
              TransportP$sockList[sim_node()][i].lastByteRead = 0;
              TransportP$sockList[sim_node()][i].lastByteExpected = 0;
              break;
              case SOCK_SYN_SENT: 
                TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), 0, 0, TRANSPORT_SYN, 0, 1, &TransportP$repeat[sim_node()]);
              TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
              sim_log_debug(301U, "Project3TDbg", "sending SYN Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
              TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
              break;
              case SOCK_SYN_RCVD: 
                TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), 0, 0, TRANSPORT_SYN | TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);
              TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
              sim_log_debug(302U, "Project3TDbg", "sending SYN ACK Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
              TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
              break;
              case SOCK_FIN_WAIT_1: 
                TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), 0, 0, TRANSPORT_FIN, 0, 1, &TransportP$repeat[sim_node()]);
              TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
              sim_log_debug(303U, "Project3TDbg", "sending FIN Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
              TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
              break;
              case SOCK_FIN_WAIT_2: 
                if (TransportP$repeat2[sim_node()][i] == 8) {
                    TransportP$handle[sim_node()] = TransportP$Transport$release((socket_t )i);
                    sim_log_debug(304U, "Project3TDbg", "Server Connection Terminated: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
                    TransportP$repeat2[sim_node()][i] = 0;
                  }
                else {
                    TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata), 0, 0, TRANSPORT_FIN | TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);
                    TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                    sim_log_debug(305U, "Project3TDbg", "sending FIN ACK Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));

                    TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                    TransportP$repeat2[sim_node()][i]++;
                  }
              break;
              case SOCK_CLOSE_WAIT: 
                if (TransportP$repeat[sim_node()][i] == 3) {
                    TransportP$handle[sim_node()] = TransportP$Transport$release((socket_t )i);

                    sim_log_debug(306U, "Project3TDbg", "Client Connection Terminated: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata), __nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.destAddr.nxdata), __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata));
                    TransportP$repeat[sim_node()][i] = 0;
                  }
                else {
                    TransportP$repeat[sim_node()][i]++;
                  }
              break;
            }
        }
    }
}

# 221 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x4070c1b8){
#line 75
  switch (arg_0x4070c1b8) {
#line 75
    case TossimPacketModelC$startDoneTask:
#line 75
      TossimPacketModelC$startDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$stopDoneTask:
#line 75
      TossimPacketModelC$stopDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$sendDoneTask:
#line 75
      TossimPacketModelC$sendDoneTask$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case SimpleSendP$sendBufferTask:
#line 75
      SimpleSendP$sendBufferTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 75
      break;
#line 75
    case TransportP$update:
#line 75
      TransportP$update$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x4070c1b8);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
#line 67
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 177 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 483 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 85
  TossimActiveMessageC$Model$receive(msg);
#line 85
}
#line 85
# 288 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 60
}
#line 60
# 260 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(156U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(157U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(158U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(159U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(160U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(161U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(162U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(163U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(164U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(165U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(166U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(167U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(168U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(169U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(170U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(171U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(172U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(173U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(174U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 282
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(148U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * TossimPacketModelC$sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(146U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(147U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 459 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(175U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 211 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(154U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 243
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(145U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC$start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(144U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(142U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(143U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 90 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(155U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 127 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(135U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(149U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 59 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 59
}
#line 59
# 151 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(152U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 4 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/SimpleSend.nc"
inline static error_t FloodSendP$Sender$send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = SimpleSendP$SimpleSend$send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 119 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$SimpleSendSend(pack msg, uint16_t dest)
#line 119
{
  FloodSendP$Sender$send(msg, dest);
}

# 15 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$SimpleSendSend(pack msg, uint16_t dest){
#line 15
  FloodSendP$FloodSend$SimpleSendSend(msg, dest);
#line 15
}
#line 15
# 129 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$decrementNeighborPing(void )
#line 129
{

  uint16_t i;

#line 132
  for (i = 0; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; i++) {
      /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].seq -= 1;
    }
}

# 19 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$decrementNeighborPing(void ){
#line 19
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$decrementNeighborPing();
#line 19
}
#line 19
# 116 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$NeighborDecrementNeighborPing(void )
#line 116
{
  FloodSendP$neighborList$decrementNeighborPing();
}

# 14 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$NeighborDecrementNeighborPing(void ){
#line 14
  FloodSendP$FloodSend$NeighborDecrementNeighborPing();
#line 14
}
#line 14
# 48 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline pair /*NodeC.neighborListC*/NeighborListC$0$NeighborList$popback(void )
#line 48
{
  pair returnVal;

  returnVal = /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][/*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]];
  if (/*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] > 0) {
#line 52
    /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]--;
    }
#line 53
  return returnVal;
}

#line 98
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$delete(uint16_t position)
#line 98
{
  uint16_t i = position + 1;

#line 100
  for (i; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; i++) {
      /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i - 1] = /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i];
    }
  /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]--;
}

# 69 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotDeleted(uint8_t element)
#line 69
{
  uint16_t i;

#line 71
  for (i = 0; i < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; i++) {
      if (element == /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].nextHop || element == /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].dest) {

          /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].cost = 16;
        }
    }
}

# 8 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static void /*NodeC.neighborListC*/NeighborListC$0$RT$NeighborGotDeleted(uint8_t element){
#line 8
  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$NeighborGotDeleted(element);
#line 8
}
#line 8
# 151 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$deleteNeighbor(uint8_t toDelete)
#line 151
{
  uint16_t i = 0;
  bool deleted = FALSE;

#line 154
  for (i; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; i++) {
      if (/*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].src == toDelete) {
          /*NodeC.neighborListC*/NeighborListC$0$RT$NeighborGotDeleted(toDelete);
          deleted = TRUE;
          break;
        }
    }
  if ((i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] - 1) & (deleted == TRUE)) {
      /*NodeC.neighborListC*/NeighborListC$0$NeighborList$delete(i);
    }
  else {
#line 164
    if (deleted == TRUE) {
        /*NodeC.neighborListC*/NeighborListC$0$NeighborList$popback();
      }
    }
}

#line 142
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$refreshNeighbors(void )
#line 142
{
  uint16_t i = 0;

#line 144
  for (i; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; i++) {
      if (/*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].seq <= 1) {
          /*NodeC.neighborListC*/NeighborListC$0$NeighborList$deleteNeighbor(/*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].src);
          i--;
        }
    }
}

# 21 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$refreshNeighbors(void ){
#line 21
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$refreshNeighbors();
#line 21
}
#line 21
# 110 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$NeighborRefreshNeighbors(void )
#line 110
{
  FloodSendP$neighborList$refreshNeighbors();
}

# 13 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$NeighborRefreshNeighbors(void ){
#line 13
  FloodSendP$FloodSend$NeighborRefreshNeighbors();
#line 13
}
#line 13
# 340 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline void Node$periodicTimer$fired(void )
#line 340
{


  Node$FS$NeighborRefreshNeighbors();
  Node$FS$NeighborDecrementNeighborPing();
  Node$someNum[sim_node()] = -1;
  Node$makePack(&Node$ngbrPackage[sim_node()], TOS_NODE_ID, AM_BROADCAST_ADDR, 2, 
  PROTOCOL_PING, 0, &Node$someNum[sim_node()], sizeof(uint8_t ));
  Node$FS$SimpleSendSend(Node$ngbrPackage[sim_node()], AM_BROADCAST_ADDR);
}

# 94 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline pair /*NodeC.neighborListC*/NeighborListC$0$NeighborList$get(uint16_t position)
#line 94
{
  return /*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][position];
}

# 16 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static pair FloodSendP$neighborList$get(uint16_t position){
#line 16
  struct pair __nesc_result;
#line 16

#line 16
  __nesc_result = /*NodeC.neighborListC*/NeighborListC$0$NeighborList$get(position);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 141 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline uint8_t FloodSendP$FloodSend$getNeighbor(uint16_t position)
#line 141
{
  return FloodSendP$neighborList$get(position).src;
}

# 19 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static uint8_t Node$FS$getNeighbor(uint16_t position){
#line 19
  unsigned char __nesc_result;
#line 19

#line 19
  __nesc_result = FloodSendP$FloodSend$getNeighbor(position);
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 50 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$writeToPayload(uint8_t *payld, uint8_t neigbr)
#line 50
{
  uint16_t it;
  dvrTransmission *it2;

#line 53
  payld[0] = (uint8_t )/*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()];

  it2 = payld + 1;
  for (it = 0; it < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; it++) {
      it2->dest = /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][it].dest;
      if (neigbr == /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][it].nextHop) {
          it2->cost = 16;
        }
      else {
          it2->cost = /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][it].cost;
        }
      it2++;
    }
}

# 7 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static void /*NodeC.neighborListC*/NeighborListC$0$RT$writeToPayload(uint8_t *payld, uint8_t neigbr){
#line 7
  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$writeToPayload(payld, neigbr);
#line 7
}
#line 7
# 183 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$writeToPayloadFromRoutingTable(uint8_t *payld, uint8_t neighbor)
#line 183
{
  /*NodeC.neighborListC*/NeighborListC$0$RT$writeToPayload(payld, neighbor);
}

# 27 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$writeToPayloadFromRoutingTable(uint8_t *payld, uint8_t neighbor){
#line 27
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$writeToPayloadFromRoutingTable(payld, neighbor);
#line 27
}
#line 27
# 126 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$writeToPayloadFromRT(uint8_t *payld, uint8_t ngbr)
#line 126
{
  FloodSendP$neighborList$writeToPayloadFromRoutingTable(payld, ngbr);
}

# 21 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$writeToPayloadFromRT(uint8_t *payld, uint8_t ngbr){
#line 21
  FloodSendP$FloodSend$writeToPayloadFromRT(payld, ngbr);
#line 21
}
#line 21
# 90 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline uint16_t /*NodeC.neighborListC*/NeighborListC$0$NeighborList$size(void )
#line 90
{
  return /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()];
}

# 15 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static uint16_t FloodSendP$neighborList$size(void ){
#line 15
  unsigned short __nesc_result;
#line 15

#line 15
  __nesc_result = /*NodeC.neighborListC*/NeighborListC$0$NeighborList$size();
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 138 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline uint16_t FloodSendP$FloodSend$neighborSize(void )
#line 138
{
  return FloodSendP$neighborList$size();
}

# 18 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static uint16_t Node$FS$neighborSize(void ){
#line 18
  unsigned short __nesc_result;
#line 18

#line 18
  __nesc_result = FloodSendP$FloodSend$neighborSize();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 14 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static inline void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$populateTable(pair *list, uint16_t listSize)
#line 14
{
  uint16_t i;
  uint16_t j;
  dvr insert;
  uint8_t exists;


  for (i = 0; i < listSize; i++) {
      exists = 0;
      for (j = 0; j < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; j++) {
          if (/*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].dest == list->src) {

              /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].cost = 1;
              /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][j].nextHop = list->src;
              exists = 1;
            }
        }

      if (exists == 0) {
          insert.dest = list->src;
          insert.cost = 1;
          insert.nextHop = list->src;
          /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$pushback(insert);
        }
      list++;
    }
}

# 5 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/RoutingTable.nc"
inline static void /*NodeC.neighborListC*/NeighborListC$0$RT$populateTable(pair *list, uint16_t listSize){
#line 5
  /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$populateTable(list, listSize);
#line 5
}
#line 5
# 177 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$populateRoutingTable(void )
#line 177
{
  /*NodeC.neighborListC*/NeighborListC$0$RT$populateTable(/*NodeC.neighborListC*/NeighborListC$0$container[sim_node()], /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]);
}

# 25 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$populateRoutingTable(void ){
#line 25
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$populateRoutingTable();
#line 25
}
#line 25
# 135 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$populateRtngTabl(void )
#line 135
{
  FloodSendP$neighborList$populateRoutingTable();
}

# 25 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$populateRtngTabl(void ){
#line 25
  FloodSendP$FloodSend$populateRtngTabl();
#line 25
}
#line 25
# 352 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline void Node$RTtimer$fired(void )
#line 352
{


  uint16_t i;

  Node$FS$populateRtngTabl();

  for (i = 0; i < Node$FS$neighborSize(); i++) {

      Node$FS$writeToPayloadFromRT(Node$routingPackage[sim_node()].payload, Node$FS$getNeighbor(i));

      Node$makePack(&Node$routingPackage[sim_node()], TOS_NODE_ID, AM_BROADCAST_ADDR, 2, 
      PROTOCOL_DISTANCE_VECTOR, 0, Node$routingPackage[sim_node()].payload, sizeof  Node$routingPackage[sim_node()].payload);
      Node$FS$SimpleSendSend(Node$routingPackage[sim_node()], Node$FS$getNeighbor(i));
    }
}

# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t TransportP$update$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TransportP$update);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1010 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static inline void TransportP$synTimer$fired(void )
#line 1010
{




  TransportP$SampleRTT[sim_node()] = TransportP$EstimatedRTT[sim_node()];
  TransportP$SampleRTT[sim_node()] += (TransportP$numSent[sim_node()] - TransportP$numRec[sim_node()]) * 50;
  TransportP$EstimatedRTT[sim_node()] = (9 * TransportP$EstimatedRTT[sim_node()] + 1 * TransportP$SampleRTT[sim_node()]) / 10;

  TransportP$update$postTask();

  TransportP$synTimer$startOneShot(6000);




  TransportP$numSent[sim_node()] = 0;
  TransportP$numRec[sim_node()] = 0;
}

# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SimpleSendP$sendBufferTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(SimpleSendP$sendBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 76 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
static inline void SimpleSendP$sendTimer$fired(void )
#line 76
{
  SimpleSendP$sendBufferTask$postTask();
}

# 204 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40c753a8){
#line 83
  switch (arg_0x40c753a8) {
#line 83
    case 0U:
#line 83
      Node$periodicTimer$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      Node$RTtimer$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      TransportP$synTimer$fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      SimpleSendP$sendTimer$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40c753a8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 54 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(220U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(219U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(216U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(217U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(209U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(199U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(200U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(201U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(202U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(203U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(204U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(205U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(206U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 61
{
  return SUCCESS;
}

# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 49 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 49
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$PlatformInit$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/home/ubuntu/local/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 21 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  return ok;
}

# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 86 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 86
{
  sim_log_debug(137U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(211U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 55 "/home/ubuntu/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 65 "/home/ubuntu/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 30; i++) {
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][i] = &/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[sim_node()][i];
    }
  /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()] = 30;
  /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] = 0;
  return SUCCESS;
}

# 62 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 55 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static inline void /*NodeC.neighborListC*/NeighborListC$0$NeighborList$clearAll(void )
#line 55
{
  /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] = 0;
}

# 9 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/interfaces/NeighborList.nc"
inline static void FloodSendP$neighborList$clearAll(void ){
#line 9
  /*NodeC.neighborListC*/NeighborListC$0$NeighborList$clearAll();
#line 9
}
#line 9
# 95 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static inline void FloodSendP$FloodSend$NeighborsClearAll(void )
#line 95
{
  FloodSendP$neighborList$clearAll();
}

# 8 "/home/ubuntu/workspace/Proj1Test/src/lib/interfaces/FloodSend.nc"
inline static void Node$FS$NeighborsClearAll(void ){
#line 8
  FloodSendP$FloodSend$NeighborsClearAll();
#line 8
}
#line 8
# 52 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t Node$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 55 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static inline void Node$Boot$booted(void )
#line 55
{

  Node$iteration[sim_node()] = 0;
  Node$AMControl$start();
  sim_log_debug(176U, "genDebug", "Booted\n");



  Node$randNum[sim_node()] = 7000 + Node$Random$rand16() % 20 * 100;
  Node$seqNO[sim_node()] = 0;
  sim_log_debug(177U, "genDebug", "periodic checker set to %d\n", Node$randNum[sim_node()]);
  Node$FS$NeighborsClearAll();
}

# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  Node$Boot$booted();
#line 60
}
#line 60
# 55 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(131U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(133U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(134U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 76 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 165 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 161 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(208U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 106 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(214U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 160 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static error_t TransportP$Transport$receive(pack *package)
#line 160
{
  appData *operator;
  transport *analyze;
  uint8_t *cmdParams;
  uint8_t portSrc;
  uint8_t portDest;
  uint8_t dest;
  socket_addr_t tempAddr2;
  socket_t sock2;
  transport tcpPack2;
  pack sendPackage2;
  uint8_t advertisedWindow;






  uint16_t listenHandle;
  uint16_t reference;
  uint8_t *buffIter;
  uint16_t minimum;

  TransportP$numRec[sim_node()]++;
  if (__nesc_ntoh_uint8(package->protocol.nxdata) == PROTOCOL_CMD) {
      switch (getCMD((uint8_t *)& package->payload, sizeof  package->payload)) {
          case CMD_TEST_SERVER: 
            TransportP$Appy$handleTestServer(package);
          return SUCCESS;
          break;
          case CMD_TEST_CLIENT: 
            TransportP$Appy$handleTestClient(package);
          return SUCCESS;
          break;
          case CMD_TEST_CLIENT_END: 
            TransportP$Appy$handleTestClientEnd(package);
          return SUCCESS;
          break;
          case CMD_HELLO: 
            TransportP$Appy$handleHello(package);
          return SUCCESS;
          break;
          case CMD_WISP: 
            TransportP$Appy$handleWisp(package);
          return SUCCESS;
          break;
          case CMD_MSG: 
            TransportP$Appy$handleMsg(package);
          return SUCCESS;
          break;
          case CMD_LISTUSR: 
            TransportP$Appy$handleListUsr(package);
          return SUCCESS;
          break;
        }
      return FAIL;
    }
  else {
      analyze = package->payload;


      switch (__nesc_ntoh_uint8(analyze->flags.nxdata)) {
          case TRANSPORT_SYN: 
            sim_log_debug(247U, "Project3TDbg", "Got SYN SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);




          if (sock2 == (uint16_t )-1) {
              sock2 = TransportP$searchNewSock_listen(&tempAddr2);
              sock2 = TransportP$Transport$accept(sock2, &tempAddr2);
            }
          else {
#line 261
            if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_SYN_RCVD) {
                __nesc_hton_uint8(analyze->flags.nxdata, TRANSPORT_SYN | TRANSPORT_ACK);
                sim_log_debug(248U, "Project3TDbg", "Sending SYN ACK already accepted\n");

                TransportP$makeTcpPacket(&tcpPack2, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata), 0, 0, TRANSPORT_SYN | TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);
                TransportP$makePack(&sendPackage2, TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, 
                PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack2.seq.nxdata), &tcpPack2, sizeof tcpPack2);

                TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


                TransportP$FloodSend$handlePingReply(&sendPackage2, TransportP$one[sim_node()]);
              }
            }
#line 274
          break;
          case TRANSPORT_FIN: 
            sim_log_debug(249U, "Project3TDbg", "Got FIN SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));

          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);


          if ((uint16_t )sock2 == (uint16_t )-1) {
            }
          else {
            if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_ESTABLISHED) {

                TransportP$sockList[sim_node()][(uint16_t )sock2].state = SOCK_FIN_WAIT_2;

                __nesc_hton_uint8(analyze->flags.nxdata, TRANSPORT_FIN | TRANSPORT_ACK);
                sim_log_debug(250U, "Project3TDbg", "Sending FIN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata));
                TransportP$makeTcpPacket(&tcpPack2, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata), 0, 0, TRANSPORT_FIN | TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);
                TransportP$makePack(&sendPackage2, TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, 
                PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack2.seq.nxdata), &tcpPack2, sizeof tcpPack2);

                TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


                TransportP$FloodSend$handlePingReply(&sendPackage2, TransportP$one[sim_node()]);
              }
            else {
#line 303
              if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_SYN_SENT) {
                  sim_log_debug(251U, "Project3TDbg", "Connection Rejected YOLO\n");
                  TransportP$handle[sim_node()] = TransportP$Transport$release(sock2);
                }
              else {
#line 307
                if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_FIN_WAIT_2) {
                    __nesc_hton_uint8(analyze->flags.nxdata, TRANSPORT_FIN | TRANSPORT_ACK);
                    sim_log_debug(252U, "Project3TDbg", "Sending FIN ACK Again SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata));
                    TransportP$makeTcpPacket(&tcpPack2, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata), 0, 0, TRANSPORT_FIN | TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);
                    TransportP$makePack(&sendPackage2, TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, 
                    PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack2.seq.nxdata), &tcpPack2, sizeof tcpPack2);

                    TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


                    TransportP$FloodSend$handlePingReply(&sendPackage2, TransportP$one[sim_node()]);
                  }
                }
              }
            }
#line 319
          break;
          case TRANSPORT_ACK: 
            sim_log_debug(253U, "Project3TDbg", "Got ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));

          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);


          if ((uint16_t )sock2 != (uint16_t )-1) {
              if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_SYN_RCVD) {
                  TransportP$sockList[sim_node()][(uint16_t )sock2].state = SOCK_ESTABLISHED;
                  sim_log_debug(254U, "Project3TDbg", "Server Connection Established: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                }
              else {
                if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_FIN_WAIT_2) {

                    TransportP$handle[sim_node()] = TransportP$Transport$release(sock2);
                    sim_log_debug(255U, "Project3TDbg", "Server Connection Terminated: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                  }
                }
            }
#line 342
          break;
          case TRANSPORT_SYN | TRANSPORT_ACK: 
            __nesc_hton_uint8(analyze->flags.nxdata, TRANSPORT_ACK);
          sim_log_debug(256U, "Project3TDbg", "Got SYN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));


          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);


          if ((uint16_t )sock2 != (uint16_t )-1) {
              if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_SYN_SENT) {
                  sim_log_debug(257U, "Project3TDbg", "Client Connection Established: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                  TransportP$sockList[sim_node()][(uint16_t )sock2].state = SOCK_ESTABLISHED;
                }
              if (((TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_ESTABLISHED) | (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_FIN_WAIT_1)) | (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_CLOSE_WAIT)) {
                  sim_log_debug(258U, "Project3TDbg", "Sending ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata));




                  TransportP$makeTcpPacket(&tcpPack2, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata), 0, 0, TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);

                  TransportP$makePack(&sendPackage2, TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, 
                  PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack2.seq.nxdata), &tcpPack2, sizeof tcpPack2);

                  TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


                  TransportP$FloodSend$handlePingReply(&sendPackage2, TransportP$one[sim_node()]);
                }
            }






          break;
          case TRANSPORT_DATA: 
            sim_log_debug(259U, "Project3TDbg", "Got DATA SrcAddr %d SrcPort %d DestAddr %d DestPort %d length %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata), __nesc_ntoh_uint8(analyze->length.nxdata));



          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));

          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);
          if ((uint16_t )sock2 != (uint16_t )-1) {



              sim_log_debug(260U, "Project3TDbg", "before seq %d isnA_foreign %d\n", __nesc_ntoh_uint16(analyze->seq.nxdata), TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign);
              TransportP$printRecBuffer((uint16_t )sock2);
              if (__nesc_ntoh_uint16(analyze->seq.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign <= 32 && __nesc_ntoh_uint16(analyze->seq.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign > 0) {
                  reference = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec;
                  buffIter = TransportP$sockList[sim_node()][(uint16_t )sock2].recBuff;
                  listenHandle = 0;
                  while (listenHandle < __nesc_ntoh_uint8(analyze->length.nxdata)) {
                      buffIter[reference % SOCKET_RECEIVE_BUFFER_SIZE] = __nesc_ntoh_uint8(analyze->payload[listenHandle].nxdata);
                      reference++;
                      listenHandle++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec % SOCKET_RECEIVE_BUFFER_SIZE;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteExpected++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteExpected = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteExpected % SOCKET_RECEIVE_BUFFER_SIZE;
                    }
                  sim_log_debug(261U, "Project3TDbg", "check for here\n");
                  TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign += TransportP$Transport$read((uint16_t )sock2, TransportP$buffers[sim_node()][(uint16_t )sock2].dataRec + TransportP$buffers[sim_node()][(uint16_t )sock2].lengthRec, __nesc_ntoh_uint8(analyze->length.nxdata));
                  TransportP$buffers[sim_node()][(uint16_t )sock2].lengthRec = TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign / 2;
                  sim_log_debug(262U, "Project3TDbg", "after\n");
                  TransportP$printRecBuffer((uint16_t )sock2);
                  advertisedWindow = SOCKET_RECEIVE_BUFFER_SIZE - (TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign + 32 - 32 - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign);



                  sim_log_debug(263U, "Project3TDbg", "advertisedWindow %d\n", advertisedWindow);
                  sim_log_debug(264U, "Project3TDbg", "Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                  TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata), 0, TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign, TRANSPORT_DATA | TRANSPORT_ACK, advertisedWindow, __nesc_ntoh_uint8(analyze->length.nxdata), &TransportP$repeat[sim_node()]);
                  TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);

                  TransportP$Appy$processData(tempAddr2, __nesc_ntoh_uint16(package->seq.nxdata));
                  TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                }
              else {
#line 432
                if (__nesc_ntoh_uint16(analyze->seq.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign <= 0) {


                    advertisedWindow = SOCKET_RECEIVE_BUFFER_SIZE - (TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign + 32 - 32 - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign);
                    sim_log_debug(265U, "Project3TDbg", "advertisedWindow %d\n", advertisedWindow);
                    sim_log_debug(266U, "Project3TDbg", "Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                    TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata), 0, TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign, TRANSPORT_DATA | TRANSPORT_ACK, advertisedWindow, __nesc_ntoh_uint8(analyze->length.nxdata), &TransportP$repeat[sim_node()]);
                    TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                    TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                  }
                }
            }
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);
          if ((uint16_t )sock2 != (uint16_t )-1) {



              sim_log_debug(267U, "Project3TDbg", "before\n");
              TransportP$printRecBuffer((uint16_t )sock2);
              if (__nesc_ntoh_uint16(analyze->seq.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign <= 32 && __nesc_ntoh_uint16(analyze->seq.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign > 0) {
                  reference = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec;
                  buffIter = TransportP$sockList[sim_node()][(uint16_t )sock2].recBuff;
                  listenHandle = 0;
                  while (listenHandle < __nesc_ntoh_uint8(analyze->length.nxdata)) {
                      buffIter[reference % SOCKET_RECEIVE_BUFFER_SIZE] = __nesc_ntoh_uint8(analyze->payload[listenHandle].nxdata);
                      reference++;
                      listenHandle++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteRec % SOCKET_RECEIVE_BUFFER_SIZE;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteExpected++;
                      TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteExpected = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteExpected % SOCKET_RECEIVE_BUFFER_SIZE;
                    }
                  TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign += TransportP$Transport$read((uint16_t )sock2, TransportP$buffers[sim_node()][(uint16_t )sock2].dataRec + TransportP$buffers[sim_node()][(uint16_t )sock2].lengthRec, __nesc_ntoh_uint8(analyze->length.nxdata));
                  TransportP$buffers[sim_node()][(uint16_t )sock2].lengthRec = TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign / 2;
                  sim_log_debug(268U, "Project3TDbg", "after\n");
                  TransportP$printRecBuffer((uint16_t )sock2);
                  advertisedWindow = SOCKET_RECEIVE_BUFFER_SIZE - (TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign + 32 - 32 - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign);



                  sim_log_debug(269U, "Project3TDbg", "advertisedWindow %d\n", advertisedWindow);
                  sim_log_debug(270U, "Project3TDbg", "Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                  TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata), 0, TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign, TRANSPORT_DATA | TRANSPORT_ACK, advertisedWindow, __nesc_ntoh_uint8(analyze->length.nxdata), &TransportP$repeat[sim_node()]);
                  TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);

                  TransportP$Appy$processData(tempAddr2, __nesc_ntoh_uint16(package->seq.nxdata));
                  TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                }
              else {
#line 483
                if (__nesc_ntoh_uint16(analyze->seq.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign <= 0) {


                    advertisedWindow = SOCKET_RECEIVE_BUFFER_SIZE - (TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign + 32 - 32 - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_foreign);
                    sim_log_debug(271U, "Project3TDbg", "advertisedWindow %d\n", advertisedWindow);
                    sim_log_debug(272U, "Project3TDbg", "Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));
                    TransportP$makeTcpPacket(&TransportP$tcpPack[sim_node()], __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata), 0, TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_foreign, TRANSPORT_DATA | TRANSPORT_ACK, advertisedWindow, __nesc_ntoh_uint8(analyze->length.nxdata), &TransportP$repeat[sim_node()]);
                    TransportP$makePack(&TransportP$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(TransportP$tcpPack[sim_node()].seq.nxdata), &TransportP$tcpPack[sim_node()], sizeof TransportP$tcpPack[sim_node()]);
                    TransportP$FloodSend$handlePing(&TransportP$sendPackage[sim_node()], TransportP$one[sim_node()]);
                  }
                }
            }
#line 494
          break;
          case TRANSPORT_DATA | TRANSPORT_ACK: 

            sim_log_debug(273U, "Project3TDbg", "Got DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d ack %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata), __nesc_ntoh_uint16(analyze->ack.nxdata));
          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);
          if ((uint16_t )sock2 != (uint16_t )-1) {




              if (__nesc_ntoh_uint16(analyze->ack.nxdata) > TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native) {


                  minimum = __nesc_ntoh_uint16(analyze->ack.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native;
                  TransportP$buffers[sim_node()][(uint16_t )sock2].marker += TransportP$Transport$write((uint16_t )sock2, TransportP$buffers[sim_node()][(uint16_t )sock2].data + TransportP$buffers[sim_node()][(uint16_t )sock2].marker, minimum) / 2;
                  TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native = __nesc_ntoh_uint16(analyze->ack.nxdata);
                  TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteAck = TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native;

                  TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteAck = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteAck % SOCKET_SEND_BUFFER_SIZE;
                }
#line 530
              sim_log_debug(274U, "Project3TDbg", "comparing isnbnative %d length %d\n", TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native, TransportP$buffers[sim_node()][(uint16_t )sock2].length * 2);
              if (TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native >= TransportP$buffers[sim_node()][(uint16_t )sock2].length * 2) {
                  TransportP$Transport$resetSendBuff((uint16_t )sock2);
                }

              TransportP$sockList[sim_node()][(uint16_t )sock2].effectiveWindow = __nesc_ntoh_uint8(analyze->window.nxdata) - (TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_native - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native);
              sim_log_debug(275U, "Project3TDbg", "after effective window size %d\n", TransportP$sockList[sim_node()][(uint16_t )sock2].effectiveWindow);
            }



          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);
          if ((uint16_t )sock2 != (uint16_t )-1) {




              if (__nesc_ntoh_uint16(analyze->ack.nxdata) > TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native) {


                  minimum = __nesc_ntoh_uint16(analyze->ack.nxdata) - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native;
                  TransportP$buffers[sim_node()][(uint16_t )sock2].marker += TransportP$Transport$write((uint16_t )sock2, TransportP$buffers[sim_node()][(uint16_t )sock2].data + TransportP$buffers[sim_node()][(uint16_t )sock2].marker, minimum) / 2;
                  TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native = __nesc_ntoh_uint16(analyze->ack.nxdata);
                  TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteAck = TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native;

                  TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteAck = TransportP$sockList[sim_node()][(uint16_t )sock2].lastByteAck % SOCKET_SEND_BUFFER_SIZE;
                }
#line 571
              sim_log_debug(276U, "Project3TDbg", "comparing isnbnative %d length %d\n", TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native, TransportP$buffers[sim_node()][(uint16_t )sock2].length * 2);
              if (TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native >= TransportP$buffers[sim_node()][(uint16_t )sock2].length * 2) {
                  TransportP$Transport$resetSendBuff((uint16_t )sock2);
                }

              TransportP$sockList[sim_node()][(uint16_t )sock2].effectiveWindow = __nesc_ntoh_uint8(analyze->window.nxdata) - (TransportP$sockList[sim_node()][(uint16_t )sock2].isnA_native - TransportP$sockList[sim_node()][(uint16_t )sock2].isnB_native);
              sim_log_debug(277U, "Project3TDbg", "after effective window size %d\n", TransportP$sockList[sim_node()][(uint16_t )sock2].effectiveWindow);
            }


          break;
          case TRANSPORT_FIN | TRANSPORT_ACK: 
            __nesc_hton_uint8(analyze->flags.nxdata, TRANSPORT_ACK);
          sim_log_debug(278U, "Project3TDbg", "Got FIN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", __nesc_ntoh_uint16(package->dest.nxdata), __nesc_ntoh_uint8(analyze->srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(analyze->destPort.nxdata));


          __nesc_hton_uint8(tempAddr2.srcPort.nxdata, __nesc_ntoh_uint8(analyze->srcPort.nxdata));
          __nesc_hton_uint8(tempAddr2.destPort.nxdata, __nesc_ntoh_uint8(analyze->destPort.nxdata));
          __nesc_hton_uint16(tempAddr2.srcAddr.nxdata, __nesc_ntoh_uint16(package->dest.nxdata));
          __nesc_hton_uint16(tempAddr2.destAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          sock2 = TransportP$Transport$searchNewSock_default(&tempAddr2);



          if ((uint16_t )sock2 != (uint16_t )-1) {
              if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_FIN_WAIT_1) {
                  TransportP$sockList[sim_node()][(uint16_t )sock2].state = SOCK_CLOSE_WAIT;
                }




              if (TransportP$sockList[sim_node()][(uint16_t )sock2].state == SOCK_CLOSE_WAIT) {
                  sim_log_debug(279U, "Project3TDbg", "Sending ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n", TOS_NODE_ID, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata));
                  TransportP$makeTcpPacket(&tcpPack2, __nesc_ntoh_uint8(tempAddr2.srcPort.nxdata), __nesc_ntoh_uint8(tempAddr2.destPort.nxdata), 0, 0, TRANSPORT_ACK, 0, 1, &TransportP$repeat[sim_node()]);
                  TransportP$makePack(&sendPackage2, TOS_NODE_ID, __nesc_ntoh_uint16(package->src.nxdata), MAX_TTL, 
                  PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack2.seq.nxdata), &tcpPack2, sizeof tcpPack2);

                  TransportP$FloodSend$HistoryPushBack(TransportP$one[sim_node()]);


                  TransportP$FloodSend$handlePingReply(&sendPackage2, TransportP$one[sim_node()]);
                }
            }


          break;
        }
    }
  return SUCCESS;
}

# 102 "/home/ubuntu/workspace/Proj1Test/src/command.h"
static int getCMD(uint8_t *array, uint8_t size)
#line 102
{
  sim_log_debug(51U, "genDebug", "A Command has been Issued.\n");

  if (isPing(array, size)) {
      sim_log_debug(52U, "genDebug", "Command Type: Ping\n");
      return CMD_PING;
    }
  else {
#line 109
    if (isNgbrdmp(array, size)) {
        sim_log_debug(53U, "genDebug", "Command Type: Neighbor dump\n");
        return CMD_NEIGHBOR_DUMP;
      }
    else {
#line 113
      if (isRTdmp(array, size)) {
          sim_log_debug(54U, "genDebug", "Command Type: Route Table dump\n");
          return CMD_ROUTETABLE_DUMP;
        }
      else {
#line 117
        if (isTstSrvr(array, size)) {
            sim_log_debug(55U, "genDebug", "Command Type: Test Server\n");
            return CMD_TEST_SERVER;
          }
        else {
#line 121
          if (isTstClnt(array, size)) {
              sim_log_debug(56U, "genDebug", "Command Type: Test Client\n");
              return CMD_TEST_CLIENT;
            }
          else {
#line 125
            if (isTstClntEnd(array, size)) {
                sim_log_debug(57U, "genDebug", "Command Type: Test Client End\n");
                return CMD_TEST_CLIENT_END;
              }
            else {
#line 129
              if (isHello(array, size)) {
                  sim_log_debug(58U, "genDebug", "Command Type: Test Client End\n");
                  return CMD_HELLO;
                }
              else {
#line 133
                if (isWisp(array, size)) {
                    sim_log_debug(59U, "genDebug", "Command Type: Test Client End\n");
                    return CMD_WISP;
                  }
                else {
#line 137
                  if (isMsg(array, size)) {
                      sim_log_debug(60U, "genDebug", "Command Type: Test Client End\n");
                      return CMD_MSG;
                    }
                  else {
#line 141
                    if (isListUsr(array, size)) {
                        sim_log_debug(61U, "genDebug", "Command Type: Test Client End\n");
                        return CMD_LISTUSR;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
#line 145
  sim_log_debug(62U, "genDebug", "CMD_ERROR: \"%s\" does not match any known commands.\n", array);
  return CMD_ERROR;
}

# 677 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static socket_t TransportP$Transport$socket(void )
#line 677
{
  uint16_t i;

  if (TransportP$size[sim_node()] == 0) {
      TransportP$size[sim_node()]++;
      return (socket_t )0;
    }
  else {
      for (i = 0; i < TransportP$size[sim_node()]; i++) {

          if (TransportP$sockList[sim_node()][i].state == SOCK_CLOSED) {
              return (socket_t )i;
            }
        }
      TransportP$size[sim_node()]++;
      return (socket_t )(TransportP$size[sim_node()] - 1);
    }
}

#line 44
static error_t TransportP$Transport$bind(socket_t fd, socket_addr_t *addr)
#line 44
{


  socket_storage_t *ptr;

  sim_log_debug(243U, "Project3TDbg", "fd %d\n", (uint16_t )fd);






  TransportP$sockList[sim_node()][(uint16_t )fd].sockAddr = *addr;

  ptr = TransportP$sockList[sim_node()] + (uint16_t )fd;






  TransportP$sockList[sim_node()][(uint16_t )fd].state = SOCK_CLOSED;
  TransportP$sockList[sim_node()][(uint16_t )fd].lastByteSent = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].lastByteWritten = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].lastByteAck = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].lastByteRec = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].lastByteRead = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].lastByteExpected = 32;

  TransportP$sockList[sim_node()][(uint16_t )fd].isnA_native = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].isnB_native = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].isnA_foreign = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].isnB_foreign = 0;
  TransportP$sockList[sim_node()][(uint16_t )fd].effectiveWindow = 128;
  TransportP$buffers[sim_node()] = TransportP$Appy$getBufferAddr();
  TransportP$buffers[sim_node()][(uint16_t )fd].length = 0;
  TransportP$buffers[sim_node()][(uint16_t )fd].marker = 0;
  TransportP$buffers[sim_node()][(uint16_t )fd].lengthRec = 0;
  TransportP$buffers[sim_node()][(uint16_t )fd].markerRec = 0;

  return SUCCESS;
}

#line 128
static uint16_t TransportP$Transport$write(uint16_t fd, uint8_t *buff, uint16_t bufflen)
#line 128
{
  uint16_t numBytesWritten;
  uint16_t i;
  uint16_t pos;




  pos = TransportP$sockList[sim_node()][fd].lastByteWritten;
  sim_log_debug(244U, "Project3TDbg", "buff len %d\n", bufflen);

  i = 0;
  do {
      TransportP$sockList[sim_node()][fd].sendBuff[pos] = buff[i];

      sim_log_debug_clear(245U, "Project3TDbg", " %d ", buff[i]);
      i++;
      pos++;
      pos = pos % SOCKET_SEND_BUFFER_SIZE;
    }
  while (

  pos != TransportP$sockList[sim_node()][fd].lastByteAck && i < bufflen);
  sim_log_debug(246U, "Project3TDbg", "\n lastByteAck %d\n", TransportP$sockList[sim_node()][fd].lastByteAck);
  numBytesWritten = i;

  TransportP$sockList[sim_node()][fd].lastByteWritten = pos;

  TransportP$printSendBuffer(fd);
  return numBytesWritten;
}

#line 648
static error_t TransportP$Transport$connect(socket_t fd, socket_addr_t *addr)
#line 648
{
  transport tcpPack3;
  pack sendPackage3;


  TransportP$sockList[sim_node()][(uint16_t )fd].state = SOCK_SYN_SENT;


  TransportP$makeTcpPacket(&tcpPack3, __nesc_ntoh_uint8(addr->srcPort.nxdata), __nesc_ntoh_uint8(addr->destPort.nxdata), 0, 0, TRANSPORT_SYN, 0, 0, fd);

  TransportP$makePack(&sendPackage3, __nesc_ntoh_uint16(addr->srcAddr.nxdata), __nesc_ntoh_uint16(addr->destAddr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(tcpPack3.seq.nxdata), &tcpPack3, sizeof tcpPack3);

  TransportP$FloodSend$handlePing(&sendPackage3, TransportP$one[sim_node()]);

  return SUCCESS;
}

#line 726
static void TransportP$makeTcpPacket(transport *tcpPacket, uint8_t srcPort, uint8_t destPort, uint16_t seq, uint16_t ack, uint8_t flags, uint8_t window, uint8_t length, uint8_t *payload)
#line 726
{
  __nesc_hton_uint8(tcpPacket->srcPort.nxdata, srcPort);
  __nesc_hton_uint8(tcpPacket->destPort.nxdata, destPort);
  __nesc_hton_uint16(tcpPacket->seq.nxdata, seq);
  __nesc_hton_uint16(tcpPacket->ack.nxdata, ack);
  __nesc_hton_uint8(tcpPacket->flags.nxdata, flags);
  __nesc_hton_uint8(tcpPacket->window.nxdata, window);
  __nesc_hton_uint8(tcpPacket->length.nxdata, length);
  memcpy(tcpPacket->payload, payload, length);
  TransportP$numSent[sim_node()]++;
}

#line 718
static void TransportP$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 718
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, (uint8_t )TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, (uint8_t )protocol);
  memcpy(Package->payload, payload, length);
}

# 21 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static void FloodSendP$FloodSend$handlePing(pack *myMsg, pair one)
#line 21
{

  uint8_t temp;

#line 24
  if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == AM_BROADCAST_ADDR) {
      temp = __nesc_ntoh_uint16(myMsg->src.nxdata);
      FloodSendP$FloodSend$makePack(&FloodSendP$sendPackage[sim_node()], TOS_NODE_ID, AM_BROADCAST_ADDR, __nesc_ntoh_uint8(myMsg->TTL.nxdata) - 1, 
      PROTOCOL_PINGREPLY, __nesc_ntoh_uint16(myMsg->seq.nxdata), (uint8_t *)myMsg->payload, sizeof  myMsg->payload);
      FloodSendP$Sender$send(FloodSendP$sendPackage[sim_node()], temp);
    }
  else {
    if (__nesc_ntoh_uint8(myMsg->TTL.nxdata) >= 1) {
        FloodSendP$FloodSend$makePack(&FloodSendP$sendPackage[sim_node()], __nesc_ntoh_uint16(myMsg->src.nxdata), __nesc_ntoh_uint16(myMsg->dest.nxdata), __nesc_ntoh_uint8(myMsg->TTL.nxdata) - 1, __nesc_ntoh_uint8(
        myMsg->protocol.nxdata), __nesc_ntoh_uint16(myMsg->seq.nxdata), (uint8_t *)myMsg->payload, sizeof  myMsg->payload);


        temp = FloodSendP$neighborList$nextHopFromDest(__nesc_ntoh_uint16(myMsg->dest.nxdata));
        FloodSendP$Sender$send(FloodSendP$sendPackage[sim_node()], temp);
        sim_log_debug(186U, "Project2DV", "Routing Packet - src: %d, dest: %d, next hop: %d, cost: %d\n", __nesc_ntoh_uint16(myMsg->src.nxdata), __nesc_ntoh_uint16(myMsg->dest.nxdata), temp, FloodSendP$neighborList$costFromDest(__nesc_ntoh_uint16(myMsg->dest.nxdata)));
      }
    }
}

#line 83
static void FloodSendP$FloodSend$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 83
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, (uint8_t )TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, (uint8_t )protocol);
  memcpy(Package->payload, payload, length);
}

# 39 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
static error_t SimpleSendP$SimpleSend$send(pack msg, uint16_t dest)
#line 39
{


  if (!SimpleSendP$Pool$empty() && !SimpleSendP$busy[sim_node()]) {
      sendInfo *input;

#line 44
      input = SimpleSendP$Pool$get();
      input->packet = msg;
      input->dest = dest;

      SimpleSendP$Queue$enqueue(input);

      SimpleSendP$postSendTask();

      return SUCCESS;
    }

  return FAIL;
}

# 69 "/home/ubuntu/local/tinyos-2.1.1/tos/system/QueueC.nc"
static void /*SimpleSendC.QueueC*/QueueC$0$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(236U, "QueueC", "head <-");
  for (i = /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()]; i < /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()] + /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]; i++) {
      sim_log_debug_clear(237U, "QueueC", "[");
      for (j = 0; j < sizeof(/*SimpleSendC.QueueC*/QueueC$0$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*SimpleSendC.QueueC*/QueueC$0$queue[sim_node()][i % 30])[j];

#line 77
          sim_log_debug_clear(238U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(239U, "QueueC", "] ");
    }
  sim_log_debug_clear(240U, "QueueC", "<- tail\n");
}

# 33 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/SimpleSendP.nc"
static void SimpleSendP$postSendTask(void )
#line 33
{
  if (SimpleSendP$sendTimer$isRunning() == FALSE) {
      SimpleSendP$sendTimer$startOneShot(SimpleSendP$Random$rand16() % 200 + 500);
    }
}

# 159 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

#line 144
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 205 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(126U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(127U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 69 "/home/ubuntu/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 79 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static uint8_t /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$nxtHopFrmDst(uint8_t dest)
#line 79
{
  uint16_t i;

#line 81
  for (i = 0; i < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; i++) {
      if (/*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].dest == dest) {
          return /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].nextHop;
        }
    }
  return (void *)0;
}

#line 156
static uint8_t /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$cstFromDst(uint8_t dest)
#line 156
{
  uint16_t i;

#line 158
  for (i = 0; i < /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]; i++) {
      if (/*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].dest == dest) {
          return /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][i].cost;
        }
    }
  return (void *)0;
}

# 754 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static socket_t TransportP$Transport$searchNewSock_default(socket_addr_t *addr)
#line 754
{
  uint16_t i;

#line 756
  if (TransportP$size[sim_node()] == 0) {
      return -1;
    }

  for (i = 0; i < TransportP$size[sim_node()]; i++) {

      if (__nesc_ntoh_uint16(TransportP$sockList[sim_node()][i].sockAddr.srcAddr.nxdata) == __nesc_ntoh_uint16(addr->srcAddr.nxdata) && __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.srcPort.nxdata) == __nesc_ntoh_uint8(addr->srcPort.nxdata) && __nesc_ntoh_uint8(TransportP$sockList[sim_node()][i].sockAddr.destPort.nxdata) == __nesc_ntoh_uint8(addr->destPort.nxdata)) {
          return (socket_t )i;
        }
    }

  return -1;
}

#line 1064
static void TransportP$Transport$resetSendBuff(uint16_t fd)
#line 1064
{

  TransportP$sockList[sim_node()][fd].isnA_native = 0;
  TransportP$sockList[sim_node()][fd].isnB_native = 0;
  TransportP$sockList[sim_node()][fd].lastByteAck = 0;
  TransportP$sockList[sim_node()][fd].lastByteSent = 0;
  TransportP$sockList[sim_node()][fd].lastByteWritten = 0;
  TransportP$buffers[sim_node()][fd].length = 0;
  TransportP$buffers[sim_node()][fd].marker = 0;
}

# 11 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/HistoryListC.nc"
static void /*NodeC.HistListC*/HistoryListC$0$HistoryList$pushback(pair input)
#line 11
{
  if (/*NodeC.HistListC*/HistoryListC$0$size[sim_node()] < /*NodeC.HistListC*/HistoryListC$0$MAX_SIZE[sim_node()]) {
      /*NodeC.HistListC*/HistoryListC$0$container[sim_node()][/*NodeC.HistListC*/HistoryListC$0$size[sim_node()]] = input;
      /*NodeC.HistListC*/HistoryListC$0$size[sim_node()]++;
    }
  else {
      uint16_t i;

#line 18
      for (i = 0; i < /*NodeC.HistListC*/HistoryListC$0$size[sim_node()] - 1; i++) {
          /*NodeC.HistListC*/HistoryListC$0$container[sim_node()][i] = /*NodeC.HistListC*/HistoryListC$0$container[sim_node()][i + 1];
        }
      /*NodeC.HistListC*/HistoryListC$0$container[sim_node()][/*NodeC.HistListC*/HistoryListC$0$size[sim_node()] - 1] = input;
    }
}

# 48 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/FloodSendP.nc"
static void FloodSendP$FloodSend$handlePingReply(pack *myMsg, pair one)
#line 48
{

  uint8_t temp;

#line 51
  if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == AM_BROADCAST_ADDR) {

      if (!FloodSendP$neighborList$neighborsContains((uint8_t )__nesc_ntoh_uint16(myMsg->src.nxdata))) {
          FloodSendP$FloodSend$makePair(&FloodSendP$two[sim_node()], (uint8_t )__nesc_ntoh_uint16(myMsg->src.nxdata), (uint8_t )4);
          FloodSendP$neighborList$pushback(FloodSendP$two[sim_node()]);
        }
      else 


        {
          FloodSendP$neighborList$incrementANeighbor((uint8_t )__nesc_ntoh_uint16(myMsg->src.nxdata));
        }
    }
  else {
#line 64
    if (__nesc_ntoh_uint8(myMsg->TTL.nxdata) >= 1) {
        FloodSendP$FloodSend$makePack(&FloodSendP$sendPackage[sim_node()], __nesc_ntoh_uint16(myMsg->src.nxdata), __nesc_ntoh_uint16(myMsg->dest.nxdata), __nesc_ntoh_uint8(myMsg->TTL.nxdata) - 1, __nesc_ntoh_uint8(
        myMsg->protocol.nxdata), __nesc_ntoh_uint16(myMsg->seq.nxdata), (uint8_t *)myMsg->payload, sizeof  myMsg->payload);


        temp = FloodSendP$neighborList$nextHopFromDest(__nesc_ntoh_uint16(myMsg->dest.nxdata));
        FloodSendP$Sender$send(FloodSendP$sendPackage[sim_node()], temp);
        sim_log_debug(187U, "Project2DV", "Routing Packet - src: %d, dest: %d, next hop: %d, cost: %d\n", __nesc_ntoh_uint16(myMsg->src.nxdata), __nesc_ntoh_uint16(myMsg->dest.nxdata), temp, FloodSendP$neighborList$costFromDest(__nesc_ntoh_uint16(myMsg->dest.nxdata)));
      }
    }
}

# 105 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/NeighborListC.nc"
static bool /*NodeC.neighborListC*/NeighborListC$0$NeighborList$neighborsContains(uint8_t toFind)
#line 105
{

  if (/*NodeC.neighborListC*/NeighborListC$0$size[sim_node()] == 0) {

      return FALSE;
    }
  else 
#line 110
    {
      uint16_t i = 0;

#line 112
      for (i; i < /*NodeC.neighborListC*/NeighborListC$0$size[sim_node()]; i++) {
          if (/*NodeC.neighborListC*/NeighborListC$0$container[sim_node()][i].src == toFind) {
              return TRUE;
            }
        }
      return FALSE;
    }
}

# 696 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static error_t TransportP$Transport$release(socket_t fd)
#line 696
{
  if (fd == (uint16_t )-1) {
#line 697
      return FAIL;
    }
  else 
#line 698
    {
      TransportP$sockList[sim_node()][(uint16_t )fd].state = SOCK_CLOSED;
    }
  return SUCCESS;
}

#line 1043
static void TransportP$printRecBuffer(uint16_t fd)
#line 1043
{
  uint16_t i;

#line 1045
  i = 0;
  sim_log_debug(314U, "Project3TDbg", "ReceiveBuffer\n");
  sim_log_debug(315U, "Project3TDbg", "lastByteExp %d\n", TransportP$sockList[sim_node()][fd].lastByteExpected);
  sim_log_debug(316U, "Project3TDbg", "lastByteRec %d\n", TransportP$sockList[sim_node()][fd].lastByteRec);
  sim_log_debug(317U, "Project3TDbg", "lastByteRead %d\n", TransportP$sockList[sim_node()][fd].lastByteRead);
  for (i = 0; i < SOCKET_RECEIVE_BUFFER_SIZE; i++) {
      sim_log_debug_clear(318U, "Project3TDbg", " %d ", TransportP$sockList[sim_node()][fd].recBuff[i]);
    }
  sim_log_debug_clear(319U, "Project3TDbg", "\n");
}

#line 622
static uint16_t TransportP$Transport$read(uint16_t fd, uint8_t *buff, uint16_t bufflen)
#line 622
{
  uint16_t i;
  uint16_t pos;

#line 625
  i = 0;
  pos = TransportP$sockList[sim_node()][fd].lastByteRead;
  sim_log_debug(280U, "Project3TDbg", "lastByteRead in read() %d\n", TransportP$sockList[sim_node()][fd].lastByteRead);
  while (pos != TransportP$sockList[sim_node()][fd].lastByteRec && i < bufflen) {
      buff[i] = TransportP$sockList[sim_node()][fd].recBuff[pos];
      sim_log_debug_clear(281U, "Project3TDbg", " %d ", buff[i]);
      i++;
      pos++;
      pos = pos % SOCKET_RECEIVE_BUFFER_SIZE;
    }

  TransportP$sockList[sim_node()][fd].lastByteRead = pos;
  sim_log_debug(282U, "Project3TDbg", "\n lastByteRec %d\n", TransportP$sockList[sim_node()][fd].lastByteRec);


  return i;
}

# 399 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static void AppyP$Appy$processData(socket_addr_t sockAddr, uint16_t sequence)
#line 399
{
  socket_t sockz;
  uint8_t *point;
  uint8_t *iterations;
  uint8_t it;
  uint8_t cmdType[7] = { 0, 0, 0, 0, 0, 0, 0 };
  uint8_t inputUsr[20];

  uint16_t handleUsr;
  socket_addr_t tempAddr2;

  uint16_t inputFD;
  uint16_t browse;
  appData *operator;
  uint16_t index;
  uint16_t histResult;

  sim_log_debug(337U, "Project3TDbg", "Processing the Data here usrSiz %d\n", AppyP$usrSiz[sim_node()]);
  sockz = AppyP$Transport$searchNewSock_default(&sockAddr);
  if (TOS_NODE_ID == __nesc_ntoh_uint16(sockAddr.srcAddr.nxdata)) {



      sim_log_debug(338U, "Project3TDbg", "get to client side process lengthrec %d\n", AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec);
      point = AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec;
      if (point[AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2 - 2 - 2] == '\r' && point[AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2 - 1 - 2] == '\n' && AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec > 0) {
          histResult = AppyP$findCNHist((uint16_t )sockz, sequence);
          if ((uint16_t )histResult == (uint16_t )-1) {
              AppyP$insertCNHist((uint16_t )sockz, sequence);

              sim_log_debug(339U, "Project3TDbg", "the message on client side: %s\n", AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec);
            }
          AppyP$Transport$resetRecBuff((uint16_t )sockz);
        }
    }
  else {
    if (TOS_NODE_ID == __nesc_ntoh_uint16(sockAddr.destAddr.nxdata)) {
        sim_log_debug(340U, "Project3TDbg", "get to server side process, printing buffers.dataRec\n");


        iterations = AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec;
        for (it = 0; it < AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2; it++) {
            sim_log_debug_clear(341U, "Project3TDbg", " %d ", iterations[it]);
          }
        sim_log_debug_clear(342U, "Project3TDbg", "\n");

        point = AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec;

        if (point[AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2 - 2 - 2] == '\r' && point[AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2 - 1 - 2] == '\n' && AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec > 0) {
            sim_log_debug(343U, "Project3TDbg", "we should reset here for server\n");

            iterations = AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec;
            point = cmdType;
            while (iterations[0] != 32) {
                point[0] = iterations[0];
                iterations++;
                point++;
              }
            sim_log_debug(344U, "Project3TDbg", "command type %s\n", cmdType);
            if (cmdType[0] == 'h' && cmdType[1] == 'e' && cmdType[2] == 'l' && cmdType[3] == 'l' && cmdType[4] == 'o') {


                iterations++;
                for (it = 0; it < 20; it++) {
                    inputUsr[it] = iterations[0];
                    iterations++;
                  }
                sim_log_debug(345U, "Project3TDbg", "user name: %s\n", inputUsr);
                iterations++;
                inputFD = AppyP$findFDFromUsr(inputUsr);
                sim_log_debug(346U, "Project3TDbg", "inputFD: %d\n", inputFD);
                if ((uint16_t )inputFD == (uint16_t )-1) {
                    sim_log_debug(347U, "Project3TDbg", "the message: %s\n", AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec);
                    for (it = 0; it < 20; it++) {

                        AppyP$users[sim_node()][AppyP$usrSiz[sim_node()]].userName[it] = inputUsr[it];
                      }
                    AppyP$usrSiz[sim_node()]++;
                    sim_log_debug(348U, "Project3TDbg", "added requested mapping to server usrSiz %d\n", AppyP$usrSiz[sim_node()]);
                  }
                sim_log_debug(349U, "Project3TDbg", "exiting hello command setup\n");
              }
            else {









              if (cmdType[0] == 'w' && cmdType[1] == 'h' && cmdType[2] == 'i' && cmdType[3] == 's' && cmdType[4] == 'p' && cmdType[5] == 'e' && cmdType[6] == 'r') {
                  sim_log_debug(350U, "Project3TDbg", "process whisper\n");
                  iterations++;
                  for (it = 0; it < 20; it++) {
                      inputUsr[it] = iterations[0];
                      iterations++;
                    }
                  sim_log_debug(351U, "Project3TDbg", "user name: %s\n", inputUsr);
                  iterations++;
                  sim_log_debug(352U, "Project3TDbg", "parsed message %s\n", iterations);
                  inputFD = AppyP$findFDFromUsr(inputUsr);

                  histResult = AppyP$findCNHist((uint16_t )sockz, sequence);
                  if ((uint16_t )histResult == (uint16_t )-1) {

                      AppyP$insertCNHist((uint16_t )sockz, sequence);
                      sim_log_debug(353U, "Project3TDbg", "the message: %s\n", AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec);
                      if ((uint16_t )inputFD != (uint16_t )-1) {

                          sim_log_debug(354U, "Project3TDbg", "sending from whisper\n");
                          for (browse = 0; browse < AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2; browse++) {
                              AppyP$buffers[sim_node()][inputFD].data[browse] = AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec[browse];
                            }

                          AppyP$Transport$resetSendBuff(inputFD);
                          AppyP$buffers[sim_node()][inputFD].length = AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec;

                          operator = AppyP$buffers[sim_node()] + inputFD;


                          AppyP$buffers[sim_node()][inputFD].marker = AppyP$Transport$write(inputFD, operator->data, AppyP$buffers[sim_node()][inputFD].length * 2) / 2;
                        }
                    }
                }
              else {




                if (cmdType[0] == 'm' && cmdType[1] == 's' && cmdType[2] == 'g') {
                    sim_log_debug(355U, "Project3TDbg", "process msg\n");
                    iterations++;
                    sim_log_debug(356U, "Project3TDbg", "parsed message %s\n", iterations);

                    histResult = AppyP$findCNHist((uint16_t )sockz, sequence);
                    if ((uint16_t )histResult == (uint16_t )-1) {

                        AppyP$insertCNHist((uint16_t )sockz, sequence);
                        sim_log_debug(357U, "Project3TDbg", "the message: %s\n", AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec);
                        sim_log_debug(358U, "Project3TDbg", "sending from msg\n");
                        for (browse = 0; browse < AppyP$usrSiz[sim_node()]; browse++) {

                            for (index = 0; index < AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec * 2; index++) {
                                AppyP$buffers[sim_node()][AppyP$users[sim_node()][browse].fileDesc].data[index] = AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec[index];
                              }

                            AppyP$Transport$resetSendBuff(AppyP$users[sim_node()][browse].fileDesc);
                            AppyP$buffers[sim_node()][AppyP$users[sim_node()][browse].fileDesc].length = AppyP$buffers[sim_node()][(uint16_t )sockz].lengthRec;
                            sim_log_debug(359U, "Project3TDbg", "fd %d length %d\n", AppyP$users[sim_node()][browse].fileDesc, AppyP$buffers[sim_node()][AppyP$users[sim_node()][browse].fileDesc].length);
                            operator = AppyP$buffers[sim_node()] + AppyP$users[sim_node()][browse].fileDesc;


                            AppyP$buffers[sim_node()][AppyP$users[sim_node()][browse].fileDesc].marker = AppyP$Transport$write(AppyP$users[sim_node()][browse].fileDesc, operator->data, AppyP$buffers[sim_node()][AppyP$users[sim_node()][browse].fileDesc].length * 2) / 2;
                          }
                      }
                  }
                else {



                  if (cmdType[0] == 'l' && cmdType[1] == 'i' && cmdType[2] == 's' && cmdType[3] == 't' && cmdType[4] == 'u' && cmdType[5] == 's' && cmdType[6] == 'r') {
                      sim_log_debug(360U, "Project3TDbg", "process listusr\n");




                      histResult = AppyP$findCNHist((uint16_t )sockz, sequence);
                      if ((uint16_t )histResult == (uint16_t )-1) {
                          sim_log_debug(361U, "Project3TDbg", "sending from listusr\n");
                          AppyP$insertCNHist((uint16_t )sockz, sequence);
                          sim_log_debug(362U, "Project3TDbg", "the message: %s\n", AppyP$buffers[sim_node()][(uint16_t )sockz].dataRec);
                          point = AppyP$buffers[sim_node()][(uint16_t )sockz].data;
                          point[0] = 'l';
                          point[1] = 'i';
                          point[2] = 's';
                          point[3] = 't';
                          point[4] = 'U';
                          point[5] = 's';
                          point[6] = 'r';
                          point[7] = 'R';
                          point[8] = 'p';
                          point[9] = 'l';
                          point[10] = 'y';
                          point[11] = ' ';
                          point = point + 12;
                          AppyP$Transport$resetSendBuff((uint16_t )sockz);
                          AppyP$buffers[sim_node()][(uint16_t )sockz].length = 12;
                          for (index = 0; index < AppyP$usrSiz[sim_node()]; index++) {
                              for (browse = 0; browse < 20; browse++) {
                                  point[browse] = AppyP$users[sim_node()][index].userName[browse];
                                  AppyP$buffers[sim_node()][(uint16_t )sockz].length += 1;
                                }
                              point = point + 20;
                              point[0] = ',';
                              point[1] = ' ';
                              point = point + 2;
                              AppyP$buffers[sim_node()][(uint16_t )sockz].length += 2;
                            }
                          point[0] = '\r';
                          point[1] = '\n';
                          point[2] = 0;
                          point[3] = 0;

                          AppyP$buffers[sim_node()][(uint16_t )sockz].length += 4;



                          AppyP$buffers[sim_node()][(uint16_t )sockz].length = AppyP$buffers[sim_node()][(uint16_t )sockz].length / 2;
                          operator = AppyP$buffers[sim_node()] + (uint16_t )sockz;


                          AppyP$buffers[sim_node()][(uint16_t )sockz].marker = AppyP$Transport$write((uint16_t )sockz, operator->data, AppyP$buffers[sim_node()][(uint16_t )sockz].length * 2) / 2;
                        }
                    }
                  }
                }
              }

            AppyP$Transport$resetRecBuff((uint16_t )sockz);
          }
      }
    }
}

#line 698
static uint16_t AppyP$findCNHist(uint16_t inputFd, uint16_t inputSN)
#line 698
{
  uint16_t fz;

#line 700
  for (fz = 0; fz < 10; fz++) {
      if (AppyP$commandHistory[sim_node()][fz].fd == inputFd && AppyP$commandHistory[sim_node()][fz].num == inputSN) {
          return 1;
        }
    }
  return -1;
}

#line 707
static void AppyP$insertCNHist(uint16_t inputFd, uint16_t inputSN)
#line 707
{
  AppyP$commandHistory[sim_node()][AppyP$chSiz[sim_node()]].fd = inputFd;
  AppyP$commandHistory[sim_node()][AppyP$chSiz[sim_node()]].num = inputSN;
  AppyP$chSiz[sim_node()]++;
  sim_log_debug(363U, "Project3TDbg", "chSiz %d\n", AppyP$chSiz[sim_node()]);
}

# 1055 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/TransportP.nc"
static void TransportP$Transport$resetRecBuff(uint16_t fd)
#line 1055
{
  TransportP$sockList[sim_node()][fd].isnA_foreign = 0;
  TransportP$sockList[sim_node()][fd].isnB_foreign = 0;
  TransportP$sockList[sim_node()][fd].lastByteRec = 0;
  TransportP$sockList[sim_node()][fd].lastByteRead = 0;
  TransportP$sockList[sim_node()][fd].lastByteExpected = 32;
  TransportP$buffers[sim_node()][fd].lengthRec = 0;
  TransportP$buffers[sim_node()][fd].markerRec = 0;
}

# 653 "/home/ubuntu/workspace/Proj1Test/src/lib/modules/AppyP.nc"
static uint16_t AppyP$findFDFromUsr(uint8_t *usr)
#line 653
{
  uint16_t i;
  uint16_t j;

  if (AppyP$usrSiz[sim_node()] > 0) {
      for (i = 0; i < AppyP$usrSiz[sim_node()]; i++) {

          for (j = 0; j < 20; j++) {



              if (usr[j] != AppyP$users[sim_node()][i].userName[j]) {
                  break;
                }
              if (j == 19) {


                  return AppyP$users[sim_node()][i].fileDesc;
                }
            }
        }
    }

  return -1;
}

# 315 "/home/ubuntu/workspace/Proj1Test/src/Node.nc"
static void Node$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 315
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, (uint8_t )TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, (uint8_t )protocol);
  memcpy(Package->payload, payload, length);
}

# 43 "/home/ubuntu/workspace/Proj1Test/src/dataStructures/modules/RoutingTableC.nc"
static void /*NodeC.RoutTableC*/RoutingTableC$0$RoutingTable$pushback(dvr element)
#line 43
{
  if (/*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()] < /*NodeC.RoutTableC*/RoutingTableC$0$MAX_SIZE[sim_node()]) {
      /*NodeC.RoutTableC*/RoutingTableC$0$table[sim_node()][/*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]] = element;
      /*NodeC.RoutTableC*/RoutingTableC$0$size[sim_node()]++;
    }
}

# 110 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 64;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(122U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 180 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(124U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(125U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 163 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 78
  sim_log_debug(132U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 274 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(150U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(151U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 189 "/home/ubuntu/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(231U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

# 248 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 307 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 216 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 73 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 212 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(194U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(195U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(196U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(197U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(198U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(215U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/home/ubuntu/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(218U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(207U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 154 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 106 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$Control$start(void )
#line 106
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(138U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(139U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

# 90 "/home/ubuntu/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(129U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(130U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(128U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module Node */
  if (!strcmp(varname, "Node$iteration"))
  {
    *addr = (uintptr_t)&Node$iteration[__nesc_mote];
    *size = sizeof(Node$iteration[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$sendPackage"))
  {
    *addr = (uintptr_t)&Node$sendPackage[__nesc_mote];
    *size = sizeof(Node$sendPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$routingPackage"))
  {
    *addr = (uintptr_t)&Node$routingPackage[__nesc_mote];
    *size = sizeof(Node$routingPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$ngbrPackage"))
  {
    *addr = (uintptr_t)&Node$ngbrPackage[__nesc_mote];
    *size = sizeof(Node$ngbrPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$one"))
  {
    *addr = (uintptr_t)&Node$one[__nesc_mote];
    *size = sizeof(Node$one[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$randNum"))
  {
    *addr = (uintptr_t)&Node$randNum[__nesc_mote];
    *size = sizeof(Node$randNum[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$seqNO"))
  {
    *addr = (uintptr_t)&Node$seqNO[__nesc_mote];
    *size = sizeof(Node$seqNO[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$someNum"))
  {
    *addr = (uintptr_t)&Node$someNum[__nesc_mote];
    *size = sizeof(Node$someNum[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$handle"))
  {
    *addr = (uintptr_t)&Node$handle[__nesc_mote];
    *size = sizeof(Node$handle[__nesc_mote]);
    return 0;
  }

  /* Module FloodSendP */
  if (!strcmp(varname, "FloodSendP$two"))
  {
    *addr = (uintptr_t)&FloodSendP$two[__nesc_mote];
    *size = sizeof(FloodSendP$two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "FloodSendP$sendPackage"))
  {
    *addr = (uintptr_t)&FloodSendP$sendPackage[__nesc_mote];
    *size = sizeof(FloodSendP$sendPackage[__nesc_mote]);
    return 0;
  }

  /* Module HistoryListC$0 */
  if (!strcmp(varname, "/*NodeC.HistListC*/HistoryListC$0$MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.HistListC*/HistoryListC$0$MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.HistListC*/HistoryListC$0$MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.HistListC*/HistoryListC$0$container"))
  {
    *addr = (uintptr_t)&/*NodeC.HistListC*/HistoryListC$0$container[__nesc_mote];
    *size = sizeof(/*NodeC.HistListC*/HistoryListC$0$container[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.HistListC*/HistoryListC$0$size"))
  {
    *addr = (uintptr_t)&/*NodeC.HistListC*/HistoryListC$0$size[__nesc_mote];
    *size = sizeof(/*NodeC.HistListC*/HistoryListC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module NeighborListC$0 */
  if (!strcmp(varname, "/*NodeC.neighborListC*/NeighborListC$0$MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.neighborListC*/NeighborListC$0$MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.neighborListC*/NeighborListC$0$MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.neighborListC*/NeighborListC$0$container"))
  {
    *addr = (uintptr_t)&/*NodeC.neighborListC*/NeighborListC$0$container[__nesc_mote];
    *size = sizeof(/*NodeC.neighborListC*/NeighborListC$0$container[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.neighborListC*/NeighborListC$0$size"))
  {
    *addr = (uintptr_t)&/*NodeC.neighborListC*/NeighborListC$0$size[__nesc_mote];
    *size = sizeof(/*NodeC.neighborListC*/NeighborListC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module RoutingTableC$0 */
  if (!strcmp(varname, "/*NodeC.RoutTableC*/RoutingTableC$0$table"))
  {
    *addr = (uintptr_t)&/*NodeC.RoutTableC*/RoutingTableC$0$table[__nesc_mote];
    *size = sizeof(/*NodeC.RoutTableC*/RoutingTableC$0$table[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.RoutTableC*/RoutingTableC$0$MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.RoutTableC*/RoutingTableC$0$MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.RoutTableC*/RoutingTableC$0$MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.RoutTableC*/RoutingTableC$0$size"))
  {
    *addr = (uintptr_t)&/*NodeC.RoutTableC*/RoutingTableC$0$size[__nesc_mote];
    *size = sizeof(/*NodeC.RoutTableC*/RoutingTableC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  /* Module SimpleSendP */
  if (!strcmp(varname, "SimpleSendP$busy"))
  {
    *addr = (uintptr_t)&SimpleSendP$busy[__nesc_mote];
    *size = sizeof(SimpleSendP$busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimpleSendP$pkt"))
  {
    *addr = (uintptr_t)&SimpleSendP$pkt[__nesc_mote];
    *size = sizeof(SimpleSendP$pkt[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$0 */
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$free"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$index"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$0 */
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$queue"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$head"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$head[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$tail"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$tail[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$size"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$size[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module TransportP */
  if (!strcmp(varname, "TransportP$buffers"))
  {
    *addr = (uintptr_t)&TransportP$buffers[__nesc_mote];
    *size = sizeof(TransportP$buffers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$congPack"))
  {
    *addr = (uintptr_t)&TransportP$congPack[__nesc_mote];
    *size = sizeof(TransportP$congPack[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$tcpPack"))
  {
    *addr = (uintptr_t)&TransportP$tcpPack[__nesc_mote];
    *size = sizeof(TransportP$tcpPack[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$sendPackage"))
  {
    *addr = (uintptr_t)&TransportP$sendPackage[__nesc_mote];
    *size = sizeof(TransportP$sendPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$one"))
  {
    *addr = (uintptr_t)&TransportP$one[__nesc_mote];
    *size = sizeof(TransportP$one[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$newSock"))
  {
    *addr = (uintptr_t)&TransportP$newSock[__nesc_mote];
    *size = sizeof(TransportP$newSock[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$sockList"))
  {
    *addr = (uintptr_t)&TransportP$sockList[__nesc_mote];
    *size = sizeof(TransportP$sockList[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$size"))
  {
    *addr = (uintptr_t)&TransportP$size[__nesc_mote];
    *size = sizeof(TransportP$size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$EstimatedRTT"))
  {
    *addr = (uintptr_t)&TransportP$EstimatedRTT[__nesc_mote];
    *size = sizeof(TransportP$EstimatedRTT[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$SampleRTT"))
  {
    *addr = (uintptr_t)&TransportP$SampleRTT[__nesc_mote];
    *size = sizeof(TransportP$SampleRTT[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$numSent"))
  {
    *addr = (uintptr_t)&TransportP$numSent[__nesc_mote];
    *size = sizeof(TransportP$numSent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$numRec"))
  {
    *addr = (uintptr_t)&TransportP$numRec[__nesc_mote];
    *size = sizeof(TransportP$numRec[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$handle"))
  {
    *addr = (uintptr_t)&TransportP$handle[__nesc_mote];
    *size = sizeof(TransportP$handle[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$repeat"))
  {
    *addr = (uintptr_t)&TransportP$repeat[__nesc_mote];
    *size = sizeof(TransportP$repeat[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportP$repeat2"))
  {
    *addr = (uintptr_t)&TransportP$repeat2[__nesc_mote];
    *size = sizeof(TransportP$repeat2[__nesc_mote]);
    return 0;
  }

  /* Module AppyP */
  if (!strcmp(varname, "AppyP$buffers"))
  {
    *addr = (uintptr_t)&AppyP$buffers[__nesc_mote];
    *size = sizeof(AppyP$buffers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AppyP$commandHistory"))
  {
    *addr = (uintptr_t)&AppyP$commandHistory[__nesc_mote];
    *size = sizeof(AppyP$commandHistory[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AppyP$users"))
  {
    *addr = (uintptr_t)&AppyP$users[__nesc_mote];
    *size = sizeof(AppyP$users[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AppyP$usrSiz"))
  {
    *addr = (uintptr_t)&AppyP$usrSiz[__nesc_mote];
    *size = sizeof(AppyP$usrSiz[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AppyP$chSiz"))
  {
    *addr = (uintptr_t)&AppyP$chSiz[__nesc_mote];
    *size = sizeof(AppyP$chSiz[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AppyP$commandNum"))
  {
    *addr = (uintptr_t)&AppyP$commandNum[__nesc_mote];
    *size = sizeof(AppyP$commandNum[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module Node */
  memset((void *)&Node$iteration[__nesc_mote], 0, sizeof Node$iteration[__nesc_mote]);
  memset((void *)&Node$sendPackage[__nesc_mote], 0, sizeof Node$sendPackage[__nesc_mote]);
  memset((void *)&Node$routingPackage[__nesc_mote], 0, sizeof Node$routingPackage[__nesc_mote]);
  memset((void *)&Node$ngbrPackage[__nesc_mote], 0, sizeof Node$ngbrPackage[__nesc_mote]);
  memset((void *)&Node$one[__nesc_mote], 0, sizeof Node$one[__nesc_mote]);
  memset((void *)&Node$randNum[__nesc_mote], 0, sizeof Node$randNum[__nesc_mote]);
  memset((void *)&Node$seqNO[__nesc_mote], 0, sizeof Node$seqNO[__nesc_mote]);
  memset((void *)&Node$someNum[__nesc_mote], 0, sizeof Node$someNum[__nesc_mote]);
  memset((void *)&Node$handle[__nesc_mote], 0, sizeof Node$handle[__nesc_mote]);

  /* Module FloodSendP */
  memset((void *)&FloodSendP$two[__nesc_mote], 0, sizeof FloodSendP$two[__nesc_mote]);
  memset((void *)&FloodSendP$sendPackage[__nesc_mote], 0, sizeof FloodSendP$sendPackage[__nesc_mote]);

  /* Module HistoryListC$0 */
  /*NodeC.HistListC*/HistoryListC$0$MAX_SIZE[__nesc_mote] = 30;
  memset((void *)&/*NodeC.HistListC*/HistoryListC$0$container[__nesc_mote], 0, sizeof /*NodeC.HistListC*/HistoryListC$0$container[__nesc_mote]);
  /*NodeC.HistListC*/HistoryListC$0$size[__nesc_mote] = 0;

  /* Module NeighborListC$0 */
  /*NodeC.neighborListC*/NeighborListC$0$MAX_SIZE[__nesc_mote] = 30;
  memset((void *)&/*NodeC.neighborListC*/NeighborListC$0$container[__nesc_mote], 0, sizeof /*NodeC.neighborListC*/NeighborListC$0$container[__nesc_mote]);
  /*NodeC.neighborListC*/NeighborListC$0$size[__nesc_mote] = 0;

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module RoutingTableC$0 */
  memset((void *)&/*NodeC.RoutTableC*/RoutingTableC$0$table[__nesc_mote], 0, sizeof /*NodeC.RoutTableC*/RoutingTableC$0$table[__nesc_mote]);
  /*NodeC.RoutTableC*/RoutingTableC$0$MAX_SIZE[__nesc_mote] = 20;
  /*NodeC.RoutTableC*/RoutingTableC$0$size[__nesc_mote] = 0;

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

  /* Module SimpleSendP */
  SimpleSendP$busy[__nesc_mote] = FALSE;
  memset((void *)&SimpleSendP$pkt[__nesc_mote], 0, sizeof SimpleSendP$pkt[__nesc_mote]);

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 1;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module PoolP$0 */
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote]);
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote]);
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote]);
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote]);

  /* Module QueueC$0 */
  memset((void *)&/*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote], 0, sizeof /*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote]);
  /*SimpleSendC.QueueC*/QueueC$0$head[__nesc_mote] = 0;
  /*SimpleSendC.QueueC*/QueueC$0$tail[__nesc_mote] = 0;
  /*SimpleSendC.QueueC*/QueueC$0$size[__nesc_mote] = 0;

  /* Module TransportP */
  memset((void *)&TransportP$buffers[__nesc_mote], 0, sizeof TransportP$buffers[__nesc_mote]);
  TransportP$congPack[__nesc_mote] = 1;
  memset((void *)&TransportP$tcpPack[__nesc_mote], 0, sizeof TransportP$tcpPack[__nesc_mote]);
  memset((void *)&TransportP$sendPackage[__nesc_mote], 0, sizeof TransportP$sendPackage[__nesc_mote]);
  memset((void *)&TransportP$one[__nesc_mote], 0, sizeof TransportP$one[__nesc_mote]);
  memset((void *)&TransportP$newSock[__nesc_mote], 0, sizeof TransportP$newSock[__nesc_mote]);
  memset((void *)&TransportP$sockList[__nesc_mote], 0, sizeof TransportP$sockList[__nesc_mote]);
  TransportP$size[__nesc_mote] = 0;
  TransportP$EstimatedRTT[__nesc_mote] = 3000;
  TransportP$SampleRTT[__nesc_mote] = 3000;
  TransportP$numSent[__nesc_mote] = 0;
  TransportP$numRec[__nesc_mote] = 0;
  memset((void *)&TransportP$handle[__nesc_mote], 0, sizeof TransportP$handle[__nesc_mote]);
  memcpy((void *)&TransportP$repeat[__nesc_mote], (void *)&(unsigned char [12]){ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, sizeof TransportP$repeat[__nesc_mote]);
  memcpy((void *)&TransportP$repeat2[__nesc_mote], (void *)&(unsigned char [12]){ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, sizeof TransportP$repeat2[__nesc_mote]);

  /* Module AppyP */
  memset((void *)&AppyP$buffers[__nesc_mote], 0, sizeof AppyP$buffers[__nesc_mote]);
  memset((void *)&AppyP$commandHistory[__nesc_mote], 0, sizeof AppyP$commandHistory[__nesc_mote]);
  memset((void *)&AppyP$users[__nesc_mote], 0, sizeof AppyP$users[__nesc_mote]);
  AppyP$usrSiz[__nesc_mote] = 0;
  AppyP$chSiz[__nesc_mote] = 0;
  AppyP$commandNum[__nesc_mote] = 0;

}
