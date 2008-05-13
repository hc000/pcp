/*
 * Copyright (c) 2000,2004 Silicon Graphics, Inc.  All Rights Reserved.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 * 
 * Contact information: Silicon Graphics, Inc., 1500 Crittenden Lane,
 * Mountain View, CA 94043, USA, or: http://www.sgi.com
 */

enum {
    _PM_SNMP_IP_FORWARDING = 0,
    _PM_SNMP_IP_DEFAULTTTL,
    _PM_SNMP_IP_INRECEIVES,
    _PM_SNMP_IP_INHDRERRORS,
    _PM_SNMP_IP_INADDRERRORS,
    _PM_SNMP_IP_FORWDATAGRAMS,
    _PM_SNMP_IP_INUNKNOWNPROTOS,
    _PM_SNMP_IP_INDISCARDS,
    _PM_SNMP_IP_INDELIVERS,
    _PM_SNMP_IP_OUTREQUESTS,
    _PM_SNMP_IP_OUTDISCARDS,
    _PM_SNMP_IP_OUTNOROUTES,
    _PM_SNMP_IP_REASMTIMEOUT,
    _PM_SNMP_IP_REASMREQDS,
    _PM_SNMP_IP_REASMOKS,
    _PM_SNMP_IP_REASMFAILS,
    _PM_SNMP_IP_FRAGOKS,
    _PM_SNMP_IP_FRAGFAILS,
    _PM_SNMP_IP_FRAGCREATES,

    _PM_SNMP_IP_NFIELDS /* must be last */
};

enum {
    _PM_SNMP_ICMP_INMSGS = 0,
    _PM_SNMP_ICMP_INERRORS,
    _PM_SNMP_ICMP_INDESTUNREACHS,
    _PM_SNMP_ICMP_INTIMEEXCDS,
    _PM_SNMP_ICMP_INPARMPROBS,
    _PM_SNMP_ICMP_INSRCQUENCHS,
    _PM_SNMP_ICMP_INREDIRECTS,
    _PM_SNMP_ICMP_INECHOS,
    _PM_SNMP_ICMP_INECHOREPS,
    _PM_SNMP_ICMP_INTIMESTAMPS,
    _PM_SNMP_ICMP_INTIMESTAMPREPS,
    _PM_SNMP_ICMP_INADDRMASKS,
    _PM_SNMP_ICMP_INADDRMASKREPS,
    _PM_SNMP_ICMP_OUTMSGS,
    _PM_SNMP_ICMP_OUTERRORS,
    _PM_SNMP_ICMP_OUTDESTUNREACHS,
    _PM_SNMP_ICMP_OUTTIMEEXCDS,
    _PM_SNMP_ICMP_OUTPARMPROBS,
    _PM_SNMP_ICMP_OUTSRCQUENCHS,
    _PM_SNMP_ICMP_OUTREDIRECTS,
    _PM_SNMP_ICMP_OUTECHOS,
    _PM_SNMP_ICMP_OUTECHOREPS,
    _PM_SNMP_ICMP_OUTTIMESTAMPS,
    _PM_SNMP_ICMP_OUTTIMESTAMPREPS,
    _PM_SNMP_ICMP_OUTADDRMASKS,
    _PM_SNMP_ICMP_OUTADDRMASKREPS,

    _PM_SNMP_ICMP_NFIELDS /* must be last */
};

enum {
    _PM_SNMP_TCP_RTOALGORITHM = 0,
    _PM_SNMP_TCP_RTOMIN,
    _PM_SNMP_TCP_RTOMAX,
    _PM_SNMP_TCP_MAXCONN,
    _PM_SNMP_TCP_ACTIVEOPENS,
    _PM_SNMP_TCP_PASSIVEOPENS,
    _PM_SNMP_TCP_ATTEMPTFAILS,
    _PM_SNMP_TCP_ESTABRESETS,
    _PM_SNMP_TCP_CURRESTAB,
    _PM_SNMP_TCP_INSEGS,
    _PM_SNMP_TCP_OUTSEGS,
    _PM_SNMP_TCP_RETRANSSEGS,
    _PM_SNMP_TCP_INERRS,
    _PM_SNMP_TCP_OUTRSTS,

    _PM_SNMP_TCP_NFIELDS /* must be last */
};

enum {
    _PM_SNMP_UDP_INDATAGRAMS = 0,
    _PM_SNMP_UDP_NOPORTS,
    _PM_SNMP_UDP_INERRORS,
    _PM_SNMP_UDP_OUTDATAGRAMS,
    _PM_SNMP_UDP_RECVBUFERRORS,
    _PM_SNMP_UDP_SNDBUFERRORS,

    _PM_SNMP_UDP_NFIELDS /* must be last */
};

enum {
    _PM_SNMP_UDPLITE_INDATAGRAMS = 0,
    _PM_SNMP_UDPLITE_NOPORTS,
    _PM_SNMP_UDPLITE_INERRORS,
    _PM_SNMP_UDPLITE_OUTDATAGRAMS,
    _PM_SNMP_UDPLITE_RECVBUFERRORS,
    _PM_SNMP_UDPLITE_SNDBUFERRORS,

    _PM_SNMP_UDPLITE_NFIELDS /* must be last */
};

typedef struct {
    unsigned int ip[_PM_SNMP_IP_NFIELDS];
    unsigned int icmp[_PM_SNMP_ICMP_NFIELDS];
    unsigned int tcp[_PM_SNMP_TCP_NFIELDS];
    unsigned int udp[_PM_SNMP_UDP_NFIELDS];
    unsigned int udplite[_PM_SNMP_UDPLITE_NFIELDS];
} proc_net_snmp_t;

extern int refresh_proc_net_snmp(proc_net_snmp_t *);
