PORTNAME=	vars
DISTVERSION=	1.5-6
PORTREVISION=	1
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	VAR Modelling
WWW=		https://cran.r-project.org/web/packages/vars/

LICENSE=	GPLv2+

RUN_DEPENDS=	R-cran-strucchange>0:finance/R-cran-strucchange \
		R-cran-urca>=1.1.6:finance/R-cran-urca \
		R-cran-lmtest>=0.9.26:finance/R-cran-lmtest \
		R-cran-sandwich>=2.2.4:math/R-cran-sandwich

USES=	cran:auto-plist

.include <bsd.port.mk>
