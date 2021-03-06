#ifndef MSG_QUE_H
#define MSG_QUE_H

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include "prototype.h"
#include "queue.h"

typedef struct 
{
	Queue   * pQueue;
	sem_t     producer;	
	sem_t     consumer;	
}MessageQue;

extern returntype putQueue(MessageQue * pMsgQue, void *pData);

extern void * getQueue(MessageQue * pMsgQue);

extern void * getQueueNonblocking(MessageQue * pMsgQue);

extern void initMsgQueue(MessageQue * pMsgQue);

extern MessageQue * createMsgQueue();

#endif
