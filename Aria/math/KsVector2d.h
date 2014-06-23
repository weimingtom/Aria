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
 * @file	KsVector2d.h
 * @brief	2D�x�N�g������
 * @date	2014/04/12
 * @author	A567W
 * @version	1.0.0
 */
/************************************************************************************************/
#ifndef __KSVECTOR2D_H__
#define __KSVECTOR2D_H__

/*==============================================================================================*/
/*                                 << �C���N���[�h >>                                             */
/*==============================================================================================*/
#include "KsMathBase.h"

/*==============================================================================================*/
/*                                     << ��` >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << �錾 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/*************************************************************************************************/
/**
 * @class	KsVector2d
 * @brief	2D�x�N�g������N���X
 * @author	A567W
 */
/*************************************************************************************************/
class ksENGINE_API KsVector2d
{
	public:
		/**
		 * �x�N�g���� x, y ����
		 */
		KsReal							x, y;

		/**
		 * �R���X�g���N�^					�[���ŏ���������܂�
		 */
										KsVector2d() : x( 0.0f ), y( 0.0f ) {}

		/**
		 * �R���X�g���N�^
		 * @param	val					����������l, ���̒l��x, y �����������܂�
		 */
										KsVector2d( KsReal val ) : x( val ), y( val ) {}

		/**
		 * �R���X�g���N�^
		 * @param	fArray				����������l, ���̔z��̏��� x, y �����������܂�
		 */
										KsVector2d( const KsReal* fArray ) : x( fArray[ 0 ] ), y( fArray[ 1 ] ) {}
	
		/**
		 * �R���X�g���N�^(copy)
		 * @param	refVector			�����̒l���R�s�[���ď��������܂�
		 */
										KsVector2d( const KsVector2d& refVector ) : x( refVector.x ), y( refVector.y ) {}
		/**
		 * �R���X�g���N�^
		 * @param	xf					����������x�̒l
		 * @param	yf					����������y�̒l
		 */
										KsVector2d( KsReal xf, KsReal yf ) : x( xf ), y( yf ){}

		/**
		 * KsReal�̃|�C���^�ɕϊ����ĂŎ擾�ł���悤�ɂ���
		 */
										operator KsReal* () { return &x; }

		/**
		 * KsReal�̃|�C���^�ɕϊ����ĂŎ擾�ł���悤�ɂ���
		 */
										operator const KsReal* () const { return &x; }

		/**
		 * �z����̒l��Ԃ�
		 * @param	index				�Ԃ��z��̃i���o�[
		 * @return						�z����̐擪�̎Q��
		 */
		KsReal&							operator[]( KsInt32 index );

		/**
		 * �z����̒l��Ԃ�
		 * @param	index				�Ԃ��z��̃i���o�[
		 * @return						�z����̐擪�̎Q��
		 */
		const KsReal&					operator[]( KsInt32 index ) const;

		/**
		 * �x�N�g����( = )���Z�q
		 * @param	rkVector			�l���R�s�[����x�N�g��
		 * @return						�������g�̃x�N�g���Q��( *this )
		 */
		const KsVector2d&				operator = ( const KsVector2d& rkVector );
							
		/**
		 * �x�N�g����( += )���Z�q
		 * @param	rkVector			�l�𑫂��x�N�g��
		 * @return						�������g�̃x�N�g���Q��( *this )
		 */
		KsVector2d&						operator += ( const KsVector2d& refVector );

		/**
		 * �x�N�g����( += )���Z�q
		 * @param	rkVector			�l�𑫂��x�N�g��
		 * @return						�������g�̃x�N�g���Q��( *this )
		 */
		KsVector2d&						operator -= ( const KsVector2d& refVector );

		/**
		 * �x�N�g����( *= )���Z�q
		 * @param	s					�x�N�g���Ɋ|����l
		 * @return						�������g�̃x�N�g���Q��( *this )
		 */
		KsVector2d&						operator *= ( KsReal s );

		/**
		 * �x�N�g����( /= )���Z�q
		 * @param	s					�x�N�g��������l
		 * @return						�������g�̃x�N�g���Q��( *this )
		 */
		KsVector2d&						operator /= ( KsReal s );

		/**
		 * �x�N�g����( + )���Z�q
		 * @return						+ ���Z�q�̃x�N�g��
		 */
		KsVector2d						operator + () const;

		/**
		 * �x�N�g����( - )���Z�q
		 * @return						- ���Z�q�̃x�N�g��
		 */
		KsVector2d						operator - () const;

		/**
		 * �x�N�g����( + )���Z�q
		 * @param	refVector			�v�Z����x�N�g��
		 * @return						���ʂ̃x�N�g��
		 */
		KsVector2d						operator + ( const KsVector2d& refVector ) const;

		/**
		 * �x�N�g����( - )���Z�q
		 * @param	refVector			�v�Z����x�N�g��
		 */
		KsVector2d						operator - ( const KsVector2d& refVector ) const;
	
		/**
		 * �x�N�g����( * )���Z�q
		 * @param						�|����l
		 * @return						���ʂ̃x�N�g��
		 */
		KsVector2d						operator * ( KsReal s ) const;
	
		/**
		 * �x�N�g����( / )���Z�q
		 * @param	s					����l
		 * @return						���ʂ̃x�N�g��
		 */
		KsVector2d						operator / ( KsReal s ) const;

		/**
		 * �x�N�g�������������𔻒肷��
		 * @param	refVector			���肷��x�N�g��
		 * @retval	ksTRUE				������
		 * @retval	ksFALSE				�������Ȃ�
		 */
		KsBool							operator == ( const KsVector2d& refVector ) const;
	
		/**
		 * �x�N�g�����������Ȃ����𔻒肷��
		 * @param	refVector			���肷��x�N�g��
		 * @retval	ksTRUE				�������Ȃ�
		 * @retval	ksFALSE				������
		 */
		KsBool							operator != ( const KsVector2d& refVector ) const;

		/**
		 * �e�������Z�b�g����
		 * @param	xf					x����
		 * @param	yf					y����
		 * @param	zf					z����
		 */
		void							set( KsReal xf, KsReal yf );
	
		/**
		 * �e�������Z�b�g����
		 * @param	fArray				�����̐擪�̃|�C���^
		 */
		void							set( const KsReal* fArray );
	
		/**
		 * �O�Ń��Z�b�g����
		 */
		void							reset();

		/**
		 * �w�肵�������̃x�N�g���ɕύX����
		 * @param	len					�ύX���钷��
		 */
		void							scaleTo( KsReal len );
	
		/**
		 * �x�N�g���̒������擾����
		 */
		KsReal							length();
	
		/**
		 * �x�N�g���̒����̂Q����擾����
		 */
		KsReal							length2();
	
		/**
		 * ���K������
		 */
		void							normalize();
	
		/**
		 * ����
		 * @param	refVector			���ς���x�N�g��
		 * @return						���ό��ʂ̃X�J���[�l
		 */
		KsReal							dotProduct( const KsVector2d& refVector ) const;

		/**
		 * �[���x�N�g��
		 */
		static const KsVector2d			ZERO;

		/**
		 * 0.5f�ŏ��������ꂽ�x�N�g��
		 */
		static const KsVector2d			HALF;

		/**
		 * 1.0f�ŏ��������ꂽ�x�N�g��
		 */
		static const KsVector2d			ONE;

		/**
		 * �ő�l
		 */
		static const KsVector2d			MAX;

		/**
		 * �ŏ��l
		 */
		static const KsVector2d			MIN;
};

/*************************************************************************************************/
/*---------------------------<< �C�����C�������w�b�_�[�t�@�C�� >>------------------------------------*/
							#include "KsVector2d.inl"
/*-----------------------------------------------------------------------------------------------*/
/*************************************************************************************************/

ksNS_KS_END

#endif /* __KSVECTOR2D_H__ */
