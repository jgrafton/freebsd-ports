PORTNAME=	xwayland
DISTVERSIONPREFIX=	xorg-server-
DISTVERSION=	21.0.99.1-459
DISTVERSIONSUFFIX=	-g${GL_COMMIT:C/(.{12}).*/\1/}
CATEGORIES=	x11-servers
PKGNAMESUFFIX=	-devel

PATCH_SITES+=	https://github.com/mirror/${GL_PROJECT}/commit/:github
PATCHFILES+=	cd6c9c1246af.patch:-p1:github # https://gitlab.freedesktop.org/xorg/xserver/-/merge_requests/432
PATCHFILES+=	3930d00746b0.patch:-p1:github # https://gitlab.freedesktop.org/xorg/xserver/-/merge_requests/432
PATCHFILES+=	3b0d1a3a2296.patch:-p1:github # https://gitlab.freedesktop.org/xorg/xserver/-/merge_requests/432
PATCH_SITES+=	${GL_SITE}/${GL_ACCOUNT}/${GL_PROJECT}/-/commit/
PATCHFILES+=	8b9bf0a22640.patch:-p1 # https://gitlab.freedesktop.org/xorg/xserver/-/merge_requests/1047
PATCHFILES+=	0c90fb305e9b.patch:-p1 # https://gitlab.freedesktop.org/xorg/xserver/-/merge_requests/1051

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	X11 server as Wayland client (development snapshot)
WWW=		https://wayland.freedesktop.org/xserver.html

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
		${LOCALBASE}/include/GL/internal/dri_interface.h:graphics/mesa-dri \
		wayland-protocols>=1.28:graphics/wayland-protocols
LIB_DEPENDS=	libdrm.so:graphics/libdrm \
		libepoxy.so:graphics/libepoxy \
		libwayland-client.so:graphics/wayland \
		libxcvt.so:x11/libxcvt
RUN_DEPENDS=	xkbcomp:x11/xkbcomp \
		xkeyboard-config>0:x11/xkeyboard-config

CONFLICTS_INSTALL=	${PORTNAME}

USES=		compiler:c11 gl meson pkgconfig xorg
USE_GITLAB=	yes
USE_GL=		gbm gl
USE_XORG=	pixman xau xdmcp xfont2 xkbfile xshmfence xtrans
GL_SITE=	https://gitlab.freedesktop.org
GL_ACCOUNT=	xorg
GL_PROJECT=	xserver
GL_COMMIT=	9a55c402aa803fb10e39ab4fd18a709d0cd06fd4
GL_TUPLE=	xorg/proto:xorgproto:824001c947cb1962209c6a8f2c63c2637877220d:xorgproto/subprojects/xorgproto
MESON_ARGS=	-D${PORTNAME}=true \
		-Dxorg=false \
		-Dxnest=false \
		-Dxvfb=false \
		-Dudev=false \
		-Dudev_kms=false \
		-Dxcsecurity=true \
		-Ddefault_font_path="${DEFAULT_FONTPATH_LIST:ts,}"
PLIST_FILES=	bin/Xwayland \
		"@comment lib/xorg/protocol.txt" \
		libdata/pkgconfig/xwayland.pc \
		"@comment man/man1/Xserver.1.gz" \
		man/man1/Xwayland.1.gz \
		share/applications/org.freedesktop.Xwayland.desktop

# Keep in sync with xorg-server
FONTPATH_ROOT?=	${LOCALBASE}/share/fonts
FONTPATHD?=	${PREFIX}/etc/X11/fontpath.d
DEFAULT_FONTPATH_LIST= \
	${FONTPATH_ROOT}/misc/	\
	${FONTPATH_ROOT}/TTF/ \
	${FONTPATH_ROOT}/OTF/ \
	${FONTPATH_ROOT}/Type1/ \
	${FONTPATH_ROOT}/100dpi/ \
	${FONTPATH_ROOT}/75dpi/ \
	catalogue:${FONTPATHD}

OPTIONS_DEFINE=	CSD NVIDIA
OPTIONS_DEFAULT=CSD

CSD_DESC=		Client-side decorations via libdecor
CSD_LIB_DEPENDS=	libdecor-0.so:x11-toolkits/libdecor
CSD_MESON_TRUE=		libdecor

NVIDIA_DESC=		EGLStream support for glamor on Xwayland
NVIDIA_BUILD_DEPENDS=	egl-wayland>0:graphics/egl-wayland
NVIDIA_MESON_TRUE=	xwayland_eglstream

.ifdef GL_TUPLE
post-install:
# XXX USES=meson invokes ninja directly, so doesn't support --skip-subprojects
	@${RM} -r ${STAGEDIR}${PREFIX}/include/GL
	@${RM} -r ${STAGEDIR}${PREFIX}/include/X11
	@${RM} -r ${STAGEDIR}${PREFIX}/share/doc/xorgproto
	@${RM} -r ${STAGEDIR}${PREFIX}/share/pkgconfig
.endif

.include <bsd.port.mk>
