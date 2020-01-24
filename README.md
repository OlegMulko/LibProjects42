# My_C_Libraries

## Description

During the execution of the projects in school 42(school 21 Moscow) I had to write the libraries with various functions, so I managed to put together a good collection. Not all functions inside this library are written perfectly, but I tried to make them sufficient to perform specific tasks. My libraries for projects in school 42 in language C:
* libft
* libdir
* libfifo
* libdar
* libhash
* libstack
* libstr

## Compilation
* `make` - Complete compilation of all libraries with creating a directory with the archive.
* `make libft` - Compilation libft.
* `make libdir`- Compilation libdir.
* `make libfifo`- Compilation libfifo.
* `make libdar` - Compilation libdar.
* `make libhash` - Compilation libhash.
* `make libstack` - Compilation libstack.
* `make libstr` - Compilation libstr.
* `make lall` - Complete compilation of all libraries without creating a directory with the archive.
* `make lclean` - cleaning libraries directories(removing objects directory without library in every library directory).
* `make lfclean` - full cleaning libraries directories(removing objects directory with library in every library directory).
* `make fclean` - full cleaning library archieve directory(removing libraries archieve and objects directory with library in every library directory).
* `make re` - removing all intermediate files and after that libraries archive compilation.

## Usage

You should add flags at compile time `-L path_to_library_directory -lprefix`. The prefix is the name of the library without a word lib.

## Libft

This library contains the required functions that I had to write for the first project at school 42, as well as the functions that I added during training and other projects.

## Libdir

This library contains functions to get information about different types of files.

## Libfifo

This library contains functions for working with a queue.

## Libdar

This library contains functions for working with a two-dimensional char array(pointer).

## Libhash

This library contains functions for working with a hashtable.

## Libstack

This library contains functions for working with a stack.

## Libstr

This library contains functions for manipulation with string(pointer to char).
