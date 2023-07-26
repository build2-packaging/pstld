# libpstld

Experimental implementation of ParallelSTL on top of Grand Central Dispatch aka libdispatch

The purpose of this library is to provide a drop-in implementation of C++ parallel algorithms for the Apple platforms.
Xcode comes with no parallel algorithms in libc++, so this library aims to fill the gap.
pstld uses the native scheduler (libdispatch) and does not depend on any 3rd-party libraries.

For more information see: https://github.com/mikekazakov/pstld

This is a `build2` package for the pstld library.

# Usage

This package provides the `lib{pstld}` library.

To use it, add the following to your `manifest`:

```
depends: libpstld ^0.1.0 ? ($build.host.class == 'macos')
```

Note that this library is only available on MacOS.
