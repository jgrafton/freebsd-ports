PORTNAME=	django-cors-headers
PORTVERSION=	3.13.0
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj40-

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Handles server headers required for Cross-Origin Resource Sharing
WWW=		https://github.com/adamchainz/django-cors-headers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Extended support of Django 4.0 ends April 2023, upgrade to the Django 4.1+ version of this port. See https://www.djangoproject.com/download/
EXPIRATION_DATE=	2023-05-20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django40>=3.2:www/py-django40@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist distutils

NO_ARCH=		yes
CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*${PORTNAME}

.include <bsd.port.mk>
