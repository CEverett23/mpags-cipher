# mpags-cipher
<<<<<<< HEAD
a simple command line tool for encrypting/decrypting text using classical ciphers

##How to install

Go back to Windows and use a .exe file. This is a much simpler way of doing things. Command lines and terminal windows are a ballache.

##Authors
Chris Everett - The only one. 
I have no idea what this means, but this is another update.
=======
A simple command line tool for encrypting/decrypting text using classical ciphers

# Building `mpags-cipher`
Compilation of `mpags-cipher` requires a C++11 compatible compiler (GCC
4.8 or better, Clang 3.4 or better are recommended) on a UNIX operating
system. To build from a clone of this repository, open a terminal window
and change directory into that holding this README. Simply run the
compiler, and ensure any needed flags to enable C++11 suport are passed.
In addition, you should also pass a suitable set of warning flags. For
GNU and Clang compilers, this set is

```
-Wall -Wextra -Werror -Wfatal-errors -pedantic -Wshadow
```

For example, to build on a Linux platform with `g++`, do (assuming you
cloned the repository to `$HOME/mpags-cipher.git`)

```
$ cd $HOME/mpags-cipher.git
$ g++ -std=c++11 -Wall -Wextra -Werror -Wfatal-errors -pedantic -Wshadow mpags-cipher.cpp -o mpags-cipher
```

The resulting `mpags-cipher` executable can then be run directly, and
provides the following command line options:

```
$ ./mpags-cipher --help
Usage: mpags-cipher [-i <file>] [-o <file>]

Encrypts/Decrypts input alphanumeric text using classical ciphers

Available options:

  -h|--help        Print this help message and exit

  --version        Print version information

  -i FILE          Read text to be processed from FILE
                   Stdin will be used if not supplied

  -o FILE          Write processed text to FILE
                   Stdout will be used if not supplied


```

Note that in the current version, the `-i` and `-o` options do not yet
implement full read/write to/from file functionality. When run,
`mpags-cipher` will wait for user input from the keyboard until RETURN
followed by CTRL-D are pressed. It will then echo the input to stdout
with the following transliteration performed:

- Alphabetical characters are converted to uppercase
- Digits are translated to their English equivalent words (e.g. '0' -> "ZERO")
- All other characters (punctuation) are discarded

This provides conversion of any text input to a suitable character set
for encryption/decryption with classical ciphers.


# Source Code Layout
Under this directory, the code and associated files are organised as
follows:

```sh
MPAGSCipher
├── README.md             This file, describes the project
├── LICENSE               License file, in our case MIT
├── CMakeLists.txt        CMake build script
├── mpags-cipher.cpp      Main program C++ source file
├── MPAGSCipher           Subdirectory for MPAGSCipher library code
|   └── CMakeLists.txt    Build sub-script for the MPAGSCipher library
├── Documentation         Subdirectory for documentation "code"
|   └── CMakeLists.txt    Build sub-script Doxygen HTML docs
|   └── Doxyfile.in       Doxygen configuration template
└── Testing               Subdirectory for code that tests MPAGSCipher
    └── CMakeLists.txt    Build sub-script for testing programs
    └── catch.hpp         C++ Header for the Catch testing framework
```

# Copying
`mpags-cipher` is licensed under the terms of the MIT License. Please see
the file [`LICENSE`](LICENSE) for full details.

>>>>>>> 4f30d4e4809511e114b1b3ddb04c5f77bdb077a0
