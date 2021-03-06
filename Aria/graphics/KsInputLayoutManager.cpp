/************************************************************************************************/
/** 
 * @file		KsInputLayoutManager.cpp
 * @brief		入力レイアウトマネージャ
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>                                            */
/*==============================================================================================*/
#include "KsInputLayoutManager.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

template<> KsInputLayoutManager* KsSingleton< KsInputLayoutManager >::m_pInstance = 0;

/************************************************************************************************/
/*
 * シングルトンの参照を取得
 * @return							シングルトンの参照
 */
/************************************************************************************************/
KsInputLayoutManager& KsInputLayoutManager::getInstance()
{  
	return (*m_pInstance);  
}
/************************************************************************************************/
/*
 * シングルトンのポインタを取得
 * @return							シングルトンのポインタ
 */
/************************************************************************************************/
KsInputLayoutManager* KsInputLayoutManager::getInstancePtr()
{
	return m_pInstance;
}

/************************************************************************************************/
/**
 * コンストラクタ
 */
/************************************************************************************************/
KsInputLayoutManager::KsInputLayoutManager()
{
}

/************************************************************************************************/
/**
 * デストラクタ
 */
/************************************************************************************************/
KsInputLayoutManager::~KsInputLayoutManager()
{
}

ksNS_KS_END

