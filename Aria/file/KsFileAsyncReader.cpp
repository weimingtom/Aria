/************************************************************************************************/
/** 
 * @file		KsFileAsyncReader.cpp
 * @brief		�t�@�C���X���b�h
 * @author		A567W
 * @date		2011/07/02
 * @since		2011/07/02
 * @version		1.0.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << �C���N���[�h >>                                           */
/*==============================================================================================*/
#include "KsFileAsyncReader.h"
#include "KsFileSystem.h"
#include "KsFileBuffer.h"

/*==============================================================================================*/
/*                                     << ��` >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << �錾 >>                                               */
/*==============================================================================================*/

ksNS_KS_BEGIN

/************************************************************************************************/
/*
 * �R���X�g���N�^
 * �����ǂݍ���(�ǂݍ��݂��I������܂ő҂�)
 * @param		fileName		�t�@�C����
 */
/************************************************************************************************/
KsFileAsyncReader::KsFileAsyncReader( const KsString& fileName )
{
	m_fileName = fileName;

	KsFileSystem*	pFileSystem = KsFileSystem::getInstancePtr();

	pFileSystem->pushRequest( this );
}

/************************************************************************************************/
/*
 * �R���X�g���N�^
 * �����ǂݍ���(�ǂݍ��݂��I������܂ő҂�)
 * @param		pFileName		�t�@�C����
 */
/************************************************************************************************/
KsFileAsyncReader::KsFileAsyncReader( const KsChar* pFileName )
{
	KsFileAsyncReader( KsString(pFileName) );
}

/************************************************************************************************/
/*
 * �f�X�g���N�^
 */
/************************************************************************************************/
KsFileAsyncReader::~KsFileAsyncReader()
{
}

/************************************************************************************************/
/*
 * �R�[���o�b�N�i���C���p�j
 */
/************************************************************************************************/
void KsFileAsyncReader::callback()
{
	if( ksREADING_END == m_status )
	{
		KsFileBuffer file( m_pBuffer, m_readSize, ksFILE_FLAG_DEFAULT, ksFALSE );

		readEndCB( &file );
	
		m_status = ksREADING_CLOSE_IDLE;
	}
}

/************************************************************************************************/
/*
 * �R�[���o�b�N�i�X���b�h�p�j
 */
/************************************************************************************************/
void KsFileAsyncReader::callbackThread()
{
	KsFileBuffer file( m_pBuffer, m_readSize, ksFILE_FLAG_DEFAULT, ksFALSE );

	readEndThreadCB( &file );
}

/************************************************************************************************/
/*
 * �ǂݍ��ݏI�����̃R�[���o�b�N�֐�
 * @param		pFile			�t�@�C���I�u�W�F�N�g
 */
/************************************************************************************************/
KsBool KsFileAsyncReader::readEndCB( KsFileObject* pFile )
{
	return ksTRUE;
}

/************************************************************************************************/
/*
 * �ǂݍ��ݏI�����̃R�[���o�b�N�֐�
 * @param		pFile			�t�@�C���I�u�W�F�N�g
 */
/************************************************************************************************/
KsBool KsFileAsyncReader::readEndThreadCB( KsFileObject* pFile )
{
	return ksTRUE;
}

ksNS_KS_END

