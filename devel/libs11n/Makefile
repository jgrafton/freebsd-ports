PORTNAME=	libs11n
PORTVERSION=	1.2.10
DISTVERSIONSUFFIX=	-nobuildfiles
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/s11n/s11n/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ library for easily serializing a wide variety of objects
WWW=		http://s11n.net/

LICENSE=	PD

USES=		uidfix zip
WRKSRC_SUBDIR=	src
USE_LDCONFIG=	yes

.if defined(NO_PROFILE)
PLIST_SUB+=	PROFILE="@comment "
.else
PLIST_SUB+=	PROFILE=""
.endif

post-extract:
	@${CP} ${PATCHDIR}/Makefile.bsd ${WRKSRC}/Makefile

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n/io
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n/nodeutil
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n/plugin
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n/proxy
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n/proxy/pod
	${MKDIR} ${STAGEDIR}${PREFIX}/include/s11n.net/s11n/proxy/std

.include <bsd.port.mk>
