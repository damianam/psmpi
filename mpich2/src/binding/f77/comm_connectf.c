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
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_CONNECT( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_COMM_CONNECT = PMPI_COMM_CONNECT
#pragma weak mpi_comm_connect__ = PMPI_COMM_CONNECT
#pragma weak mpi_comm_connect_ = PMPI_COMM_CONNECT
#pragma weak mpi_comm_connect = PMPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_CONNECT = pmpi_comm_connect__
#pragma weak mpi_comm_connect__ = pmpi_comm_connect__
#pragma weak mpi_comm_connect_ = pmpi_comm_connect__
#pragma weak mpi_comm_connect = pmpi_comm_connect__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_CONNECT = pmpi_comm_connect_
#pragma weak mpi_comm_connect__ = pmpi_comm_connect_
#pragma weak mpi_comm_connect_ = pmpi_comm_connect_
#pragma weak mpi_comm_connect = pmpi_comm_connect_
#else
#pragma weak MPI_COMM_CONNECT = pmpi_comm_connect
#pragma weak mpi_comm_connect__ = pmpi_comm_connect
#pragma weak mpi_comm_connect_ = pmpi_comm_connect
#pragma weak mpi_comm_connect = pmpi_comm_connect
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_CONNECT( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_COMM_CONNECT = PMPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_comm_connect__ = pmpi_comm_connect__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_comm_connect = pmpi_comm_connect
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_comm_connect_ = pmpi_comm_connect_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_CONNECT  MPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_connect__  mpi_comm_connect__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_connect  mpi_comm_connect
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_connect_  mpi_comm_connect_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_CONNECT as PMPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_connect__ as pmpi_comm_connect__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_connect as pmpi_comm_connect
#else
#pragma _CRI duplicate mpi_comm_connect_ as pmpi_comm_connect_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_CONNECT( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_connect_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_comm_connect__ = MPI_COMM_CONNECT
#pragma weak mpi_comm_connect_ = MPI_COMM_CONNECT
#pragma weak mpi_comm_connect = MPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_CONNECT = mpi_comm_connect__
#pragma weak mpi_comm_connect_ = mpi_comm_connect__
#pragma weak mpi_comm_connect = mpi_comm_connect__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_CONNECT = mpi_comm_connect_
#pragma weak mpi_comm_connect__ = mpi_comm_connect_
#pragma weak mpi_comm_connect = mpi_comm_connect_
#else
#pragma weak MPI_COMM_CONNECT = mpi_comm_connect
#pragma weak mpi_comm_connect__ = mpi_comm_connect
#pragma weak mpi_comm_connect_ = mpi_comm_connect
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_CONNECT( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_connect__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_connect_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_connect( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_comm_connect__ = PMPI_COMM_CONNECT
#pragma weak pmpi_comm_connect_ = PMPI_COMM_CONNECT
#pragma weak pmpi_comm_connect = PMPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_COMM_CONNECT = pmpi_comm_connect__
#pragma weak pmpi_comm_connect_ = pmpi_comm_connect__
#pragma weak pmpi_comm_connect = pmpi_comm_connect__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_COMM_CONNECT = pmpi_comm_connect_
#pragma weak pmpi_comm_connect__ = pmpi_comm_connect_
#pragma weak pmpi_comm_connect = pmpi_comm_connect_
#else
#pragma weak PMPI_COMM_CONNECT = pmpi_comm_connect
#pragma weak pmpi_comm_connect__ = pmpi_comm_connect
#pragma weak pmpi_comm_connect_ = pmpi_comm_connect
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_comm_connect_ PMPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_connect_ pmpi_comm_connect__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_connect_ pmpi_comm_connect
#else
#define mpi_comm_connect_ pmpi_comm_connect_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Comm_connect
#define MPI_Comm_connect PMPI_Comm_connect 

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_connect_ MPI_COMM_CONNECT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_connect_ mpi_comm_connect__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_connect_ mpi_comm_connect
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_connect_ ( char *v1 FORT_MIXED_LEN(d1), MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr FORT_END_LEN(d1) ){
    char *p1;

    {char *p = v1 + d1 - 1;
     int  li;
        while (*p == ' ' && p > v1) p--;
        p++;
        p1 = (char *)MPIU_Malloc( p-v1 + 1 );
        for (li=0; li<(p-v1); li++) { p1[li] = v1[li]; }
        p1[li] = 0; 
    }
    *ierr = MPI_Comm_connect( p1, (MPI_Info)(*v2), (int)*v3, (MPI_Comm)(*v4), (MPI_Comm *)(v5) );
    MPIU_Free( p1 );
}
