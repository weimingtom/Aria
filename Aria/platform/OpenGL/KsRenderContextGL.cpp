/************************************************************************************************/
/** 
 * @file		KsRenderContextGL.cpp
 * @brief		描画コンテキスト(GL用)
 * @author		A567W
 * @date		2004/08/17
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>											 */
/*==============================================================================================*/
#include "KsRenderContextGL.h"

#include "KsCommandListGL.h"

/*==============================================================================================*/
/*									  << 宣言 >>										    		*/
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/*
 * コンストラクタ
 */
/************************************************************************************************/
KsRenderContextGL::KsRenderContextGL()
    : m_pCommandBuffer( ksNULLPTR )
    , m_commandBufferSize( 0 )
{
}

/************************************************************************************************/
/*
 * コンストラクタ
 */
/************************************************************************************************/
KsRenderContextGL::KsRenderContextGL( KsUInt32 commandBufferSize )
    : m_commandBufferSize( commandBufferSize )
{
    m_pCommandBuffer = ksNew KsByte[ commandBufferSize ];
}

/************************************************************************************************/
/*
 * デストラクタ
 */
/************************************************************************************************/
KsRenderContextGL::~KsRenderContextGL()
{
    ksDELETEARRAY( m_pCommandBuffer );
}

/************************************************************************************************/
/*
 * シーンをクリアする
 * @param		flags		描画フラグ
 * @param		color		クリアーカラー
 * @param		depth		ディプスクリアする値
 * @param		stencil		ステンシルクリアする値
 */
/************************************************************************************************/
void KsRenderContextGL::clearScene( KsUInt32 flags, KsColor color, KsReal depth, KsUInt32 stencil )
{
}

/************************************************************************************************/
/*
 * 深度バッファをクリアする
 * @param		flags		クリアフラグ
 * @param		depth		ディプスクリアする値
 * @param		stencil		ステンシルクリアする値
 */
/************************************************************************************************/
void KsRenderContextGL::clearDepthStencil( KsRenderTarget* pTarget, KsUInt32 flags, KsReal depth, KsUInt32 stencil )
{
}

/************************************************************************************************/
/*
 * シーンをクリアする
 * @param	numViews		クリアーするレンダー ターゲットの数
 * @param	flags			描画フラグ
 * @param	color			クリアーカラー
 * @param	depth			ディプスクリアする値
 * @param	stencil			ステンシルクリアする値
 */
/************************************************************************************************/
void KsRenderContextGL::clearScenes( KsUInt32 numViews, KsUInt32 flags, KsColor color, KsReal depth, KsUInt32 stencil )
{
}

/************************************************************************************************/
/*
 * レンダーターゲットをセットする
 * @param	pRenderTargetView		描画ターゲット
 * @param	pDepthStencilView		深度ステンシルターゲット
 */
/************************************************************************************************/
void KsRenderContextGL::setRenderTarget( KsRenderTarget* pRenderTargetView, KsRenderTarget* pDepthStencilView )
{
}

/************************************************************************************************/
/*
 * @param	numViews				バインドするレンダー ターゲットの数
 * @param	pRenderTargetView		レンダー ターゲットの配列
 * @param	pDepthStencilView		深度ステンシルターゲット
 */
/************************************************************************************************/
void KsRenderContextGL::setRenderTargets( KsUInt32 numViews, KsRenderTarget** ppRenderTargetView, KsRenderTarget* pDepthStencilView )
{
}

/************************************************************************************************/
/*
 * ビューポートをセットする
 * @param		pViewport			ビューポート設定
 */
/************************************************************************************************/
void KsRenderContextGL::setViewports( const KsViewport* pViewport )
{
}

/************************************************************************************************/
/*
 * インデックスバッファをセットする
 */
/************************************************************************************************/
void KsRenderContextGL::setVertexBuffer( const KsVertexBuffer* pBuffer )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setIndexBuffer( const KsIndexBuffer* pBuffer )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setVertexBuffers( KsUInt32 startSlot, KsUInt32 numBuffers, const KsVertexBuffer* pBuffer, const KsUInt32* pStride, const KsUInt32* pOffset )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setIndexBuffer( const KsIndexBuffer* pBuffer, KsUInt32 indexFormat, KsUInt32 offset )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setInputLayout( KsInputLayout* pInputLayout )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setPrimitiveTopology( KS_PRIMITIVE_TOPOLOGY type )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setVertexShader( KsVertexShader* pShader )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setPixelShader( KsPixelShader* pShader )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setComputeShader( KsComputeShader* pShader )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::draw( KsUInt32 vertexCount, KsUInt32 startVertexLocation )
{
    //　描画
    //glDrawElements( GL_TRIANGLE_STRIP, sizeof(indexes), GL_UNSIGNED_SHORT, NULL );
    //glDrawElements( GL_TRIANGLE_STRIP, sizeof(indexes), GL_UNSIGNED_INT, NULL );
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::drawIndexed( KsUInt32 indexCount, KsUInt32 startIndexLocation, KsInt32 baseVertexLocation )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setVertexConstantBuffers( KsUInt32 startSlot, KsUInt32 numBuffers, const KsConstantBuffer* pConstantBuffers )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setPixelConstantBuffers( KsUInt32 startSlot, KsUInt32 numBuffers, const KsConstantBuffer* pConstantBuffers )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::updateConstantBuffers( KsConstantBuffer* pConstantBuffers, const void* pSrcData )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setComputeConstantBuffer( KsUInt32 startSlot, const KsConstantBuffer* pConstantBuffers )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setComputeTexture( KsUInt32 startSlot, const KsTexture* pTexture )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setComputeTextures( KsUInt32 startSlot, KsUInt32 numTexture, const KsTexture** pTextures )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setComputeTextures( KsUInt32 startSlot, KsUInt32 numTexture, KsTexture** pTextures )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setVertexTexture( KsUInt32 startSlot, KsUInt32 numViews, const KsTexture* pTexture )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setVertexSamplers( KsUInt32 startSlot, KsUInt32 numViews, const KsSamplerState* pSampler )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setPixelTexture( KsUInt32 startSlot, KsUInt32 numViews, const KsTexture* pTexture )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setPixelSamplers( KsUInt32 startSlot, KsUInt32 numViews, const KsSamplerState* pSampler )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setRasterizerState( KsRasterizerState* pRasterizerState )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setBlendState( KsBlendState* pBlendState, const KsReal blendFactor[ 4 ], KsUInt32 sampleMask )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setDepthStencilState( KsDepthStencilState* pDepthStencilState, KsUInt32 stencilRef )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::setUnorderedAccessViews( KsUInt32 startSlot, KsUInt32 numUAVs, KsUnorderedAccessView** ppUnorderedAccessViews, const KsUInt32* pUAVInitialCounts )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::dispatch( KsUInt32 threadGroupCountX, KsUInt32 threadGroupCountY, KsUInt32 threadGroupCountZ )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::read( KsBufferObject* pBuffer, void* pData, KsUInt32 size )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::write( KsBufferObject* pBuffer, void* pData, KsUInt32 size, KsUInt32 flags )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void* KsRenderContextGL::map( KsBufferObject* pBuffer, KsUInt32 flags )
{
	return NULL;
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::unmap( KsBufferObject* pBuffer )
{
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::clearState()
{
}


/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
KsBool KsRenderContextGL::finishCommandList( KsBool restoreDeferredContextState, KsCommandList* pCommandList )
{
    ksUNREFERENCED_PARAMETER( restoreDeferredContextState );
    ksUNREFERENCED_PARAMETER( pCommandList );

	return ksTRUE;
}

/************************************************************************************************/
/*
 *
 */
/************************************************************************************************/
void KsRenderContextGL::executeCommandList( KsCommandList* pCommandList, KsBool restoreDeferredContextState )
{
    ksUNREFERENCED_PARAMETER( restoreDeferredContextState );

    KsCommandListGL*    pCommandListGL = r_cast<KsCommandListGL*>( pCommandList );
}


ksNS_KS_END
