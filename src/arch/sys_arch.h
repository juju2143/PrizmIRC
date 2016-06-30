#ifndef __ARCH_SYS_ARCH_H__
#define __ARCH_SYS_ARCH_H__

#include <fxcg/rtc.h>

#define SYS_MBOX_NULL   NULL
#define SYS_SEM_NULL    NULL

typedef void * sys_prot_t;

typedef void * sys_sem_t;

typedef void * sys_mbox_t;

typedef void * sys_thread_t;

#define sys_now RTC_GetTicks

#endif /* __ARCH_SYS_ARCH_H__ */
