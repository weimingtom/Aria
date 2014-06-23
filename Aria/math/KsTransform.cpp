/************************************************************************************************/
/** 
 * @file		KsTransform.cpp
 * @brief		マトリックス操作
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsTransform.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

const KsTransform KsTransform::IDENTITY( KsMatrix3x3::IDENTITY, KsVector3d::ZERO );

/************************************************************************************************/
/*
 * コンストラクタ
 */
/************************************************************************************************/
KsTransform::KsTransform()
{
}

KsTransform::KsTransform( const KsQuaternion& q, const KsVector3d& c ) 
 : m_basis(q)
 , m_origin(c)
{}

KsTransform::KsTransform( const KsMatrix3x3& b, const KsVector3d& c )
 : m_basis(b)
 , m_origin(c)
{}
	  

KsTransform::KsTransform( const KsTransform& other )
 : m_basis(other.m_basis)
 , m_origin(other.m_origin)
{
}

KsTransform KsTransform::operator*(const KsTransform& t) const
{
	return KsTransform(m_basis * t.m_basis, (*this)(t.m_origin));
}

ksNS_KS_END

