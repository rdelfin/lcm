Build Instructions {#build_instructions}
====

The process for building LCM may depend on whether you're building from a
released version or from source control.

# Building a released version

These instructions assume you've already downloaded a released of
LCM.  Replace X.Y.Z below with the specific version number you're building.

## Ubuntu / Debian

Required packages:
  - build-essential
  - libglib2.0-dev

Strongly recommended packages:
  - openjdk-6-jdk
  - python-dev

From a terminal, run the following commands.

    $ wget http://lcm.googlecode.com/files/lcm-X.Y.Z.tar.gz
    $ tar xzf lcm-X.Y.Z.tar.gz
    $ cd lcm-X.Y.Z
    $ ./configure
    $ make
    $ sudo make install
    $ sudo ldconfig

## OS/X

There are several ways to build LCM on OS/X, none of which are necessarily better than the others.

### MacPorts

Required packages:
 - glib2

Strongly recommended packages:
  - openjdk6
  - python26 or python27

From a terminal, run the following commands.  Replace X.Y.Z with the latest version of LCM.

    $ wget http://lcm.googlecode.com/files/lcm-X.Y.Z.tar.gz
    $ tar xzf lcm-X.Y.Z.tar.gz
    $ cd lcm-X.Y.Z
    $ ./configure
    $ make
    $ sudo make install

## Windows

Requirements:
 - GLib for Windows (http://www.gtk.org).  You'll need the following packages
  - GLib (Run-time, dev)
  - gettext-runtime (Run-time)

Building:
  1. Follow the instructions in WinSpecific/README.txt to setup GLib.
  2. Open WinSpecific/LCM.sln in MS Visual Studio and build the solution.

## Other / General

On other POSIX.1-2001 systems (e.g., other GNU/Linux distributions, FreeBSD,
Solaris, etc.) the only major requirement is to install the GLib 2.x
development files.  If possible, a Java development kit and Python should also
be installed.  Then follow the 

# Building from Git

## Ubuntu / Debian

Required packages:
 - build-essential
 - autoconf
 - automake
 - autopoint
 - libglib2.0-dev
 - gettext
 - libtool

Strongly recommended packages:
 - openjdk-6-jdk
 - python-dev

From a terminal, run the following commands.

    $ git clone https://code.google.com/p/lcm lcm
    $ cd lcm
    $ ./bootstrap.sh
    $ ./configure
    $ make

## OS/X

*TODO*

## Windows

Same as building from a released version, as above.

## Other / General

To build from Git in other GNU/Linux distributions, FreeBSD, Solaris, etc.,
you'll need to install autotools.  Then follow the terminal commands shown
above for Ubuntu.