PORTNAME=	yarl
PORTVERSION=	1.9.1
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Yet another URL library
WWW=		https://github.com/aio-libs/yarl

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}multidict>0:www/py-multidict@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}idna>0:dns/py-idna@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist distutils cython pytest

pre-configure:
	@rm ${WRKSRC}/yarl/_quoting_c.c
	@cd ${WRKSRC}/yarl && ${PYTHON_CMD} -m cython -3 -o _quoting_c.c _quoting_c.pyx

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/yarl/_quoting_c*.so

pre-test:
	@cd ${TEST_WRKSRC}/yarl && ${LN} -fs ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/yarl/_quoting_c*.so

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 30800
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}typing-extensions>0:devel/py-typing-extensions@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
