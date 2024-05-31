#!/bin/bash

module load PrgEnv-intel/8.5.0
module load cray-mpich/8.1.28

rm -rf  src/obj/*  src/objp/*  wannier90.x  libwannier.a
make -j12
make wannier
make lib
