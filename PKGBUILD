pkgname="Unit-Converter"
pkgver="0.1b"
pkgrel="1"
pkgdesc="A simple Unit Converter written in C."
arch=("x86_64")
source=("Unit_Converter.bin")
sha512sums=("SKIP")
license=("custom")
package(){
mkdir -p "${pkgdir}/usr/bin/Unit_Converter"
cp "${srcdir}/Unit_Converter.bin" "${pkgdir}/usr/bin"
chmod +x "${pkgdir}/usr/bin/Unit_Converter"
}
