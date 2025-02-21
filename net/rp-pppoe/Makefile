PORTNAME=	rp-pppoe
PORTVERSION=	3.15
PORTREVISION=	0
CATEGORIES=	net
MASTER_SITES=	https://dianne.skoll.ca/projects/rp-pppoe/download/

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	Roaring Penguin's PPPoE software
WWW=		https://dianne.skoll.ca/projects/rp-pppoe/

LICENSE=	GPLv2+

DEPRECATED=	Upstream restricting future OS support to Linux. Use net/mpd5 or pppoed instead. https://dianne.skoll.ca/pipermail/rp-pppoe/2023q2/000639.html
EXPIRATION_DATE=2023-12-31

GNU_CONFIGURE=	yes
PATCH_WRKSRC=	${WRKSRC}/src
CONFIGURE_WRKSRC=	${WRKSRC}/src
BUILD_WRKSRC=	${WRKSRC}/src

man5=	pppoe.conf.5
man8=	pppoe-connect.8 pppoe-setup.8 pppoe-start.8 pppoe-status.8 \
	pppoe-stop.8 pppoe-relay.8 pppoe-server.8 pppoe.8

CONFIG_FILES=	firewall-masq firewall-standalone pap-secrets \
		pppoe-server-options pppoe.conf
DOC_FILES=	CHANGES HOW-TO-CONNECT LICENSE PROBLEMS
SCRIPT_FILES=	pppoe-connect pppoe-init pppoe-setup pppoe-start \
		pppoe-status pppoe-stop

OPTIONS_DEFINE=	DOCS

# work around "Present But Cannot Be Compiled" issue in GNU configure:
CFLAGS+=	-include sys/types.h -include sys/socket.h -include netinet/in.h

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
PORTDOCS=	*
.endif

post-patch:
	@${SED} -i '' -e "s!/etc/ppp!${PREFIX}/etc/ppp!g" \
		${WRKSRC}/man/* \
		${WRKSRC}/configs/* \
		${WRKSRC}/doc/HOW-TO-CONNECT
	@${REINPLACE_CMD} -e 's!/etc/ppp!$$(prefix)/etc/ppp!g' \
		${WRKSRC}/src/Makefile.in
.for file in pppoe-connect pppoe-setup pppoe-start
	@${REINPLACE_CMD} -e 's!/etc/ppp!$${prefix}/etc/ppp!g' \
		${WRKSRC}/scripts/${file}.in
.endfor
	@${REINPLACE_CMD} -e 's!pty!tty!g' ${WRKSRC}/scripts/pppoe-connect.in
.for f in pppoe-status pppoe-stop.in
	@${REINPLACE_CMD} -e "s!/etc/ppp!${PREFIX}/etc/ppp!g" \
		${WRKSRC}/scripts/${f}
.endfor
	@${REINPLACE_CMD} -e "s/\$$^/\$$>/g" ${WRKSRC}/src/Makefile.in

do-install:
# Binaries
	${MKDIR} ${STAGEDIR}${PREFIX}/sbin
.for f in pppoe pppoe-server pppoe-relay
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${f} ${STAGEDIR}${PREFIX}/sbin
.endfor
# Configurations
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/ppp
.for f in ${CONFIG_FILES}
	${INSTALL_DATA} ${WRKSRC}/configs/${f} \
		${STAGEDIR}${PREFIX}/etc/ppp/${f}.sample
.endfor
# Manual pages
	${MKDIR} ${STAGEDIR}${MAN5PREFIX}/man/man5
.for f in ${man5}
	${INSTALL_MAN} ${WRKSRC}/man/${f} ${STAGEDIR}${MAN5PREFIX}/man/man5
.endfor
	${MKDIR} ${STAGEDIR}${MAN8PREFIX}/man/man8
.for f in ${man8}
	${INSTALL_MAN} ${WRKSRC}/man/${f} ${STAGEDIR}${MAN8PREFIX}/man/man8
.endfor
# Scripts
.for f in ${SCRIPT_FILES}
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/${f} ${STAGEDIR}${PREFIX}/sbin
.endfor
# Startup scripts
.for f in 04pppoe-relay.sh.sample 04pppoe-server.sh.sample
	${INSTALL_SCRIPT} ${FILESDIR}/${f} ${STAGEDIR}${PREFIX}/etc/rc.d/
.endfor

# Documentation
post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}
	${RM} ${STAGEDIR}${DOCSDIR}/KERNEL-MODE-PPPOE

.include <bsd.port.mk>
