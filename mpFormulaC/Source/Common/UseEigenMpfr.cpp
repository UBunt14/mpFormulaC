
#define Use_Mpfr

#include "mpNum_Internal.h"
#include "libEigen.h"

void EigenLib_Mpfr_SetPrecision(int prec)
{
    EigenLib_mpfr_SetPrecision(prec * 3.34);
}


void EigenLib_Mpfr_Print(const char * Title, mpNumMatrixPtr xPtr)
{
    EigenLib_mpType_Print(Title, (mpMatrixPtr) xPtr);
}

void EigenLib_Mpfr_Init(mpNumMatrixPtr* x)
{
    EigenLib_mpType_Init((mpMatrixPtr*) x);
}

void EigenLib_Mpfr_Clear(mpNumMatrixPtr* x)
{
    EigenLib_mpType_Clear((mpMatrixPtr*) x);
}

void SetSpecialValue_Mpfr(long m, long n, long what, mpNumMatrixPtr xPtr)
{
    SetSpecialValue_mpType(m, n, what, (mpMatrixPtr) xPtr);
}



void EigenLib_Mpfr_SetItemIntoMatrix(mpNumMatrixPtr DestMatrix, long row, long col, mpNumMatrixPtr SourceItem)
{
    EigenLib_mpType_SetItemIntoMatrix((mpMatrixPtr) DestMatrix, row, col, (mpMatrixPtr) SourceItem);
}


void EigenLib_Mpfr_GetItemFromMatrix(mpNumMatrixPtr DestItem, long row, long col, mpNumMatrixPtr SourceMatrix)
{
    EigenLib_mpType_GetItemFromMatrix((mpMatrixPtr) DestItem, row, col, (mpMatrixPtr) SourceMatrix);
}




void Std_Mpfr_Functions0(long what, mpNumMatrixPtr yPtr)
{
    Std_mpType_Functions0(what, (mpMatrixPtr) yPtr);
}


void Std_Mpfr_Functions1(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr)
{
    Std_mpType_Functions1(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr);
}


void Std_Mpfr_Functions2(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr)
{
    Std_mpType_Functions2(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr);
}


void Std_Mpfr_Functions3(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr)
{
    Std_mpType_Functions3(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr);
}


void Std_Mpfr_Functions1_2Results(long what, mpNumMatrixPtr y0Ptr, mpNumMatrixPtr y1Ptr, mpNumMatrixPtr x0Ptr)
{
    Std_mpType_Functions_2Results(what, (mpMatrixPtr) y0Ptr, (mpMatrixPtr) y1Ptr, (mpMatrixPtr) x0Ptr);
}


void Std_Mpfr_Functions2_2Results(long what, mpNumMatrixPtr y0Ptr, mpNumMatrixPtr y1Ptr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr)
{
    Std_mpType_Functions2_2Results(what, (mpMatrixPtr) y0Ptr, (mpMatrixPtr) y1Ptr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr);
}








void boost_Mpfr_ElementaryFunctions1(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr)
{
    boost_mpType_ElementaryFunctions1(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr);
}


void boost_Mpfr_ElementaryFunctions2(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr)
{
    boost_mpType_ElementaryFunctions2(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr);
}


void boost_Mpfr_ElementaryFunctions3(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr)
{
    boost_mpType_ElementaryFunctions3(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr);
}


void boost_Mpfr_ElementaryFunctions4(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr, mpNumMatrixPtr x3Ptr)
{
    boost_mpType_ElementaryFunctions4(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr, (mpMatrixPtr) x3Ptr);
}


void boost_Mpfr_DistributionFunctions2(long Dist, long Target, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr)
{
    boost_mpType_DistributionFunctions2(Dist, Target, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr);
}

void boost_Mpfr_DistributionFunctions3(long Dist, long Target, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr)
{
    boost_mpType_DistributionFunctions3(Dist, Target, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr);
}


void boost_Mpfr_DistributionFunctions4(long Dist, long Target, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr, mpNumMatrixPtr x3Ptr)
{
    boost_mpType_DistributionFunctions4(Dist, Target, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr, (mpMatrixPtr) x3Ptr);
}




void EigenLib_Mpfr_Inverse(mpNumMatrixPtr xPtr, mpNumMatrixPtr mPtr, long Decomposition)
{
    EigenLib_mpType_Inverse((mpMatrixPtr) xPtr, (mpMatrixPtr) mPtr, Decomposition);
}

void BasicArithmetic_Mpfr(long what, mpNumMatrixPtr mPtr, mpNumMatrixPtr xPtr, mpNumMatrixPtr zPtr)
{
    BasicArithmetic_mpType(what, (mpMatrixPtr) mPtr, (mpMatrixPtr) xPtr, (mpMatrixPtr) zPtr);
}


//
//void mpMath_Mpfr_Functions0(long what, mpNumMatrixPtr yPtr)
//{
//    mpMath_mpType_Functions0(what, (mpMatrixPtr) yPtr);
//}
//
//
//void mpMath_Mpfr_Functions1(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr)
//{
//    mpMath_mpType_Functions1(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr);
//}
//
//
//void mpMath_Mpfr_Functions2(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr)
//{
//    mpMath_mpType_Functions2(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr);
//}
//
//
//void mpMath_Mpfr_Functions3(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr)
//{
//    mpMath_mpType_Functions3(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr);
//}
//
//
//void mpMath_Mpfr_Functions4(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr, mpNumMatrixPtr x3Ptr)
//{
//    mpMath_mpType_Functions4(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr, (mpMatrixPtr) x3Ptr);
//}
//
//
//void mpMath_Mpfr_Functions5(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr, mpNumMatrixPtr x2Ptr, mpNumMatrixPtr x3Ptr, mpNumMatrixPtr x4Ptr)
//{
//    mpMath_mpType_Functions5(what, (mpMatrixPtr) yPtr, (mpMatrixPtr) x0Ptr, (mpMatrixPtr) x1Ptr, (mpMatrixPtr) x2Ptr, (mpMatrixPtr) x3Ptr, (mpMatrixPtr) x4Ptr);
//}
//




void cplx_EigenLib_Mpfr_Print(const char * Title, mpNumMatrixPtr xPtr)
{
    EigenLib_cplx_mpType_Print(Title, (mpCplxMatrixPtr) xPtr);
}

void cplx_EigenLib_Mpfr_Init(mpNumMatrixPtr* x)
{
    EigenLib_cplx_mpType_Init((mpCplxMatrixPtr*) x);
}

void cplx_EigenLib_Mpfr_Clear(mpNumMatrixPtr* x)
{
    EigenLib_cplx_mpType_Clear((mpCplxMatrixPtr*) x);
}

void cplx_SetSpecialValue_Mpfr(long m, long n, long what, mpNumMatrixPtr xPtr)
{
    SetSpecialValue_cplx_mpType(m, n, what, (mpCplxMatrixPtr) xPtr);
}



void Std_Mpfr_cplx_Functions1(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr)
{
    Std_mpType_cplx_Functions1(what, (mpCplxMatrixPtr) yPtr, (mpCplxMatrixPtr) x0Ptr);
}

void Std_Mpfr_cplx_Functions2(long what, mpNumMatrixPtr yPtr, mpNumMatrixPtr x0Ptr, mpNumMatrixPtr x1Ptr)
{
    Std_mpType_cplx_Functions2(what, (mpCplxMatrixPtr) yPtr, (mpCplxMatrixPtr) x0Ptr, (mpCplxMatrixPtr) x1Ptr);
}





void cplx_EigenLib_Mpfr_Inverse(mpNumMatrixPtr xPtr, mpNumMatrixPtr mPtr, long Decomposition)
{
    EigenLib_cplx_mpType_Inverse((mpCplxMatrixPtr) xPtr, (mpCplxMatrixPtr) mPtr, Decomposition);
}

void cplx_BasicArithmetic_Mpfr(long what, mpNumMatrixPtr mPtr, mpNumMatrixPtr xPtr, mpNumMatrixPtr zPtr)
{
    BasicArithmetic_cplx_mpType(what, (mpCplxMatrixPtr) mPtr, (mpCplxMatrixPtr) xPtr, (mpCplxMatrixPtr) zPtr);
}



#undef  Use_Mpfr
