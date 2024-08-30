# lux toolchain for x86_64
This repository contains the configuration and script to configure and build binutils, gcc, and their dependencies, to target an x86_64 lux system regardless of the host system.

## Requirements
* Essential host build tools (working C and C++ compilers, make, libtool)
* autoconf (==2.69)
* automake (>=1.16)

Most Unix-like systems will be distributed with the host build tools preinstalled. To install the specific version of autoconf required:

**macOS with Homebrew:**
```shell
brew install autoconf@2.69
```

**Debian derivatives:**
```shell
sudo apt install autoconf=2.69
```

You will find similar instructions for other distributions you may be using.

## Build
After meeting the above requirements, simply `cd` into the repository and run the build script:

```shell
cd toolchain-x86_64
./build-toolchain.sh
```

The script will fetch binutils (2.43), gcc (14.2), and their dependencies (gmp, mpfr, mpc) and configure and build them. They will then be installed into toolchain-x86_64/cross, so toolchain-x86_64/cross/bin can be added to your `PATH` if desired.