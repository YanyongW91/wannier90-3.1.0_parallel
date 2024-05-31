
#=====================================================
# For Linux with intel version 11/12 on 64bit machines
#=====================================================
F90 = ifort
COMMS=mpi
MPIF90=ftn
FCOPTS=-O2 -assume byterecl -w -march=core-avx2
LDOPTS=-O2
# FCOPTS=-O0 -check bounds -check uninit -check pointers -traceback -g -fpe0 # -assume byterecl -w -march=core-avx2
# LDOPTS=-O0

#========================================================
# Intel mkl libraries. Set LIBPATH if not in default path
#========================================================

LIBDIR = /opt/intel/oneapi/mkl/2023.2.0/lib/intel64/
LIBS   =  -L$(LIBDIR) -lmkl_core -lmkl_intel_lp64 -lmkl_sequential -lpthread

#=======================
# ATLAS Blas and LAPACK
#=======================
#LIBDIR = /usr/local/lib
#LIBS = -L$(LIBDIR)  -llapack -lf77blas -lcblas -latlas
