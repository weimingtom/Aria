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
 * @file	KsVector4d.h
 * @brief	4Dベクトル操作
 * @date	2014/04/12
 * @author	A567W
 * @version	1.0.0
 */
/************************************************************************************************/
#ifndef __KSVECTOR4D_H__
#define __KSVECTOR4D_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                            */
/*==============================================================================================*/
#include "KsMathCommon.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/


/*************************************************************************************************/
/**
 * @class	KsVector4d
 * @brief	4Dベクトル操作クラス
 * @author	A567W
 */
/*************************************************************************************************/
class ksENGINE_API KsVector4d
{
	public:
		/**
		 * ベクトルの x, y, z, w 成分
		 */
		KsReal							x, y, z, w;

		/**
		 * コンストラクタ					ゼロで初期化されます
		 */
										KsVector4d() : x( 0.0f ), y( 0.0f ), z( 0.0f ), w( 0.0f ) {}

		/**
		 * コンストラクタ
		 * @param	val					初期化する値, この値でx, y, z, w を初期化します
		 */
										KsVector4d( KsReal val ) : x( val ), y( val ), z( val ), w( val ) {}

		/**
		 * コンストラクタ
		 * @param	farray				初期化する値, この配列の順に x, y, z, w を初期化します
		 */
										KsVector4d( const KsReal* fArray ) : x( fArray[ 0 ] ), y( fArray[ 1 ] ), z( fArray[ 2 ] ), w( fArray[ 3 ] ) {}
	
		/**
		 * コンストラクタ(copy)
		 * @param	refVector			引数の値をコピーして初期化します
		 */
										KsVector4d( const KsVector4d& refVector ) : x( refVector.x ), y( refVector.y ), z( refVector.z ), w( refVector.w ) {}
		/**
		 * コンストラクタ
		 * @param	xf					初期化するxの値
		 * @param	yf					初期化するyの値
		 * @param	zf					初期化するzの値
		 * @param	wf					初期化するwの値
		 */
										KsVector4d( KsReal xf, KsReal yf, KsReal zf, KsReal wf ) : x( xf ), y( yf ), z( zf ), w( wf ) {}

		/**
		 * KsRealのポインタに変換してで取得できるようにする
		 */
										operator KsReal* () { return &x; }

		/**
		 * KsRealのポインタに変換してで取得できるようにする
		 */
										operator const KsReal* () const { return &x; }

		/**
		 * 配列内の値を返す
		 * @param	num					返す配列のナンバー
		 * @return						配列内の先頭の参照
		 */
		KsReal&							operator[]( KsInt32 index );

		/**
		 * 配列内の値を返す
		 * @param	num					返す配列のナンバー
		 * @return						配列内の先頭の参照
		 */
		const KsReal&					operator[]( KsInt32 index ) const;

		/**
		 * ベクトルの( = )演算子
		 * @param	rkVector			値をコピーするベクトル
		 * @return						自分自身のベクトル参照( *this )
		 */
		const KsVector4d&				operator = ( const KsVector4d& rkVector );
							
		/**
		 * ベクトルの( += )演算子
		 * @param	rkVector			値を足すベクトル
		 * @return						自分自身のベクトル参照( *this )
		 */
		KsVector4d&						operator += ( const KsVector4d& refVector );

		/**
		 * ベクトルの( += )演算子
		 * @param	rkVector			値を足すベクトル
		 * @return						自分自身のベクトル参照( *this )
		 */
		KsVector4d&						operator -= ( const KsVector4d& refVector );

		/**
		 * ベクトルの( *= )演算子
		 * @param	s					ベクトルに掛ける値
		 * @return						自分自身のベクトル参照( *this )
		 */
		KsVector4d&						operator *= ( KsReal s );

		/**
		 * ベクトルの( /= )演算子
		 * @param	s					ベクトルを割る値
		 * @return						自分自身のベクトル参照( *this )
		 */
		KsVector4d&						operator /= ( KsReal s );

		/**
		 * ベクトルの( + )演算子
		 * @return						+ 演算子のベクトル
		 */
		KsVector4d						operator + () const;

		/**
		 * ベクトルの( - )演算子
		 * @return						- 演算子のベクトル
		 */
		KsVector4d						operator - () const;

		/**
		 * ベクトルの( + )演算子
		 * @param	refVector			計算するベクトル
		 * @return						結果のベクトル
		 */
		KsVector4d						operator + ( const KsVector4d& refVector ) const;

		/**
		 * ベクトルの( - )演算子
		 * @param	refVector			計算するベクトル
		 */
		KsVector4d						operator - ( const KsVector4d& refVector ) const;
	
		/**
		 * ベクトルの( * )演算子
		 * @param						掛ける値
		 * @return						結果のベクトル
		 */
		KsVector4d						operator * ( KsReal s ) const;
	
		/**
		 * ベクトルの( / )演算子
		 * @param	s					割る値
		 * @return						結果のベクトル
		 */
		KsVector4d						operator / ( KsReal s ) const;

		/**
		 * ベクトルが等しいかを判定する
		 * @param	refVector			判定するベクトル
		 * @retval	ksTRUE				等しい
		 * @retval	ksFALSE				等しくない
		 */
		KsBool							operator == ( const KsVector4d& refVector ) const;
	
		/**
		 * ベクトルが等しくないかを判定する
		 * @param	refVector			判定するベクトル
		 * @retval	ksTRUE				等しくない
		 * @retval	ksFALSE				等しい
		 */
		KsBool							operator != ( const KsVector4d& refVector ) const;

		/**
		 * 各成分をセットする
		 * @param	xf					x成分
		 * @param	yf					y成分
		 * @param	zf					z成分
		 * @param	wf					w成分
		 */
		void							set( KsReal xf, KsReal yf, KsReal zf, KsReal wf );
	
		/**
		 * 各成分をセットする
		 * @param	fArray				成分の先頭のポインタ
		 */
		void							set( const KsReal* fArray );
	
		/**
		 * 指定した長さのベクトルに変更する
		 * @param	len					変更する長さ
		 */
		void							scaleTo( KsReal len );
	
		/**
		 * ０でリセットする
		 */
		void							reset();
	
		/**
		 * ベクトルの長さを取得する
		 */
		KsReal							length();
	
		/**
		 * ベクトルの長さの２乗を取得する
		 */
		KsReal							length2();
	
		/**
		 * 正規化する
		 */
		void							normalize();
	
		/**
		 * 内積
		 * @param	refVector			内積するベクトル
		 * @return						内積結果のスカラー値
		 */
		KsReal							dotProduct( const KsVector4d& refVector ) const;

		/**
		 * ゼロベクトル
		 */
		static const KsVector4d			ZERO;

		/**
		 * 0.5fで初期化されたベクトル
		 */
		static const KsVector4d			HALF;

		/**
		 * 1.0fで初期化されたベクトル
		 */
		static const KsVector4d			ONE;

		/**
		 * 最大値
		 */
		static const KsVector4d			MAX;

		/**
		 * 最小値
		 */
		static const KsVector4d			MIN;

    public:
        /**
         * 最初の2つのベクトルの積を、3 番目のベクトルに加算します。
         * @param   V1      ベクトル1
         * @param   V2      ベクトル2
         * @param   V3      ベクトル3
         * @return          最初の 2 つのベクトルの積を、3 番目のベクトルに加算したベクトル
         */
        static KsVector4d MultiplyAdd( const KsVector4d& V1, const KsVector4d& V2, const KsVector4d& V3 );

        /**
         * 線形補間を行います。
         * @param   V1      ベクトル1
         * @param   V2      ベクトル2
         * @param   amount  V2 の重みを示す 0.0f 〜 1.0f の範囲の値。
         * @return          2 つのベクトルを線形補間したベクトル
         */
        static KsVector4d Lerp( const KsVector4d& V1, const KsVector4d& V2, KsReal amount );
};

/*************************************************************************************************/
/*---------------------------<< インライン部分ヘッダーファイル >>------------------------------------*/
								#include "KsVector4d.inl"
/*-----------------------------------------------------------------------------------------------*/
/*************************************************************************************************/

ksNS_KS_END

#endif /* __KSVECTOR4D_H__ */



