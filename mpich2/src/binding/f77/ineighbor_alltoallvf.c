/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INEIGHBOR_ALLTOALLV = PMPI_INEIGHBOR_ALLTOALLV
#pragma weak mpi_ineighbor_alltoallv__ = PMPI_INEIGHBOR_ALLTOALLV
#pragma weak mpi_ineighbor_alltoallv_ = PMPI_INEIGHBOR_ALLTOALLV
#pragma weak mpi_ineighbor_alltoallv = PMPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLV = pmpi_ineighbor_alltoallv__
#pragma weak mpi_ineighbor_alltoallv__ = pmpi_ineighbor_alltoallv__
#pragma weak mpi_ineighbor_alltoallv_ = pmpi_ineighbor_alltoallv__
#pragma weak mpi_ineighbor_alltoallv = pmpi_ineighbor_alltoallv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLV = pmpi_ineighbor_alltoallv_
#pragma weak mpi_ineighbor_alltoallv__ = pmpi_ineighbor_alltoallv_
#pragma weak mpi_ineighbor_alltoallv_ = pmpi_ineighbor_alltoallv_
#pragma weak mpi_ineighbor_alltoallv = pmpi_ineighbor_alltoallv_
#else
#pragma weak MPI_INEIGHBOR_ALLTOALLV = pmpi_ineighbor_alltoallv
#pragma weak mpi_ineighbor_alltoallv__ = pmpi_ineighbor_alltoallv
#pragma weak mpi_ineighbor_alltoallv_ = pmpi_ineighbor_alltoallv
#pragma weak mpi_ineighbor_alltoallv = pmpi_ineighbor_alltoallv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_INEIGHBOR_ALLTOALLV = PMPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoallv__ = pmpi_ineighbor_alltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoallv = pmpi_ineighbor_alltoallv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoallv_ = pmpi_ineighbor_alltoallv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INEIGHBOR_ALLTOALLV  MPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoallv__  mpi_ineighbor_alltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoallv  mpi_ineighbor_alltoallv
#else
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoallv_  mpi_ineighbor_alltoallv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INEIGHBOR_ALLTOALLV as PMPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_ineighbor_alltoallv__ as pmpi_ineighbor_alltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_ineighbor_alltoallv as pmpi_ineighbor_alltoallv
#else
#pragma _CRI duplicate mpi_ineighbor_alltoallv_ as pmpi_ineighbor_alltoallv_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_ineighbor_alltoallv__ = MPI_INEIGHBOR_ALLTOALLV
#pragma weak mpi_ineighbor_alltoallv_ = MPI_INEIGHBOR_ALLTOALLV
#pragma weak mpi_ineighbor_alltoallv = MPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLV = mpi_ineighbor_alltoallv__
#pragma weak mpi_ineighbor_alltoallv_ = mpi_ineighbor_alltoallv__
#pragma weak mpi_ineighbor_alltoallv = mpi_ineighbor_alltoallv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLV = mpi_ineighbor_alltoallv_
#pragma weak mpi_ineighbor_alltoallv__ = mpi_ineighbor_alltoallv_
#pragma weak mpi_ineighbor_alltoallv = mpi_ineighbor_alltoallv_
#else
#pragma weak MPI_INEIGHBOR_ALLTOALLV = mpi_ineighbor_alltoallv
#pragma weak mpi_ineighbor_alltoallv__ = mpi_ineighbor_alltoallv
#pragma weak mpi_ineighbor_alltoallv_ = mpi_ineighbor_alltoallv
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALLV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_ineighbor_alltoallv__ = PMPI_INEIGHBOR_ALLTOALLV
#pragma weak pmpi_ineighbor_alltoallv_ = PMPI_INEIGHBOR_ALLTOALLV
#pragma weak pmpi_ineighbor_alltoallv = PMPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INEIGHBOR_ALLTOALLV = pmpi_ineighbor_alltoallv__
#pragma weak pmpi_ineighbor_alltoallv_ = pmpi_ineighbor_alltoallv__
#pragma weak pmpi_ineighbor_alltoallv = pmpi_ineighbor_alltoallv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INEIGHBOR_ALLTOALLV = pmpi_ineighbor_alltoallv_
#pragma weak pmpi_ineighbor_alltoallv__ = pmpi_ineighbor_alltoallv_
#pragma weak pmpi_ineighbor_alltoallv = pmpi_ineighbor_alltoallv_
#else
#pragma weak PMPI_INEIGHBOR_ALLTOALLV = pmpi_ineighbor_alltoallv
#pragma weak pmpi_ineighbor_alltoallv__ = pmpi_ineighbor_alltoallv
#pragma weak pmpi_ineighbor_alltoallv_ = pmpi_ineighbor_alltoallv
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_ineighbor_alltoallv_ PMPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ineighbor_alltoallv_ pmpi_ineighbor_alltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ineighbor_alltoallv_ pmpi_ineighbor_alltoallv
#else
#define mpi_ineighbor_alltoallv_ pmpi_ineighbor_alltoallv_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Ineighbor_alltoallv
#define MPI_Ineighbor_alltoallv PMPI_Ineighbor_alltoallv 

#else

#ifdef F77_NAME_UPPER
#define mpi_ineighbor_alltoallv_ MPI_INEIGHBOR_ALLTOALLV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ineighbor_alltoallv_ mpi_ineighbor_alltoallv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ineighbor_alltoallv_ mpi_ineighbor_alltoallv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallv_ ( void*v1, MPI_Fint v2[], MPI_Fint v3[], MPI_Fint *v4, void*v5, MPI_Fint v6[], MPI_Fint v7[], MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *ierr ){
    *ierr = MPI_Ineighbor_alltoallv( v1, v2, v3, (MPI_Datatype)(*v4), v5, v6, v7, (MPI_Datatype)(*v8), (MPI_Comm)(*v9), (MPI_Request *)(v10) );
}
