./: {*/ -build/ -upstream/} doc{README.md} doc{PACKAGE-README.md} legal{LICENSE} manifest

# Don't install tests.
#
tests/: install = false
