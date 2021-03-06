/*************************************************************************************************/
/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 A567W
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * 
 * @file	KsVector3d.cpp
 * @brief	3Dベクトル操作
 * @date	2014/04/12
 * @author	A567W
 * @version	1.0.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>                                            */
/*==============================================================================================*/
#include "math/KsVector3d.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

const KsVector3d KsVector3d::ZERO( 0.0f, 0.0f, 0.0f );
const KsVector3d KsVector3d::HALF( 0.5f, 0.5f, 0.5f );
const KsVector3d KsVector3d::ONE(  1.0f, 1.0f, 1.0f );
const KsVector3d KsVector3d::MAX(  ksREAL_MAX, ksREAL_MAX, ksREAL_MAX );
const KsVector3d KsVector3d::MIN(  ksREAL_MIN, ksREAL_MIN, ksREAL_MIN );

/************************************************************************************************/
/*
 * 最初の2つのベクトルの積を、3 番目のベクトルに加算します。
 * @param   V1      ベクトル1
 * @param   V2      ベクトル2
 * @param   V3      ベクトル3
 * @return          最初の 2 つのベクトルの積を、3 番目のベクトルに加算したベクトル
 */
/************************************************************************************************/
KsVector3d KsVector3d::MultiplyAdd( const KsVector3d& V1, const KsVector3d& V2, const KsVector3d& V3 )
{
	KsVector3d	ret;

	ret.x = V1.x * V2.x + V3.x;
	ret.y = V1.y * V2.y + V3.y;
	ret.z = V1.z * V2.z + V3.z;
	
	return ret;
}

/************************************************************************************************/
/*
 * 線形補間を行います。
 * @param   V1      ベクトル1
 * @param   V2      ベクトル2
 * @param   amount  V2 の重みを示す 0.0f 〜 1.0f の範囲の値。
 * @return          2 つのベクトルを線形補間したベクトル
 */
/************************************************************************************************/
KsVector3d KsVector3d::Lerp( const KsVector3d& V1, const KsVector3d& V2, KsReal amount )
{
	return V1 + (V2 - V1) * amount;
}


ksNS_KS_END

