#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
#include <arpa/inet.h>
#include <net/ethernet.h>
#include <netinet/udp.h>
#include <netinet/ip.h>
#include <net/if.h>
#include <linux/if.h>
#include <linux/if_packet.h>
#include <sys/ioctl.h>
#include <unistd.h>

#define SERVER "127.0.0.1"
#define IP4_HDRLEN 20

/* calculate checksum routine */
unsigned short CalcIPChecksum(unsigned short *addr, unsigned int count);
unsigned short CalcTCPChecksum(struct iphdr *ip, unsigned short *ip_payload);
unsigned short CalcUDPChecksum(struct iphdr *ip, unsigned short *ip_payload);
unsigned short CalcICMPChecksum(unsigned short *ptr, int nbytes);

#endif
