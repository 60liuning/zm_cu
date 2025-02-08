#pragma once
#include "ad_func.hpp"




template<int _Id, int _GDim_>
inline void _cp_AdF1(int s0, int gDm
	, void* pIn0, int in0_s1
	, void* pInG0, int inG0_s1
	, void* pOut, int out_s1
	, void* pOutG, int outG_s1)
{
	for (int i = 0; i < s0; i++)
	{
		AdBf bf_in0(i, in0_s1, pIn0, pInG0, gDm);
		AdBf bf_out(i, out_s1, pOut, pOutG, gDm);

		AdFOpDef_1<_Id,_GDim_>::op(bf_in0, bf_out);
	}
}

template<int _Id, int _GDim_>
inline void _cp_AdF2(int s0, int gDm
	, void* pIn0, int in0_s1
	, void* pInG0, int inG0_s1
	, void* pIn1, int in1_s1
	, void* pInG1, int inG1_s1
	, void* pOut, int out_s1
	, void* pOutG, int outG_s1)
{
	for (int i = 0; i < s0; i++)
	{
		AdBf bf_in0(i, in0_s1, pIn0, pInG0, gDm);
		AdBf bf_in1(i, in1_s1, pIn1, pInG1, gDm);
		AdBf bf_out(i, out_s1, pOut, pOutG, gDm);

		AdFOpDef_2<_Id, _GDim_>::op(bf_in0, bf_in1, bf_out);
	}
}

template<int _Id, int _GDim_>
inline void _cp_AdF3(int s0, int gDm
	, void* pIn0, int in0_s1
	, void* pInG0, int inG0_s1
	, void* pIn1, int in1_s1
	, void* pInG1, int inG1_s1
	, void* pIn2, int in2_s1
	, void* pInG2, int inG2_s1
	, void* pOut, int out_s1
	, void* pOutG, int outG_s1)
{
	for (int i = 0; i < s0; i++)
	{
		AdBf bf_in0(i, in0_s1, pIn0, pInG0, gDm);
		AdBf bf_in1(i, in1_s1, pIn1, pInG1, gDm);
		AdBf bf_in2(i, in2_s1, pIn2, pInG2, gDm);
		AdBf bf_out(i, out_s1, pOut, pOutG, gDm);

		AdFOpDef_3<_Id, _GDim_>::op(bf_in0, bf_in1, bf_in2, bf_out);
	}
}

template<int _Id, int _GDim_>
inline void _cp_AdF4(int s0, int gDm
	, void* pIn0, int in0_s1
	, void* pInG0, int inG0_s1
	, void* pIn1, int in1_s1
	, void* pInG1, int inG1_s1
	, void* pIn2, int in2_s1
	, void* pInG2, int inG2_s1
	, void* pIn3, int in3_s1
	, void* pInG3, int inG3_s1
	, void* pOut, int out_s1
	, void* pOutG, int outG_s1)
{
	for (int i = 0; i < s0; i++)
	{
		AdBf bf_in0(i, in0_s1, pIn0, pInG0, gDm);
		AdBf bf_in1(i, in1_s1, pIn1, pInG1, gDm);
		AdBf bf_in2(i, in2_s1, pIn2, pInG2, gDm);
		AdBf bf_in3(i, in3_s1, pIn3, pInG3, gDm);
		AdBf bf_out(i, out_s1, pOut, pOutG, gDm);

		AdFOpDef_4<_Id, _GDim_>::op(bf_in0, bf_in1, bf_in2, bf_in3, bf_out);
	}
}

template<int _Id, int _GDim_>
inline void _cp_AdF5(int s0, int gDm
	, void* pIn0, int in0_s1
	, void* pInG0, int inG0_s1
	, void* pIn1, int in1_s1
	, void* pInG1, int inG1_s1
	, void* pIn2, int in2_s1
	, void* pInG2, int inG2_s1
	, void* pIn3, int in3_s1
	, void* pInG3, int inG3_s1
	, void* pIn4, int in4_s1
	, void* pInG4, int inG4_s1
	, void* pOut, int out_s1
	, void* pOutG, int outG_s1)
{
	for (int i = 0; i < s0; i++)
	{
		AdBf bf_in0(i, in0_s1, pIn0, pInG0, gDm);
		AdBf bf_in1(i, in1_s1, pIn1, pInG1, gDm);
		AdBf bf_in2(i, in2_s1, pIn2, pInG2, gDm);
		AdBf bf_in3(i, in3_s1, pIn3, pInG3, gDm);
		AdBf bf_in4(i, in4_s1, pIn4, pInG4, gDm);
		AdBf bf_out(i, out_s1, pOut, pOutG, gDm);

		AdFOpDef_5<_Id, _GDim_>::op(bf_in0, bf_in1, bf_in2, bf_in3, bf_in4, bf_out);
	}
}

template<int _Id, int _GDim_>
inline void _cp_AdF6(int s0, int gDm
	, void* pIn0, int in0_s1
	, void* pInG0, int inG0_s1
	, void* pIn1, int in1_s1
	, void* pInG1, int inG1_s1
	, void* pIn2, int in2_s1
	, void* pInG2, int inG2_s1
	, void* pIn3, int in3_s1
	, void* pInG3, int inG3_s1
	, void* pIn4, int in4_s1
	, void* pInG4, int inG4_s1
	, void* pIn5, int in5_s1
	, void* pInG5, int inG5_s1
	, void* pOut, int out_s1
	, void* pOutG, int outG_s1)
{
	for (int i = 0; i < s0; i++)
	{
		AdBf bf_in0(i, in0_s1, pIn0, pInG0, gDm);
		AdBf bf_in1(i, in1_s1, pIn1, pInG1, gDm);
		AdBf bf_in2(i, in2_s1, pIn2, pInG2, gDm);
		AdBf bf_in3(i, in3_s1, pIn3, pInG3, gDm);
		AdBf bf_in4(i, in4_s1, pIn4, pInG4, gDm);
		AdBf bf_in5(i, in5_s1, pIn5, pInG5, gDm);
		AdBf bf_out(i, out_s1, pOut, pOutG, gDm);

		AdFOpDef_6<_Id, _GDim_>::op(bf_in0, bf_in1, bf_in2, bf_in3, bf_in4, bf_in5, bf_out);
	}
}

inline void _cp_materialBack(int s0
	, Ad_Ftype* pBkGd, int bkGd_s1
	, Ad_Ftype* pOutGd, int outGd_s1
	, Ad_Ftype* pInGd, int inGd_s1)
{
	assert(inGd_s1 * bkGd_s1 == outGd_s1);

	for (int i = 0; i < s0; i++)
	{
		_RawBf bkGd(i, pBkGd, bkGd_s1);
		_RawBf outGd(i, pOutGd, outGd_s1);
		_RawBf inGd(i, pInGd, inGd_s1);

		//LG<<"bkGD: "<<bkGd[0];
		_materialBack(bkGd, bkGd_s1, outGd, inGd, inGd_s1);
	}
}




