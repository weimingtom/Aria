/************************************************************************************************/
/** 
 * @file		KsFileThread.cpp
 * @brief		�t�@�C���X���b�h
 * @author		A567W
 * @date		2011/07/02
 * @since		2011/07/02
 * @version		1.0.0
 */
/************************************************************************************************/
#ifndef __KSFILETHREAD_H__
#define __KSFILETHREAD_H__

/*==============================================================================================*/
/*                                 << �C���N���[�h >>                                            */
/*==============================================================================================*/
#include "KsFileCommon.h"

/*==============================================================================================*/
/*                                     << ��` >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << �錾 >>                                               */
/*==============================================================================================*/

ksNS_KS_BEGIN

class KsFileSystem;

/************************************************************************************************/
/**
 * �t�@�C���X���b�h
 * @class	KsFileThread
 * @author  A567W
 * @since   2003/03/22
 * @version ----/--/--
 */
/************************************************************************************************/
class ksENGINE_API KsFileThread
{
	public:
		/**
		 * �R���X�g���N�^
		 */
										KsFileThread( KsFileSystem* pFileSystem, ksTHREAD_PRIORITY_TYPE priority, KsUInt32 prosessor );

		/**
		 * �f�X�g���N�^
		 */
										~KsFileThread();

        /**
         * �X���b�h�̃��C���֐�
         * @return	���s�I������
         */
        KsUInt32                        workerFunc();

		/**
		 * �t�@�C���X���b�h�����s����
		 */
		KsBool							run();

		/**
		 * �E�G�C�g�C�x���g���Z�b�g����
		 */
		void							setWaitEvent();

		/**
		 * �����C�x���g���Z�b�g����
		 */
		void							setSyncEvent();

		/**
		 * �E�G�C�g�C�x���g�����Z�b�g����
		 */
		void							resetWaitEvent();

		/**
		 * �����C�x���g�����Z�b�g����
		 */
		void							resetSyncEvent();

	private:
        KsThread*                       m_pFileThread;          /**< File Therad        */
		KsFileSystem*					m_pFileSystem;			/**< �t�@�C���V�X�e��		*/
		ksTHREAD_PRIORITY_TYPE			m_priority;				/**< �v���C�I���e�B		*/
		KsUInt32						m_prosessor;			/**< �v���Z�b�T�ԍ�		*/
		KsBool							m_bThreadLoop;			/**< �X���b�h���[�v		*/
		KsEvent                         m_waitEvent;			/**< �E�G�C�g�C�x���g		*/
		KsEvent                         m_syncEvent;			/**< �����C�x���g			*/
};

ksNS_KS_END


#endif	/* __KSFILETHREAD_H__ */

