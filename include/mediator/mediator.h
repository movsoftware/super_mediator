/**
 * @file mediator.h
 ** ------------------------------------------------------------------------
 ** Copyright (C) 2012-2020 Carnegie Mellon University. All Rights Reserved.
 ** ------------------------------------------------------------------------
 ** Authors: Emily Sarneso
 ** ------------------------------------------------------------------------
 * @OPENSOURCE_HEADER_START@
 * Use of this (and related) source code is subject to the terms
 * of the following licenses:
 *
 * GNU Public License (GPL) Rights pursuant to Version 2, June 1991
 * Government Purpose License Rights (GPLR) pursuant to DFARS 252.227.7013
 *
 * This material is based upon work funded and supported by
 * the Department of Defense under Contract FA8721-05-C-0003 with
 * Carnegie Mellon University for the operation of the Software Engineering
 * Institue, a federally funded research and development center. Any opinions,
 * findings and conclusions or recommendations expressed in this
 * material are those of the author(s) and do not
 * necessarily reflect the views of the United States
 * Department of Defense.
 *
 * NO WARRANTY
 *
 * THIS CARNEGIE MELLON UNIVERSITY AND SOFTWARE ENGINEERING INSTITUTE
 * MATERIAL IS FURNISHED ON AN "AS-IS" BASIS. CARNEGIE MELLON UNIVERSITY
 * MAKES NO WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED
 * AS TO ANY MATTER INCLUDING, BUT NOT LIMITED TO, WARRANTY OF
 * FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY, OR RESULTS
 * OBTAINED FROM THE USE OF THE MATERIAL. CARNEGIE MELLON UNIVERSITY
 * DOES NOT MAKE ANY WARRANTY OF ANY KIND WITH RESPECT TO FREEDOM FROM
 * PATENT, TRADEMARK, OR COPYRIGHT INFRINGEMENT.
 *
 * This material has been approved for public release and unlimited
 * distribution.
 *
 * Carnegie Mellon®, CERT® and CERT Coordination Center® are
 * registered marks of Carnegie Mellon University.
 *
 * DM-0001877
 *
 * Carnegie Mellon University retains
 * copyrights in all material produced under this contract. The U.S.
 * Government retains a non-exclusive, royalty-free license to publish or
 * reproduce these documents, or allow others to do so, for U.S.
 * Government purposes only pursuant to the copyright license under the
 * contract clause at 252.227.7013.
 * Licensee hereby agrees to defend, indemnify, and hold harmless Carnegie
 * Mellon University, its trustees, officers, employees, and agents from
 * all claims or demands made against them (and any related losses,
 * expenses, or attorney's fees) arising out of, or relating to Licensee's
 * and/or its sub licensees' negligent use or willful misuse of or
 * negligent conduct or willful misconduct regarding the Software,
 * facilities, or other rights or assistance granted by Carnegie Mellon
 * University under this License, including, but not limited to, any
 * claims of product liability, personal injury, death, damage to
 * property, or violation of any laws or regulations.
 *
 * @OPENSOURCE_HEADER_END@
 */

#include <mediator/templates.h>
#include "config.h"


#if GLIB_CHECK_VERSION(2,32,0)
#define mg_thread_new(_n_, _f_, _c_, _e_) g_thread_new(_n_, _f_, _c_)
#define mg_thread_init(_n_) _n_ = NULL
#define mg_mutex_clear(_n_) g_mutex_clear(_n_)
#define mg_cond_clear(_n_) g_cond_clear(_n_)
#define mg_cond_wait_until(_c_,_m_,_t_) g_cond_wait_until(_c_,_m_,_t_)
#else
#define mg_thread_new(_n_, _f_, _c_, _e_) g_thread_create(_f_, _c_, TRUE, _e_)
#define mg_thread_init(_n_) g_thread_init(NULL)
#define mg_mutex_clear(_n_) g_mutex_free(_n_)
#define mg_cond_clear(_n_) g_cond_free(_n_)
#define mg_cond_wait_until(_c_,_m_,_t_) g_cond_timed_wait(_c_,_m_,_t_)

#endif


#if HAVE_SPREAD
md_spread_filter_t *md_new_spread_node(
    void);
#endif
md_filter_t *md_new_filter_node(
    void);

md_export_node_t *md_new_export_node(
    gboolean dnsdedup,
    gboolean dedup);

md_collect_node_t *md_new_collect_node(
    void);

gboolean mdListenerConnect(
    fbListener_t         *listener,
    void                 **ctx,
    int                  fd,
    struct sockaddr      *peer,
    size_t               peerlen,
    GError               **err);

void smFreeMaps(
    mdConfig_t          *cfg);
