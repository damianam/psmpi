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
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_LOCK( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WIN_LOCK = PMPI_WIN_LOCK
#pragma weak mpi_win_lock__ = PMPI_WIN_LOCK
#pragma weak mpi_win_lock_ = PMPI_WIN_LOCK
#pragma weak mpi_win_lock = PMPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_LOCK = pmpi_win_lock__
#pragma weak mpi_win_lock__ = pmpi_win_lock__
#pragma weak mpi_win_lock_ = pmpi_win_lock__
#pragma weak mpi_win_lock = pmpi_win_lock__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_LOCK = pmpi_win_lock_
#pragma weak mpi_win_lock__ = pmpi_win_lock_
#pragma weak mpi_win_lock_ = pmpi_win_lock_
#pragma weak mpi_win_lock = pmpi_win_lock_
#else
#pragma weak MPI_WIN_LOCK = pmpi_win_lock
#pragma weak mpi_win_lock__ = pmpi_win_lock
#pragma weak mpi_win_lock_ = pmpi_win_lock
#pragma weak mpi_win_lock = pmpi_win_lock
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_LOCK( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_WIN_LOCK = PMPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_lock__ = pmpi_win_lock__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_lock = pmpi_win_lock
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_lock_ = pmpi_win_lock_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WIN_LOCK  MPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_lock__  mpi_win_lock__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_lock  mpi_win_lock
#else
#pragma _HP_SECONDARY_DEF pmpi_win_lock_  mpi_win_lock_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WIN_LOCK as PMPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_win_lock__ as pmpi_win_lock__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_win_lock as pmpi_win_lock
#else
#pragma _CRI duplicate mpi_win_lock_ as pmpi_win_lock_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_LOCK( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_lock_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_win_lock__ = MPI_WIN_LOCK
#pragma weak mpi_win_lock_ = MPI_WIN_LOCK
#pragma weak mpi_win_lock = MPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_LOCK = mpi_win_lock__
#pragma weak mpi_win_lock_ = mpi_win_lock__
#pragma weak mpi_win_lock = mpi_win_lock__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_LOCK = mpi_win_lock_
#pragma weak mpi_win_lock__ = mpi_win_lock_
#pragma weak mpi_win_lock = mpi_win_lock_
#else
#pragma weak MPI_WIN_LOCK = mpi_win_lock
#pragma weak mpi_win_lock__ = mpi_win_lock
#pragma weak mpi_win_lock_ = mpi_win_lock
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_LOCK( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_lock__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_lock_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_lock( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_win_lock__ = PMPI_WIN_LOCK
#pragma weak pmpi_win_lock_ = PMPI_WIN_LOCK
#pragma weak pmpi_win_lock = PMPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WIN_LOCK = pmpi_win_lock__
#pragma weak pmpi_win_lock_ = pmpi_win_lock__
#pragma weak pmpi_win_lock = pmpi_win_lock__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WIN_LOCK = pmpi_win_lock_
#pragma weak pmpi_win_lock__ = pmpi_win_lock_
#pragma weak pmpi_win_lock = pmpi_win_lock_
#else
#pragma weak PMPI_WIN_LOCK = pmpi_win_lock
#pragma weak pmpi_win_lock__ = pmpi_win_lock
#pragma weak pmpi_win_lock_ = pmpi_win_lock
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_win_lock_ PMPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_lock_ pmpi_win_lock__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_lock_ pmpi_win_lock
#else
#define mpi_win_lock_ pmpi_win_lock_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Win_lock
#define MPI_Win_lock PMPI_Win_lock 

#else

#ifdef F77_NAME_UPPER
#define mpi_win_lock_ MPI_WIN_LOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_lock_ mpi_win_lock__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_lock_ mpi_win_lock
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_win_lock_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *ierr ){
    *ierr = MPI_Win_lock( (int)*v1, (int)*v2, (int)*v3, (MPI_Win)*v4 );
}
