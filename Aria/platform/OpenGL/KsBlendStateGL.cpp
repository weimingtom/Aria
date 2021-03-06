/************************************************************************************************/
/** 
 * @file		KsBlendStateGL.cpp
 * @brief		DirectX用深度ステンシルステート
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsBlendStateGL.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/*
 * 
 */
/************************************************************************************************/
KsBlendStateGL::KsBlendStateGL( KsRenderSystemGL* pRenderSystem, const KS_BLEND_DESC* pBlendStateDesc )
	: KsBlendState( pBlendStateDesc )
{
}

/************************************************************************************************/
/*
 * 
 */
/************************************************************************************************/
KsBlendStateGL::~KsBlendStateGL()
{
	destroy();
}

/************************************************************************************************/
/*
 * 
 */
/************************************************************************************************/
void KsBlendStateGL::destroy()
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void* KsBlendStateGL::getRenderResource()
{
	return &m_blendStateDesc;
}

ksNS_KS_END

