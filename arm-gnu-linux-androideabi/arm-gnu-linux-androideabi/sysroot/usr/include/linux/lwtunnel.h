/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LWTUNNEL_H_
#define _UAPI_LWTUNNEL_H_
#include <linux/types.h>
enum lwtunnel_encap_types {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_ENCAP_NONE,
  LWTUNNEL_ENCAP_MPLS,
  LWTUNNEL_ENCAP_IP,
  LWTUNNEL_ENCAP_ILA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_ENCAP_IP6,
  LWTUNNEL_ENCAP_SEG6,
  LWTUNNEL_ENCAP_BPF,
  __LWTUNNEL_ENCAP_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LWTUNNEL_ENCAP_MAX (__LWTUNNEL_ENCAP_MAX - 1)
enum lwtunnel_ip_t {
  LWTUNNEL_IP_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP_ID,
  LWTUNNEL_IP_DST,
  LWTUNNEL_IP_SRC,
  LWTUNNEL_IP_TTL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP_TOS,
  LWTUNNEL_IP_FLAGS,
  LWTUNNEL_IP_PAD,
  __LWTUNNEL_IP_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LWTUNNEL_IP_MAX (__LWTUNNEL_IP_MAX - 1)
enum lwtunnel_ip6_t {
  LWTUNNEL_IP6_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP6_ID,
  LWTUNNEL_IP6_DST,
  LWTUNNEL_IP6_SRC,
  LWTUNNEL_IP6_HOPLIMIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP6_TC,
  LWTUNNEL_IP6_FLAGS,
  LWTUNNEL_IP6_PAD,
  __LWTUNNEL_IP6_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LWTUNNEL_IP6_MAX (__LWTUNNEL_IP6_MAX - 1)
enum {
  LWT_BPF_PROG_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWT_BPF_PROG_FD,
  LWT_BPF_PROG_NAME,
  __LWT_BPF_PROG_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LWT_BPF_PROG_MAX (__LWT_BPF_PROG_MAX - 1)
enum {
  LWT_BPF_UNSPEC,
  LWT_BPF_IN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWT_BPF_OUT,
  LWT_BPF_XMIT,
  LWT_BPF_XMIT_HEADROOM,
  __LWT_BPF_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LWT_BPF_MAX (__LWT_BPF_MAX - 1)
#define LWT_BPF_MAX_HEADROOM 256
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
