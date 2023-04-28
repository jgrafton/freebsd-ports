# To generate the DISTFILES list, do (not necessarily as root):
#
# $ debootstrap --include=gnome-software --download-only focal tmpdir
# $ cat tmpdir/debootstrap/deburis | awk '{ print $3 }' | \
#   sed 's,http://archive.ubuntu.com/ubuntu/pool/main/,,' | sort | sed 's/$/ \\/'
#
# Remove the 'tmpdir' directory afterwards.

PORTNAME=	linux_base-ubuntu
PORTVERSION=	20.04
CATEGORIES=	emulators linux
MASTER_SITES=	http://archive.ubuntu.com/ubuntu/pool/main/ \
		http://ports.ubuntu.com/ubuntu-ports/pool/main/

MAINTAINER=	trasz@FreeBSD.org
COMMENT=	Base set of packages needed in Linux mode (Ubuntu Focal 20.04 LTS)

ONLY_FOR_ARCHS=	aarch64 amd64
DISTFILES=	a/acl/libacl1_2.2.53-6_amd64.deb \
		a/adduser/adduser_3.118ubuntu2_all.deb \
		a/adwaita-icon-theme/adwaita-icon-theme_3.36.0-1ubuntu1_all.deb \
		a/alsa-lib/libasound2_1.2.2-2.1_amd64.deb \
		a/alsa-lib/libasound2-data_1.2.2-2.1_all.deb \
		a/alsa-lib/libatopology2_1.2.2-2.1_amd64.deb \
		a/alsa-utils/alsa-utils_1.2.2-1ubuntu1_amd64.deb \
		a/apparmor/libapparmor1_2.13.3-7ubuntu5_amd64.deb \
		a/apt/apt_2.0.2_amd64.deb \
		a/apt/apt-utils_2.0.2_amd64.deb \
		a/apt/libapt-pkg6.0_2.0.2_amd64.deb \
		a/argon2/libargon2-1_0~20171227-0.2_amd64.deb \
		a/aspell/libaspell15_0.60.8-1build1_amd64.deb \
		a/at-spi2-atk/libatk-bridge2.0-0_2.34.1-3_amd64.deb \
		a/at-spi2-core/libatspi2.0-0_2.36.0-2_amd64.deb \
		a/atk1.0/gir1.2-atk-1.0_2.35.1-1ubuntu2_amd64.deb \
		a/atk1.0/libatk1.0-0_2.35.1-1ubuntu2_amd64.deb \
		a/atk1.0/libatk1.0-data_2.35.1-1ubuntu2_all.deb \
		a/attr/libattr1_2.4.48-5_amd64.deb \
		a/audit/libaudit-common_2.8.5-2ubuntu6_all.deb \
		a/audit/libaudit1_2.8.5-2ubuntu6_amd64.deb \
		a/avahi/libavahi-client3_0.7-4ubuntu7_amd64.deb \
		a/avahi/libavahi-common-data_0.7-4ubuntu7_amd64.deb \
		a/avahi/libavahi-common3_0.7-4ubuntu7_amd64.deb \
		b/base-files/base-files_11ubuntu5_amd64.deb \
		b/base-passwd/base-passwd_3.5.47_amd64.deb \
		b/bash/bash_5.0-6ubuntu1_amd64.deb \
		b/brotli/libbrotli1_1.0.7-6build1_amd64.deb \
		b/bzip2/bzip2_1.0.8-2_amd64.deb \
		b/bzip2/libbz2-1.0_1.0.8-2_amd64.deb \
		c/ca-certificates/ca-certificates_20190110ubuntu1_all.deb \
		c/cairo/libcairo-gobject2_1.16.0-4ubuntu1_amd64.deb \
		c/cairo/libcairo2_1.16.0-4ubuntu1_amd64.deb \
		c/cdebconf/libdebconfclient0_0.251ubuntu1_amd64.deb \
		c/chardet/python3-chardet_3.0.4-4build1_all.deb \
		c/colord/libcolord2_1.4.4-2_amd64.deb \
		c/console-setup/console-setup_1.194ubuntu3_all.deb \
		c/console-setup/console-setup-linux_1.194ubuntu3_all.deb \
		c/console-setup/keyboard-configuration_1.194ubuntu3_all.deb \
		c/coreutils/coreutils_8.30-3ubuntu2_amd64.deb \
		c/cron/cron_3.0pl1-136ubuntu1_amd64.deb \
		c/cryptsetup/libcryptsetup12_2.2.2-3ubuntu2_amd64.deb \
		c/cups/libcups2_2.3.1-9ubuntu1_amd64.deb \
		d/dash/dash_0.5.10.2-6_amd64.deb \
		d/db5.3/libdb5.3_5.3.28+dfsg1-0.6ubuntu2_amd64.deb \
		d/dbus-python/python3-dbus_1.2.16-1build1_amd64.deb \
		d/dbus/dbus_1.12.16-2ubuntu2_amd64.deb \
		d/dbus/libdbus-1-3_1.12.16-2ubuntu2_amd64.deb \
		d/dconf/dconf-gsettings-backend_0.36.0-1_amd64.deb \
		d/dconf/dconf-service_0.36.0-1_amd64.deb \
		d/dconf/libdconf1_0.36.0-1_amd64.deb \
		d/debconf/debconf_1.5.73_all.deb \
		d/debconf/debconf-i18n_1.5.73_all.deb \
		d/debianutils/debianutils_4.9.1_amd64.deb \
		d/dictionaries-common/dictionaries-common_1.28.1_all.deb \
		d/diffutils/diffutils_3.7-3_amd64.deb \
		d/distro-info-data/distro-info-data_0.43ubuntu1_all.deb \
		d/distro-info/python3-distro-info_0.23ubuntu1_all.deb \
		d/dpkg/dpkg_1.19.7ubuntu3_amd64.deb \
		d/dpkg/libdpkg-perl_1.19.7ubuntu3_all.deb \
		e/e2fsprogs/e2fsprogs_1.45.5-2ubuntu1_amd64.deb \
		e/e2fsprogs/libcom-err2_1.45.5-2ubuntu1_amd64.deb \
		e/e2fsprogs/libext2fs2_1.45.5-2ubuntu1_amd64.deb \
		e/e2fsprogs/libss2_1.45.5-2ubuntu1_amd64.deb \
		e/e2fsprogs/logsave_1.45.5-2ubuntu1_amd64.deb \
		e/elfutils/libelf1_0.176-1.1build1_amd64.deb \
		e/emacsen-common/emacsen-common_3.0.4_all.deb \
		e/enchant-2/libenchant-2-2_2.2.8-1_amd64.deb \
		e/expat/libexpat1_2.2.9-1build1_amd64.deb \
		f/fftw3/libfftw3-single3_3.3.8-2ubuntu1_amd64.deb \
		f/file/file_5.38-4_amd64.deb \
		f/file/libmagic-mgc_5.38-4_amd64.deb \
		f/file/libmagic1_5.38-4_amd64.deb \
		f/findutils/findutils_4.7.0-1ubuntu1_amd64.deb \
		f/fontconfig/fontconfig_2.13.1-2ubuntu3_amd64.deb \
		f/fontconfig/fontconfig-config_2.13.1-2ubuntu3_all.deb \
		f/fontconfig/libfontconfig1_2.13.1-2ubuntu3_amd64.deb \
		f/fonts-dejavu/fonts-dejavu-core_2.37-1_all.deb \
		f/freetype/libfreetype6_2.10.1-2_amd64.deb \
		f/fribidi/libfribidi0_1.0.8-2_amd64.deb \
		g/gcc-10/gcc-10-base_10-20200411-0ubuntu1_amd64.deb \
		g/gcc-10/libgcc-s1_10-20200411-0ubuntu1_amd64.deb \
		g/gcc-10/libgomp1_10-20200411-0ubuntu1_amd64.deb \
		g/gcc-10/libstdc++6_10-20200411-0ubuntu1_amd64.deb \
		g/gdbm/libgdbm-compat4_1.18.1-5_amd64.deb \
		g/gdbm/libgdbm6_1.18.1-5_amd64.deb \
		g/gdk-pixbuf/gir1.2-gdkpixbuf-2.0_2.40.0+dfsg-3_amd64.deb \
		g/gdk-pixbuf/libgdk-pixbuf2.0-0_2.40.0+dfsg-3_amd64.deb \
		g/gdk-pixbuf/libgdk-pixbuf2.0-common_2.40.0+dfsg-3_all.deb \
		g/glib-networking/glib-networking_2.64.1-1_amd64.deb \
		g/glib-networking/glib-networking-common_2.64.1-1_all.deb \
		g/glib-networking/glib-networking-services_2.64.1-1_amd64.deb \
		g/glib2.0/libglib2.0-0_2.64.2-1~fakesync1_amd64.deb \
		g/glib2.0/libglib2.0-bin_2.64.2-1~fakesync1_amd64.deb \
		g/glib2.0/libglib2.0-data_2.64.2-1~fakesync1_all.deb \
		g/glibc/libc-bin_2.31-0ubuntu9_amd64.deb \
		g/glibc/libc6_2.31-0ubuntu9_amd64.deb \
		g/glibc/locales_2.31-0ubuntu9_all.deb \
		g/gmp/libgmp10_6.2.0+dfsg-4_amd64.deb \
		g/gnome-online-accounts/gir1.2-goa-1.0_3.36.0-1ubuntu1_amd64.deb \
		g/gnome-online-accounts/libgoa-1.0-0b_3.36.0-1ubuntu1_amd64.deb \
		g/gnome-online-accounts/libgoa-1.0-common_3.36.0-1ubuntu1_all.deb \
		g/gnupg2/gpg_2.2.19-3ubuntu2_amd64.deb \
		g/gnupg2/gpgconf_2.2.19-3ubuntu2_amd64.deb \
		g/gnupg2/gpgv_2.2.19-3ubuntu2_amd64.deb \
		g/gnutls28/libgnutls30_3.6.13-2ubuntu1_amd64.deb \
		g/gobject-introspection/gir1.2-freedesktop_1.64.0-2_amd64.deb \
		g/gobject-introspection/gir1.2-glib-2.0_1.64.0-2_amd64.deb \
		g/gobject-introspection/libgirepository-1.0-1_1.64.0-2_amd64.deb \
		g/graphite2/libgraphite2-3_1.3.13-11build1_amd64.deb \
		g/grep/grep_3.4-1_amd64.deb \
		g/gsettings-desktop-schemas/gsettings-desktop-schemas_3.36.0-1ubuntu1_all.deb \
		g/gspell/libgspell-1-2_1.8.3-1_amd64.deb \
		g/gspell/libgspell-1-common_1.8.3-1_all.deb \
		g/gstreamer1.0/libgstreamer1.0-0_1.16.2-2_amd64.deb \
		g/gtk+3.0/gir1.2-gtk-3.0_3.24.18-1ubuntu1_amd64.deb \
		g/gtk+3.0/gtk-update-icon-cache_3.24.18-1ubuntu1_amd64.deb \
		g/gtk+3.0/libgtk-3-0_3.24.18-1ubuntu1_amd64.deb \
		g/gtk+3.0/libgtk-3-common_3.24.18-1ubuntu1_all.deb \
		g/gzip/gzip_1.10-0ubuntu4_amd64.deb \
		h/harfbuzz/libharfbuzz0b_2.6.4-1ubuntu4_amd64.deb \
		h/hicolor-icon-theme/hicolor-icon-theme_0.17-2_all.deb \
		h/hostname/hostname_3.23_amd64.deb \
		h/humanity-icon-theme/humanity-icon-theme_0.6.15_all.deb \
		h/hunspell/libhunspell-1.7-0_1.7.0-2build2_amd64.deb \
		i/icu/libicu66_66.1-2ubuntu2_amd64.deb \
		i/init-system-helpers/init_1.57_amd64.deb \
		i/init-system-helpers/init-system-helpers_1.57_all.deb \
		i/iproute2/iproute2_5.5.0-1ubuntu1_amd64.deb \
		i/iptables/libip4tc2_1.8.4-3ubuntu2_amd64.deb \
		i/iptables/libxtables12_1.8.4-3ubuntu2_amd64.deb \
		i/iso-codes/iso-codes_4.4-1_all.deb \
		j/jbigkit/libjbig0_2.1-3.1build1_amd64.deb \
		j/json-c/libjson-c4_0.13.1+dfsg-7_amd64.deb \
		j/json-glib/libjson-glib-1.0-0_1.4.4-2ubuntu2_amd64.deb \
		j/json-glib/libjson-glib-1.0-common_1.4.4-2ubuntu2_all.deb \
		k/keyutils/libkeyutils1_1.6-6ubuntu1_amd64.deb \
		k/kmod/kmod_27-1ubuntu2_amd64.deb \
		k/kmod/libkmod2_27-1ubuntu2_amd64.deb \
		k/krb5/libgssapi-krb5-2_1.17-6ubuntu4_amd64.deb \
		k/krb5/libk5crypto3_1.17-6ubuntu4_amd64.deb \
		k/krb5/libkrb5-3_1.17-6ubuntu4_amd64.deb \
		k/krb5/libkrb5support0_1.17-6ubuntu4_amd64.deb \
		l/lcms2/liblcms2-2_2.9-4_amd64.deb \
		l/less/less_551-1_amd64.deb \
		l/linux-atm/libatm1_2.5.1-4_amd64.deb \
		l/lmdb/liblmdb0_0.9.24-1_amd64.deb \
		l/lsb/lsb-base_11.1.0ubuntu2_all.deb \
		l/lsb/lsb-release_11.1.0ubuntu2_all.deb \
		l/lvm2/dmsetup_1.02.167-1ubuntu1_amd64.deb \
		l/lvm2/libdevmapper1.02.1_1.02.167-1ubuntu1_amd64.deb \
		l/lz4/liblz4-1_1.9.2-2_amd64.deb \
		liba/libarchive/libarchive13_3.4.0-2ubuntu1_amd64.deb \
		liba/libassuan/libassuan0_2.5.3-7ubuntu2_amd64.deb \
		libb/libbsd/libbsd0_0.10.0-1_amd64.deb \
		libc/libcap-ng/libcap-ng0_0.7.9-2.1build1_amd64.deb \
		libc/libcap2/libcap2_2.32-1_amd64.deb \
		libc/libcap2/libcap2-bin_2.32-1_amd64.deb \
		libc/libcap2/libpam-cap_2.32-1_amd64.deb \
		libd/libdatrie/libdatrie1_0.2.12-3_amd64.deb \
		libd/libdrm/libdrm-common_2.4.101-2_all.deb \
		libd/libdrm/libdrm2_2.4.101-2_amd64.deb \
		libe/libepoxy/libepoxy0_1.5.4-1_amd64.deb \
		libe/libestr/libestr0_0.1.10-2.1_amd64.deb \
		libe/libextutils-depends-perl/libextutils-depends-perl_0.8000-1_all.deb \
		libe/libextutils-pkgconfig-perl/libextutils-pkgconfig-perl_1.16-1_all.deb \
		libf/libfastjson/libfastjson4_0.99.8-2_amd64.deb \
		libf/libffi/libffi7_3.3-4_amd64.deb \
		libg/libgcrypt20/libgcrypt20_1.8.5-5ubuntu1_amd64.deb \
		libg/libglib-perl/libglib-perl_1.329.2-1_amd64.deb \
		libg/libgpg-error/libgpg-error0_1.37-1_amd64.deb \
		libg/libgtk3-perl/libgtk3-perl_0.037-1_all.deb \
		libg/libgudev/libgudev-1.0-0_233-1_amd64.deb \
		libi/libice/libice6_1.0.10-0ubuntu1_amd64.deb \
		libi/libidn2/libidn2-0_2.2.0-2_amd64.deb \
		libj/libjpeg-turbo/libjpeg-turbo8_2.0.3-0ubuntu1_amd64.deb \
		libj/libjpeg8-empty/libjpeg8_8c-2ubuntu8_amd64.deb \
		libl/liblocale-gettext-perl/liblocale-gettext-perl_1.07-4_amd64.deb \
		libm/libmnl/libmnl0_1.0.4-2_amd64.deb \
		libp/libpciaccess/libpciaccess0_0.16-0ubuntu1_amd64.deb \
		libp/libpng1.6/libpng16-16_1.6.37-2_amd64.deb \
		libp/libproxy/libproxy1v5_0.4.15-10_amd64.deb \
		libp/libpsl/libpsl5_0.21.0-1ubuntu1_amd64.deb \
		libr/librest/librest-0.7-0_0.8.1-1_amd64.deb \
		libr/librsvg/librsvg2-2_2.48.2-1_amd64.deb \
		libr/librsvg/librsvg2-common_2.48.2-1_amd64.deb \
		libs/libsamplerate/libsamplerate0_0.1.9-2_amd64.deb \
		libs/libseccomp/libseccomp2_2.4.3-1ubuntu1_amd64.deb \
		libs/libselinux/libselinux1_3.0-1build2_amd64.deb \
		libs/libsemanage/libsemanage-common_3.0-1build2_all.deb \
		libs/libsemanage/libsemanage1_3.0-1build2_amd64.deb \
		libs/libsepol/libsepol1_3.0-1_amd64.deb \
		libs/libsm/libsm6_1.2.3-1_amd64.deb \
		libs/libsodium/libsodium23_1.0.18-1_amd64.deb \
		libs/libsoup2.4/libsoup-gnome2.4-1_2.70.0-1_amd64.deb \
		libs/libsoup2.4/libsoup2.4-1_2.70.0-1_amd64.deb \
		libt/libtasn1-6/libtasn1-6_4.16.0-2_amd64.deb \
		libt/libtext-charwidth-perl/libtext-charwidth-perl_0.04-10_amd64.deb \
		libt/libtext-iconv-perl/libtext-iconv-perl_1.7-7_amd64.deb \
		libt/libtext-wrapi18n-perl/libtext-wrapi18n-perl_0.06-9_all.deb \
		libt/libthai/libthai-data_0.1.28-3_all.deb \
		libt/libthai/libthai0_0.1.28-3_amd64.deb \
		libu/libunistring/libunistring2_0.9.10-2_amd64.deb \
		libu/libusb-1.0/libusb-1.0-0_1.0.23-2build1_amd64.deb \
		libw/libwebp/libwebp6_0.6.1-2_amd64.deb \
		libx/libx11/libx11-6_1.6.9-2ubuntu1_amd64.deb \
		libx/libx11/libx11-data_1.6.9-2ubuntu1_all.deb \
		libx/libxau/libxau6_1.0.9-0ubuntu1_amd64.deb \
		libx/libxcb/libxcb-render0_1.14-2_amd64.deb \
		libx/libxcb/libxcb-shm0_1.14-2_amd64.deb \
		libx/libxcb/libxcb1_1.14-2_amd64.deb \
		libx/libxcomposite/libxcomposite1_0.4.5-1_amd64.deb \
		libx/libxcrypt/libcrypt1_4.4.10-10ubuntu4_amd64.deb \
		libx/libxcursor/libxcursor1_1.2.0-2_amd64.deb \
		libx/libxdamage/libxdamage1_1.1.5-2_amd64.deb \
		libx/libxdmcp/libxdmcp6_1.1.3-0ubuntu1_amd64.deb \
		libx/libxext/libxext6_1.3.4-0ubuntu1_amd64.deb \
		libx/libxfixes/libxfixes3_5.0.3-2_amd64.deb \
		libx/libxi/libxi6_1.7.10-0ubuntu1_amd64.deb \
		libx/libxinerama/libxinerama1_1.1.4-2_amd64.deb \
		libx/libxkbcommon/libxkbcommon0_0.10.0-1_amd64.deb \
		libx/libxml2/libxml2_2.9.10+dfsg-5_amd64.deb \
		libx/libxrandr/libxrandr2_1.5.2-0ubuntu1_amd64.deb \
		libx/libxrender/libxrender1_0.9.10-1_amd64.deb \
		liby/libyaml/libyaml-0-2_0.2.2-1_amd64.deb \
		libz/libzstd/libzstd1_1.4.4+dfsg-3_amd64.deb \
		m/mawk/mawk_1.3.4.20200120-2_amd64.deb \
		m/mime-support/mime-support_3.64ubuntu1_all.deb \
		m/mpdecimal/libmpdec2_2.4.2-3_amd64.deb \
		n/ncurses/libncurses6_6.2-0ubuntu2_amd64.deb \
		n/ncurses/libncursesw6_6.2-0ubuntu2_amd64.deb \
		n/ncurses/libtinfo6_6.2-0ubuntu2_amd64.deb \
		n/ncurses/ncurses-base_6.2-0ubuntu2_all.deb \
		n/ncurses/ncurses-bin_6.2-0ubuntu2_amd64.deb \
		n/netbase/netbase_6.1_all.deb \
		n/netcat-openbsd/netcat-openbsd_1.206-1ubuntu1_amd64.deb \
		n/nettle/libhogweed5_3.5.1+really3.5.1-2_amd64.deb \
		n/nettle/libnettle7_3.5.1+really3.5.1-2_amd64.deb \
		n/networkd-dispatcher/networkd-dispatcher_2.0.1-1_all.deb \
		n/newt/libnewt0.52_0.52.21-4ubuntu2_amd64.deb \
		n/newt/whiptail_0.52.21-4ubuntu2_amd64.deb \
		o/openssl/libssl1.1_1.1.1f-1ubuntu2_amd64.deb \
		o/openssl/openssl_1.1.1f-1ubuntu2_amd64.deb \
		p/p11-kit/libp11-kit0_0.23.20-1build1_amd64.deb \
		p/pam/libpam-modules_1.3.1-5ubuntu4_amd64.deb \
		p/pam/libpam-modules-bin_1.3.1-5ubuntu4_amd64.deb \
		p/pam/libpam-runtime_1.3.1-5ubuntu4_all.deb \
		p/pam/libpam0g_1.3.1-5ubuntu4_amd64.deb \
		p/pango1.0/gir1.2-pango-1.0_1.44.7-2ubuntu4_amd64.deb \
		p/pango1.0/libpango-1.0-0_1.44.7-2ubuntu4_amd64.deb \
		p/pango1.0/libpangocairo-1.0-0_1.44.7-2ubuntu4_amd64.deb \
		p/pango1.0/libpangoft2-1.0-0_1.44.7-2ubuntu4_amd64.deb \
		p/pango1.0/libpangoxft-1.0-0_1.44.7-2ubuntu4_amd64.deb \
		p/pci.ids/pci.ids_0.0~2020.03.20-1_all.deb \
		p/pciutils/libpci3_3.6.4-1_amd64.deb \
		p/pciutils/pciutils_3.6.4-1_amd64.deb \
		p/pcre2/libpcre2-8-0_10.34-7_amd64.deb \
		p/pcre3/libpcre3_8.39-12build1_amd64.deb \
		p/perl/libperl5.30_5.30.0-9build1_amd64.deb \
		p/perl/perl_5.30.0-9build1_amd64.deb \
		p/perl/perl-base_5.30.0-9build1_amd64.deb \
		p/perl/perl-modules-5.30_5.30.0-9build1_all.deb \
		p/pixman/libpixman-1-0_0.38.4-0ubuntu1_amd64.deb \
		p/pkg-config/pkg-config_0.29.1-0ubuntu4_amd64.deb \
		p/policykit-1/libpolkit-agent-1-0_0.105-26ubuntu1_amd64.deb \
		p/policykit-1/libpolkit-gobject-1-0_0.105-26ubuntu1_amd64.deb \
		p/policykit-1/policykit-1_0.105-26ubuntu1_amd64.deb \
		p/popt/libpopt0_1.16-14_amd64.deb \
		p/procps/libprocps8_3.3.16-1ubuntu2_amd64.deb \
		p/procps/procps_3.3.16-1ubuntu2_amd64.deb \
		p/pygobject/python3-gi_3.36.0-1_amd64.deb \
		p/pymacaroons/python3-pymacaroons_0.13.0-3_all.deb \
		p/python-apt/python-apt-common_2.0.0_all.deb \
		p/python-apt/python3-apt_2.0.0_amd64.deb \
		p/python-certifi/python3-certifi_2019.11.28-1_all.deb \
		p/python-dateutil/python3-dateutil_2.7.3-3ubuntu1_all.deb \
		p/python-idna/python3-idna_2.8-1_all.deb \
		p/python-requests-unixsocket/python3-requests-unixsocket_0.2.0-2_all.deb \
		p/python-urllib3/python3-urllib3_1.25.8-2_all.deb \
		p/python3-defaults/libpython3-stdlib_3.8.2-0ubuntu2_amd64.deb \
		p/python3-defaults/python3_3.8.2-0ubuntu2_amd64.deb \
		p/python3-defaults/python3-minimal_3.8.2-0ubuntu2_amd64.deb \
		p/python3.8/libpython3.8-minimal_3.8.2-1ubuntu1_amd64.deb \
		p/python3.8/libpython3.8-stdlib_3.8.2-1ubuntu1_amd64.deb \
		p/python3.8/python3.8_3.8.2-1ubuntu1_amd64.deb \
		p/python3.8/python3.8-minimal_3.8.2-1ubuntu1_amd64.deb \
		p/pyyaml/python3-yaml_5.3.1-1_amd64.deb \
		r/readline/libreadline8_8.0-4_amd64.deb \
		r/readline/readline-common_8.0-4_all.deb \
		r/requests/python3-requests_2.22.0-2ubuntu1_all.deb \
		s/scowl/hunspell-en-us_2018.04.16-1_all.deb \
		s/sed/sed_4.7-1_amd64.deb \
		s/sensible-utils/sensible-utils_0.0.12+nmu1_all.deb \
		s/setuptools/python3-pkg-resources_45.2.0-1_all.deb \
		s/shadow/login_4.8.1-1ubuntu5_amd64.deb \
		s/shadow/passwd_4.8.1-1ubuntu5_amd64.deb \
		s/shared-mime-info/shared-mime-info_1.15-1_amd64.deb \
		s/six/python3-six_1.14.0-2_all.deb \
		s/slang2/libslang2_2.3.2-4_amd64.deb \
		s/snapd-glib/gir1.2-snapd-1_1.57-0ubuntu3_amd64.deb \
		s/snapd-glib/libsnapd-glib1_1.57-0ubuntu3_amd64.deb \
		s/snowball/libstemmer0d_0+svn585-2_amd64.deb \
		s/software-properties/python3-software-properties_0.98.9_all.deb \
		s/software-properties/software-properties-common_0.98.9_all.deb \
		s/software-properties/software-properties-gtk_0.98.9_all.deb \
		s/sqlite3/libsqlite3-0_3.31.1-4_amd64.deb \
		s/systemd/libnss-systemd_245.4-4ubuntu3_amd64.deb \
		s/systemd/libpam-systemd_245.4-4ubuntu3_amd64.deb \
		s/systemd/libsystemd0_245.4-4ubuntu3_amd64.deb \
		s/systemd/libudev1_245.4-4ubuntu3_amd64.deb \
		s/systemd/systemd_245.4-4ubuntu3_amd64.deb \
		s/systemd/systemd-sysv_245.4-4ubuntu3_amd64.deb \
		s/systemd/systemd-timesyncd_245.4-4ubuntu3_amd64.deb \
		s/systemd/udev_245.4-4ubuntu3_amd64.deb \
		s/sysvinit/sysvinit-utils_2.96-2.1ubuntu1_amd64.deb \
		t/tar/tar_1.30+dfsg-7_amd64.deb \
		t/tiff/libtiff5_4.1.0+git191117-2build1_amd64.deb \
		t/tzdata/tzdata_2019c-3ubuntu1_all.deb \
		u/ubuntu-keyring/ubuntu-keyring_2020.02.11.2_all.deb \
		u/ubuntu-themes/ubuntu-mono_19.04-0ubuntu3_all.deb \
		u/ucf/ucf_3.0038+nmu1_all.deb \
		u/usb.ids/usb.ids_2020.03.19-1_all.deb \
		u/usbutils/usbutils_012-2_amd64.deb \
		u/util-linux/bsdutils_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/fdisk_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/libblkid1_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/libfdisk1_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/libmount1_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/libsmartcols1_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/libuuid1_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/mount_2.34-0.1ubuntu9_amd64.deb \
		u/util-linux/util-linux_2.34-0.1ubuntu9_amd64.deb \
		v/vim/xxd_8.1.2269-1ubuntu5_amd64.deb \
		w/wayland/libwayland-client0_1.18.0-1_amd64.deb \
		w/wayland/libwayland-cursor0_1.18.0-1_amd64.deb \
		w/wayland/libwayland-egl1_1.18.0-1_amd64.deb \
		x/x-kit/python3-xkit_0.5.0ubuntu4_all.deb \
		x/xft/libxft2_2.3.3-0ubuntu1_amd64.deb \
		x/xkeyboard-config/xkb-data_2.29-2_all.deb \
		x/xorg/x11-common_7.7+19ubuntu14_all.deb \
		x/xz-utils/liblzma5_5.2.4-1_amd64.deb \
		x/xz-utils/xz-utils_5.2.4-1_amd64.deb \
		z/zlib/zlib1g_1.2.11.dfsg-2ubuntu1_amd64.deb

BUILD_DEPENDS=	dpkg:archivers/dpkg

NO_WRKSUBDIR=	yes
NO_BUILD=	yes
PLIST=		${PKGDIR}/pkg-plist.${ARCH}
USE_RC_SUBR=	linux_base

EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=	#
EXTRACT_AFTER_ARGS=	${WRKSRC}/

# We need all three architectures for distinfo; duplicate the distfiles
# list, replacing "amd64" with "arm64", and then with "i386".
DISTFILES:=	${DISTFILES} ${DISTFILES:S/amd64/arm64/g} ${DISTFILES:S/amd64/i386/g}

.include <bsd.port.pre.mk>

# Filter out packages for the other architecture.
.if ${ARCH} == amd64
TO_INSTALL=	${DISTFILES:T:N*arm64.deb}
.else
TO_INSTALL=	${DISTFILES:T:N*amd64.deb:N*i386.deb}
.endif

do-install:
		${MKDIR} ${STAGEDIR}/compat/linux/var/db/dpkg/updates
		${MKDIR} ${STAGEDIR}/compat/linux/var/db/dpkg/info
		${TOUCH} ${STAGEDIR}/compat/linux/var/db/dpkg/status
		${MKDIR} ${STAGEDIR}${PREFIX}/compat/linux
.for i in ${TO_INSTALL}
		dpkg-deb -x ${WRKSRC}/${i} ${STAGEDIR}${PREFIX}/compat/linux
.endfor
		${RMDIR} ${STAGEDIR}${PREFIX}/compat/linux/home
		${RMDIR} ${STAGEDIR}${PREFIX}/compat/linux/root
		${RMDIR} ${STAGEDIR}${PREFIX}/compat/linux/tmp
.if ${ARCH} == amd64
		# We need a relative symlink there.
		${RM} ${STAGEDIR}${PREFIX}/compat/linux/lib64/ld-linux-x86-64.so.2
		${LN} -s ../lib/x86_64-linux-gnu/ld-2.31.so ${STAGEDIR}${PREFIX}/compat/linux/lib64/ld-linux-x86-64.so.2
.endif

.include <bsd.port.post.mk>
