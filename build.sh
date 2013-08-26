#!/bin/bash

LIBDIR=lib/
INCDIR=inc/

make clean; make INCPATH=$INCDIR LIBPATH=$LIBDIR
