FROM fedora:34

LABEL maintainer="Bootlin <feedback@bootlin.com>" \
      vendor="Bootlin" \
description="Container with everything needed to build Bootlin training materials"

COPY build_materials.sh /build_materials.sh

ENTRYPOINT ["/build_materials.sh"]

RUN dnf -y update && \
    dnf -y install \
	dia \
	fakeroot \
	ghostscript \
	git \
	inkscape \
	levien-inconsolata-fonts \
	liberation-serif-fonts \
	liberation-sans-fonts \
	liberation-mono-fonts \
	make \
	python3-pygments \
	rsync \
	texlive-beamer \
	texlive-environ \
	texlive-epstopdf \
	texlive-eurosym \
	texlive-collection-fontsextra \
	texlive-hyphenat \
	texlive-inconsolata \
	texlive-lstaddons \
	texlive-ltablex \
	texlive-mdframed \
	texlive-moreverb \
	texlive-overpic \
	texlive-parskip \
	texlive-texfot \
	texlive-titling \
	texlive-ulem \
	texlive-upquote \
	texlive-wrapfig \
	texlive-xetex \
	texlive-textpos \
	texlive-makecell \
	texlive-stmaryrd \
	texlive-fmtcount \
	texlive-babel-english \
	texlive-babel-french \
	texlive-appendixnumberbeamer

ENV HOME /tmp

WORKDIR /training
